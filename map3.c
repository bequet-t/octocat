/*
** map3.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:18:44 2016 BEQUET Theo
** Last update Fri Jan 22 16:18:48 2016 BEQUET Theo
*/
#include "fonction.h"

t_Map	*defMap3(t_Map *map_tmp)
{
	map_tmp->height = 14;
	map_tmp->width = 29;
	map_tmp->x_depart = 0;
	map_tmp->y_depart = 5;
	map_tmp->x_arrive = 29;
	map_tmp->y_arrive = 7;
	return(map_tmp);
}

char	**creamap3(char *buf, char **tmp)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	j = 0;
	while (buf[count] != '\0')
	{
		if (buf[count] != '\n')
		{
			tmp[i][j] = buf[count];
			j++;
		}
		else if (buf[count] == '\n')
		{
			tmp[i][j] = '\0';
			j = 0;
			i++;
		}
		count++;
	}
	return (tmp);
}

t_Map		*map3()
{
	t_Map 	*map_tmp;
	char 	**tmp;
	int 	i;
	int 	file;
	char 	*buf;

	i = 0;
	map_tmp = malloc(sizeof(t_Map) + 1);
	map_tmp = defMap3(map_tmp);
	buf = malloc(512);
	if (buf == NULL)
		return(0);
	file = open("map3", O_RDONLY);
	read(file, buf, 512);
	tmp = malloc((map_tmp->height + 1) * sizeof(char *) + 1);
	while (i <= map_tmp->height)
	{
		tmp[i] = malloc((map_tmp->width + 1) * sizeof(char) + 1);
		i++;
	}
	map_tmp->map = creamap3(buf, tmp);
	free(buf);
	free(tmp);
	close(file);
	return(map_tmp);
}
