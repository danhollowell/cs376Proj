/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw
 * @author Daniel Hollowell
 * @author Tanya L. Crenshaw and Nick Huey
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;

  printf("HUEHUEHUEHUE");

  printf("DANILS ");

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
 printf("    i_i    \n"
	 "   [V_V]   \n"
	 "    i_i  \n"
	 "   [-_-]   \n"
	 "  /|___|\\  \n"
         "   d   b  \ "
	 "LOOK AT THE\nSUPER BIRD"); 

}
