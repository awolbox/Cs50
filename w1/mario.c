/* mario.c
 *
 * A program that promts the user for a nan-negative integer
 * then prints out a "mario style" half-pyrimid 
 * whose height is based on that users unput
 *
 * awolbox
 *
 * 9/24/17
 *
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int usr;
	char spc = 32;
	char hsh = 35;

	// prompt and validate unput
	do
	{
		printf("Give me a positive integer no greater than 23 please: ");
		usr = get_int();
	}
	while (usr > 23 || usr <= 0);
	
	// draw pyramid
	for (int i = 0; i < usr; i++)
	{
		// spaces
		for (int s =0; s < usr - i - 1; s++)
		{
			printf("%c", spc);
		}
		// hashes
		for (int h = 0; h < i + 2; h++)
		{
			printf("%c", hsh);
		}
		// newline
		printf("\n");
	}
}
