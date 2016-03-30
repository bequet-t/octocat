/*
** map.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:18:16 2016 BEQUET Theo
** Last update Fri Jan 22 16:18:18 2016 BEQUET Theo
*/
#include "fonction.h"

t_Map 		*choixMap()
{
	char 	choix;

	choix = '\0';
	my_putstr("\n    Rentrez la map voulue\n");
	my_putstr("      1 \033[36m-\033[0m Petite (defaut)\n");
	my_putstr("      2 \033[36m-\033[0m Moyenne\n");
	my_putstr("      3 \033[36m-\033[0m Grande\n");
	my_putstr("\n     \033[36m|\033[0m Votre choix \033[36m>\033[0m ");
	choix = getchar();
	while (getchar() != '\n');
	if (choix == '1')
		return(map1());
	else if (choix == '2')
		return(map2());
	else if (choix == '3')
		return(map3());
	else
		return(map1());
}















