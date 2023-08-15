#include "main.h"

/**
 * _islower  - chechimng for lower case
 * @c: prarameter of the function _islowercase
 * Return: 0
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
