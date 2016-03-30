/*
** hardcore.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:18:03 2016 BEQUET Theo
** Last update Fri Jan 22 16:18:05 2016 BEQUET Theo
*/
#include "fonction.h"

int			hardcore(t_Octocat *player)
{
	t_Map	*labirynthe;


	labirynthe = choixMap();
	player->y = labirynthe->y_depart;
	player->x = labirynthe->x_depart;
	labirynthe->map[player->y][player->x] = player->icone;
	affMap(labirynthe, player);
	labirynthe->map = deplacementhard(labirynthe, player);

	if (player->x != labirynthe->x_arrive || player->y != labirynthe->y_arrive)
	{
		my_putstr("\nVous avez touché un mur, perdu !\n");
		free(labirynthe);
	 	return(0);
	}
	affMap(labirynthe, player);
	my_putstr("Bravo, vous avez atteind la ligne d'arrivé !\n");
	free(labirynthe);
	return(0);
}
