/*
** deplacement.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:17:53 2016 BEQUET Theo
** Last update Fri Jan 22 16:17:55 2016 BEQUET Theo
*/
#include "fonction.h"

// Prend la structure du chat et le labyrinthe en parametre, retourne le labyrinthe modifié
char 		**deplacement(char **labyrinthe, t_Octocat *cat)
{
	char 	*c;

	labyrinthe[cat->y][cat->x] = ' ';
	my_putstr("Entrez votre commande (w,a,s,d)\n");
	my_putstr(" \033[36m>\033[0m ");
	c = readline();
	if (c[0] == 'a')
		cat->x = cat->x - 1;
	else if (c[0] == 'd')
		cat->x = cat->x + 1;
	else if (c[0] == 'w')
		cat->y = cat->y - 1;
	else if (c[0] == 's')
		cat->y = cat->y + 1;
	else
		my_putstr("La commande rentrée est fausse.\n");
	return (labyrinthe);
}
void	affDep(char c)
{
	my_putstr("\n\n");
	my_putchar(c);
	my_putstr("\n\n");
	usleep(100000);
}

char 		**deplacementhard(t_Map *labyrinthe, t_Octocat *cat)
{
	char 	*c;
	int 	i;

	i = 0;
	my_putstr("Entrez le chemin jusqu'a la sortie (w,a,s,d)\n~>");
	c = readline();
	while (c[i] != '\0')
	{
		labyrinthe->map[cat->y][cat->x] = ' ';
		cat = deplacementhard2(cat, c[i]);
		if (labyrinthe->map[cat->y][cat->x] == ' ')
			labyrinthe->map[cat->y][cat->x] = cat->icone;
		else
		{
			c = "";
			return (labyrinthe->map);
		}
		affMap(labyrinthe, cat);
		affDep(c[i]);
		if (labyrinthe->map[cat->y][cat->x] == labyrinthe->map[labyrinthe->y_arrive][labyrinthe->x_arrive])
			return(labyrinthe->map);
		i++;
	}
	c = "";
	return (labyrinthe->map);
}

t_Octocat 	*deplacementhard2(t_Octocat *cat, char c)
{
	if (c == 'a')
		cat->x = cat->x - 1;
	else if (c == 'd')
		cat->x = cat->x + 1;
	else if (c == 'w')
		cat->y = cat->y - 1;
	else if (c == 's')
		cat->y = cat->y + 1;
	else
	{
		cat->y = 0;
		cat->x = 0;
		my_putstr("\033cLa commande rentrée est fausse.\n");
	}
	return(cat);
}










