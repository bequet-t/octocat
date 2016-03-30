/*
** fonction.h for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:15:50 2016 BEQUET Theo
** Last update Fri Jan 22 16:15:52 2016 BEQUET Theo
*/
#ifndef __FONCTION_H__
#define __FONCTION_H__

#include "cat.h"
#include "structmap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void my_putchar(char c);

void my_putstr(char *str);

char *readline();

void affichage();

void deco();

void affdeco();

void deco2();

void Octocat();

void menu();

// Mode de jeu casual
int casual(t_Octocat *player);

int hardcore(t_Octocat *player);

// Octoview (jeu)
int octoview(t_Octocat *player);

int blind(t_Octocat *player);

int blindOctoview(t_Octocat *player);

void affMap(t_Map *map, t_Octocat *cat);

void affMapOctoview(t_Map *lab, t_Octocat *cat);

void affMapBlind(t_Map *lab, t_Octocat *cat);

void affMapBlindOctoview2(t_Map *lab, t_Octocat *cat, int i, int j);

void affMapBlindOctoview(t_Map *lab, t_Octocat *cat);

t_Map *choixMap();

t_Map *map1();

t_Map *map2();

t_Map *map3();

// Prend la structure du chat et le labyrinthe en parametre, retourne le labyrinthe modifié
char **deplacement(char **labyrinthe, t_Octocat *cat);

char **deplacementhard(t_Map *labyrinthe, t_Octocat *cat);

t_Octocat *deplacementhard2(t_Octocat *cat, char c);

// Crée le chat
t_Octocat *def_cat();

#endif
