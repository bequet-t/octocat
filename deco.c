/*
** deco.c for  in /Users/bequet_t/Documents/C/Octocat/Up_Octocat
** 
** Made by BEQUET Theo
** Login   <bequet_t@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:15:31 2016 BEQUET Theo
** Last update Fri Jan 22 16:15:41 2016 BEQUET Theo
*/
#include "fonction.h"


void 	affdeco()
{
	deco();
	deco2();
	sleep(2);
	my_putstr("\033c");
	Octocat();
}

void 	deco()
{
	my_putstr("         NNNN                                    NNNN       \n");
	my_putstr("        N    NNN                             NNNN    N      \n");
	my_putstr("       N        NNNNNNNNNNNNNNNNNNNNNNNNNNNNN         N     \n");
	my_putstr("       N                                              N     \n");
	my_putstr("       N                                              N     \n");
	my_putstr("       N                                              N     \n");
	my_putstr("       N                                              N     \n");
	my_putstr("      NN                                               N    \n");
	my_putstr("     N                                                  NN  \n");
	my_putstr("    N                                                     N \n");
	my_putstr("   N                                                      N \n");
	my_putstr("   N            dhyyyyyyyyhhhhhhhhhhhhyyyyyyyhd            N\n");
	my_putstr("   N         ds/:-----------------------------:/od         N\n");
	my_putstr("   N        y:-....```....................```....:s        N\n");
	my_putstr("   N       s-....` .:-``................``-:. `...-+       N\n");
	my_putstr("    N     d-....` :-oso.`..............`.+-so/ `....y      N\n");
	my_putstr("    N     h..... `o+oss:`..............`/oosso` ....o     N \n");
	my_putstr("    N     d-....  +ssso-`..............`-osss+  ....y     N \n");
	my_putstr("     N     +..... `://.`......---.......`-//:` ....-d    N  \n");
	my_putstr("      N     /.....````........-+/.........````....-y    N   \n");
	my_putstr("       NN    s:-.............:---:-.............-:y    N    \n");
}

void 	deco2()
{	
	my_putstr("         NNN   ho/:-.........-::::..........--:+y   NNN     \n");
	my_putstr("    NNN     NNNNN dhysso++/////////////++osyhd NNNNN        \n");
	my_putstr("  NN h NNN       NNNNNNNNNNNN      NNNNNNNNNNNN             \n");
	my_putstr(" No N ddd NN          NNNNNNNNNNNNNNNNNN                    \n");
	my_putstr(" h/N  N y   NN       N                  NN                  \n");
	my_putstr("       N dh   NNNNNNN          NN         N                 \n");
	my_putstr("        NN dh sd sddd    NN    NN    N     N                \n");
	my_putstr("          NNNNN     N     N    NN     N    N                \n");
	my_putstr("               NNNNNN     N    NN     N    N                \n");
	my_putstr("                    N     N    NN     N    N                \n");
	my_putstr("                    N    NN    NN    NN    N                \n");
	my_putstr("              NNdhysy    /s    +s    +o    oosyd NN         \n");
	my_putstr("         N ho+:-----+    :s    +s    /+    :-----:/oydN     \n");
	my_putstr("        s/---------:h   h-s    +s    /:    y:---------:oh   \n");
	my_putstr("      y:---------+y   ds:-s    /s    +-/yd  dy/----------+N \n");
	my_putstr("      -----------/+++/::-/d   y-:h   h:-:/++++:-----------y \n");
	my_putstr("      y-------------:///o  hy+---:oyd d////:-------------/N \n");
	my_putstr("        s/----------:////-:///:--////::////-----------:+h   \n");
	my_putstr("                dhsooo+//-:////-:////::///++osyh N          \n");
	my_putstr("                          NNN       NNN                     \n");

}

void 	Octocat()
{
	my_putstr("    ___     _                  _   \n");
	my_putstr("   /___\\___| |_ ___   ___ __ _| |_ \n");
	my_putstr("  //  // __| __/ _ \\ / __/ _` | __|\n");
	my_putstr(" / \\_// (__| || (_) | (_| (_| | |_ \n");
	my_putstr(" \\___/ \\___|\\__\\___/ \\___\\__,_|\\__|\n");
}
