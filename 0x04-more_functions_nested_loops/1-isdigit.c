#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
*@c: parameter in consideration
*/
int _isdigit(int c)
{
	if (c > 47 && c <= 57)
	{
		return (1);
	}
	return (0);
}
