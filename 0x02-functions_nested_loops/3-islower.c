#include "main.h"

/** function islower() checks whether a character is lowercase
* returns 1 if True and 0 if false
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
