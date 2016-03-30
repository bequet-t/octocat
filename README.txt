 |-- File list --| 

main.c            - Fonction principale appelant le menu
menu.c            - Affichage + choix du mode
casual.c          - Mode casual
hardcore.c        - Mode hardcore
octoview.c        - Mode octoview
blind.c           - Mode aveugle
blindOctoview.c   - Mode Octoview aveugle
map.c             - Choix des maps
map1.c            - Chargement map1
map2.c            - Chargement map2 
map3.c            - Chargement map3
deplacement.c     - Deplacement casual / hardcore
cat.h             - Structure de l'octocat
function.h        - Liste des fonctions
structmap.h       - Structure des maps
my_putchar.c      - Fonction d'affichage caractères
readline.c        - Fonction entrée standard
deco.c            - Ascii art
map1              - Map petite
map2              - Map moyenne
map3              - Map large


  |-- Présentation --|

Octocat à pour but de trouver la sortie d'un labyrinthe dans la peau d'un Octocat.
La sortie est signalée par une case marron.

Octocat dispose de 5 modes distinct :

 1 - Casual :
	Affichage entier de la map. Déplacement pas par pas.

 2 - Hardcore :
 	Affichage entier de la map. Déplacement en un seul coup.

 3 - Octoview :
 	Affichage réduit de la map, visibilité seulement à 1 case autour de l'octocat.
 	Déplacement pas par pas.

 4 - Blind :
 	Aucun affichage de map. Déplacement pas par pas.

 5 - Blind Octoview :
 	Affichage entier de la map, sauf les 8 cases autour de l'octocat.
 	Deplacement pas par pas


  |-- Fonctionnement --|

  L'Octocat ainsi que nos maps sont disposes dans des structures.

   - Pour l'octocat :
   		Sa structure contient l'icone ( pre-defini par '*') et ces coordonnees de depart ( x et y ).

   - Pour les maps :
   		Sa structure contient la hauteur et largeur de la map, ses coordonnees de depart et d'arrivée, ainsi que le labyrinthe stocké dans un char **.

  Tous les modes de jeu, excepté le HardCore, utilisent la meme fonction de déplacement. Cela nous a permis d'utiliser beaucoup moins de fichier. L'Octocat se deplacera de case en case dans le tableau suite à l'appel de ces fonctions.

  |-- Idées --|

    - Nous avons eu l'idée de créer un tableau des scores, mais nous avons du abandonner suite à des tests non concluants (difficultés à convertir un score (int) vers un affichage (char *)), car l'écriture et l'affichage du fichier de sauvegarde était fait.

    - Nous avons aussi pensé à créer plusieurs niveaux à la suite, mais avons abandonné l'idée à cause du temps.

  |-- Log --|

  2016-01-18 10:55:58 (Mon, 18 Jan 2016)
  	Creation du repertoire rendu

  2016-01-18 10:58:29 (Mon, 18 Jan 2016)
  	Ajout de la fonction my_putchar

  2016-01-18 11:25:32 (Mon, 18 Jan 2016)
  	V0.2 : - Fonction deplacement (wasd)
  		   - Structure de l'octocat
  		   - Ajout de la fonction my_putstr

  2016-01-18 11:29:53 (Mon, 18 Jan 2016)
  	Correction du my_putchar

  2016-01-18 11:46:55 (Mon, 18 Jan 2016)
  	Header pour fonctions

  2016-01-18 13:25:25 (Mon, 18 Jan 2016)
  	V0.3 : - Menu
  		   - options pour quitter

  2016-01-18 13:56:35 (Mon, 18 Jan 2016)
  	V0.4 : - Choix du caractere de l'Octocat
  		   - Malloc de sa structure

  2016-01-18 14:08:34 (Mon, 18 Jan 2016)
  	V0.4.5 : - Ajout de map.c

  2016-01-18 14:44:05 (Mon, 18 Jan 2016)
  	V0.4.6 : - Mode casual ajoute sans l'Octocat

  2016-01-19 14:15:56 (Tue, 19 Jan 2016)
  	V0.5 : - Recuperer une map depuis fichier exterieur
  		   - Deplacement de l'Octocat fonctionnel
  		   - Reste a gerer les murs

  2016-01-19 14:32:16 (Tue, 19 Jan 2016)
  	V1.0 : - Mode casual fonctionnel a 100%

  2016-01-20 10:17:04 (Wed, 20 Jan 2016)
  	V1.1 : - Passage des maps en structure

  2016-01-20 10:54:31 (Wed, 20 Jan 2016)
  	V1.2 : - Ajout du mode hardcore fonctionnel

  2016-01-20 14:13:12 (Wed, 20 Jan 2016)
  	V1.3 : - Ajout d'un choix de map
  		   - Ajout de 2 autres maps

  2016-01-20 14:17:04 (Wed, 20 Jan 2016)
  	V2.0 : - Ajout mode Octoview

  2016-01-21 09:42:11 (Thu, 21 Jan 2016)
  	V2.1 : - Ajout mode Blind

  2016-01-21 11:22:45 (Thu, 21 Jan 2016)
  	V3.0 : - Verification + correction de la norme

  2016-01-21 16:13:20 (Thu, 21 Jan 2016)
  	V3.1 : - Aspect visuel
  		   - Ajout mode Blind Octoview

  2016-01-22 11:40:31 (Fri, 22 Jan 2016)
  	V3.5 : - Creation du Makefile


  