/*
** structmap.h for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:16:52 2016 BEQUET Theo
** Last update Fri Jan 22 16:16:54 2016 BEQUET Theo
*/
#ifndef __STRUCTMAP_H__
#define __STRUCTMAP_H__

typedef struct s_Map
{
	int height;
	int width;
	int x_depart;
	int y_depart;
	int x_arrive;
	int y_arrive;
	char **map;
} t_Map;

#endif
