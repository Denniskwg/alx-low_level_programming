#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i;
	char symbol[] = ",;.!?(){}\n\t\" ";
	int c;

	for (i = 0 ; symbol[i] != '\0'; i++)
	{
		for (c = 0; str[c] != '\0'; c++)
		{
			if (str[c] == symbol[i])
			{
			if (*(str + (c + 1)) >= 97 && *(str + (c + 1)) <= 122)
				*(str + (c + 1)) -= 32;
			else if (*(str + (c + 1)) > 64 && *(str + (c + 1)) < 91)
				continue;
			else if (*(str + (c + 1)) > 47 && *(str + (c + 1)) < 58)
				continue;
			}
		}
	}

	return (str);
}
