#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compares two strings.
 * @s1: address of string to be compared
 * @s2: address of string to be compared
 * Return: 0 if equal
 * negative if s1 < s2
 * positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int i, j;

	for ( i = 0; i < s1_len; i++)
	{
		for ( j = 0; j < s2_len; j++)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else if (s1[i] < s2[i])
			{
				return (-1);
			}
			else if (s1[i] > s2[i])
			{
				return (1);
			}
		}
	}
	return (0);
}
