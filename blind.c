/*
** blind.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:14:56 2016 BEQUET Theo
** Last update Fri Jan 22 16:14:59 2016 BEQUET Theo
*/
#include "fonction.h"

int 		blind(t_Octocat *player)
{
	t_Map 	*labirynthe;

	labirynthe = choixMap();
	player->y = labirynthe->y_depart;
	player->x = labirynthe->x_depart;
	labirynthe->map[player->y][player->x] = player->icone;
	while (player->x != labirynthe->x_arrive ||
			player->y != labirynthe->y_arrive)
	{
		affMapBlind(labirynthe, player);
		labirynthe->map = deplacement(labirynthe->map, player);
		if (labirynthe->map[player->y][player->x] == ' ')
			labirynthe->map[player->y][player->x] = player->icone;
		else
		{
			my_putstr("Vous avez touché un mur, perdu !\n");
			free(labirynthe);
			return(0);
		}
	}
	affMap(labirynthe, player);
	my_putstr("Bravo, vous avez atteind la ligne d'arrivé !\n");
	free(labirynthe);
	return(0);
}

void 	affMapBlind(t_Map *lab, t_Octocat *cat)
{
	int i;
	int j;

	i = 0;
	j = 0;
	my_putstr("\033c");
	while (lab->map[i])
	{
		while (lab->map[i][j])
		{
			if (i == cat->y && j == cat->x)
				my_putchar(cat->icone);
			else if (i == lab->y_arrive && j == lab->x_arrive)
				my_putstr("\033[43m \033[0m");
			else
				my_putstr(" ");
			j++;
		}
		my_putstr("\n");
		i++;
		j = 0;
	}
	my_putstr("\n\n");
}
