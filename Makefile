##
## Makefile for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
## 
## Made by BEQUET Theo
## Login   <bequet_t@etna-alternance.net>
## 
## Started on  Fri Jan 22 16:19:25 2016 BEQUET Theo
## Last update Fri Jan 22 16:19:28 2016 BEQUET Theo
##
CC =	gcc
NAME =	octocat
SRC =	$(wildcard *.c)
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f
CFLAGS = -W -Wall -Werror

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all