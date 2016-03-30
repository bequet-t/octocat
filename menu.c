/*
** menu.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:16:33 2016 BEQUET Theo
** Last update Fri Jan 22 16:16:34 2016 BEQUET Theo
*/
#include "fonction.h"

void			menu()
{
	t_Octocat	*player;
	char 		commande;

	commande = '\0';
	player = def_cat();
	affdeco();
	while (commande != '6')
	{
		affichage();
		commande = getchar();
		while (getchar() != '\n');
		if (commande == '1')
			casual(player);
		else if (commande == '2')
			hardcore(player);
		else if (commande == '3')
			octoview(player);
		else if (commande == '4')
			blind(player);
		else if (commande == '5')
			blindOctoview(player);
	}
	free(player);
	my_putstr("\033c");
	my_putstr("\n\n\n\n\n\n\t\tQUIT\n\n\n\n\n\n");
}


void	affichage()
{
	my_putstr("\n\033[36m   ╔═══════════════════════════╗\n");
	my_putstr("   ║ \033[0mChoisi ton \033[1mmode\033[0m de jeux : \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m1 \033[0m- Casual               \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m2 \033[0m- HARDCORE             \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m3 \033[0m- Octoview             \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m4 \033[0m- Blind                \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m5 \033[0m- Blind Octoview       \033[36m║\n");
	my_putstr("   ║  \033[0m\033[1m6 \033[0m- Quit                 \033[36m║\n");
	my_putstr("   ╚═══════════════════════════╝\033[0m\n");
	my_putstr("     \033[36m|\033[0m Votre choix \033[36;1m>\033[0m ");
}

t_Octocat		*def_cat()
{
	t_Octocat 	*cat;

	if ((cat = malloc(sizeof(t_Octocat))) == NULL)
    	return (NULL);

    my_putstr("\033c");
    cat->icone = '*';
    cat->x = 0;
    cat->y = 0;
    return (cat);
}
