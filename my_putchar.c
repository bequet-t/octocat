/*
** my_putchar.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:18:59 2016 BEQUET Theo
** Last update Fri Jan 22 16:19:01 2016 BEQUET Theo
*/
#include <unistd.h>
#include <stdlib.h>

void  my_putchar(char c)
{
	write(1, &c, 1);
}

void  my_putstr(char *str)
{
  	while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
