#include "main.h"

/**
 * times_table - check the code
 *
 * Return: void.
 */
void times_table(void)
{
  int i;
  int j;
  int z;
  int currentNumber;
  int firstDigit;
  int secondDigit;
  int array[2];
  for (i = 0; i <= 9; i++)
    {
      for(j = 0; j <= 9; j++)
	{
	  currentNumber = i * j;
	  if(currentNumber <= 9)
	    {
	      array[0] = 32;
	      array[1] = currentNumber + 48;
	    }
	  if (currentNumber > 9)
	    {
	      secondDigit = (currentNumber % 10);
	      firstDigit = (currentNumber / 10);
	      array[0] = firstDigit + 48;
	      array[1] = secondDigit + 48;
	    }

	  if(j >= 1 &&)
	    {
	      _putchar(44);
	      _putchar(32);
	    }
	
	  for (z = 0; z <= 1; z++)
     	    _putchar(array[z]);
	
	}
      _putchar('\n');
    }
}
