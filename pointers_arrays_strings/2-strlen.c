#include "main.h"
/**
  * _strlen - returns the length of a string
  *
  * @s: counter
  * Return: Srtring length
  */
int _strlen(char *s)
{
	int temp = 0;

	while (s[temp])
		temp++;
	return (temp);
}
