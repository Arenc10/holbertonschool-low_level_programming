#include "main.h"
/**
 * _strspn - Function that gets the length
 * @s: first operand pointer that points to char
 * @accept: second operand points to char
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int exists = 0;
	unsigned int characterNum = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++;)
		{
			if (s[i] == accept[j])
			{
				exists = 1;
				break;
			}
		}
		if (exists == 0)
		{
			characterNum = i;
		}
	}
}
