#include <stdio.h>

int main(void)
{
	long num = 612852475143;
	int count;
	int numbers[4];
	int i;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			for (i = 0; i < 4; i++)
			{
				numbers[i] = count;
			}
			num = num / count;
		}
	}
	printf("%d ", numbers[2]);
	printf("\n");
	return (0);
}
