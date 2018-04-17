/* water.c
 *
 * A simple program that calculates how many bottles of water 
 * one may be using per shower session
 *
 * awolbox
 *
 * 9/24/17
 *
 *******************************************************
 *                                                     *
 * A showerhead spits out about 192 ounces per minute. *
 * A bottle of water is about 16 ounces.               *
 *                                                     *
 * So, 192 / 16 == 12 bottles of water per-minute.     *
 *                                                     *  
 *******************************************************/
 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int btls = 12;

	printf("How mutch time (minutes) would you say you spend in the shower: ");
	int shwr = get_int();

	printf("That's equivilent to %i bottles of water!\n", btls * shwr);
}
