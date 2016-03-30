/*
** readline.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:19:09 2016 BEQUET Theo
** Last update Fri Jan 22 16:19:13 2016 BEQUET Theo
*/
/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caracteres sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoi une chaine
  allouée.
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char		*readline()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
