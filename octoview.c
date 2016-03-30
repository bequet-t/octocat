/*
** octoview.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:16:43 2016 BEQUET Theo
** Last update Fri Jan 22 16:16:45 2016 BEQUET Theo
*/
#include "cat.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fonction.h"
#include "structmap.h"

int			octoview(t_Octocat *player)
{
	t_Map	*labirynthe;

	labirynthe = choixMap();
	player->y = labirynthe->y_depart;
	player->x = labirynthe->x_depart;
	labirynthe->map[player->y][player->x] = player->icone;
	while (player->x != labirynthe->x_arrive ||
			player->y != labirynthe->y_arrive)
	{
		affMapOctoview(labirynthe, player);
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

void	affMapOctoview2(t_Map *lab, t_Octocat *cat, int i, int j)
{
	if ((((i <= cat->y + 1) && (i >= cat->y - 1)) &&
		((j <= cat->x + 1) && (j >= cat->x - 1))) &&
		(lab->map[i][j] == '#'))
		my_putstr("\033[41m \033[0m");
	else if (i == cat->y && j == cat->x)
		my_putchar(cat->icone);
	else if (i == lab->y_arrive && j == lab->x_arrive)
		my_putstr("\033[43m \033[0m");
	else
		my_putstr(" ");
}

void	affMapOctoview(t_Map *lab, t_Octocat *cat)
{
	int i;
	int j;

	i = 0;
	j = 0;
	my_putstr("\033c");
	while (i <= lab->height)
	{
		while (j <= lab->width)
		{
			affMapOctoview2(lab, cat, i, j);
			j++;
		}
		my_putstr("\n");
		i++;
		j = 0;
	}
	my_putstr("\n\n");
}
