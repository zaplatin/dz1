#include "stdio.h"
#include "locale.h"
#include <math.h>

int my_function(int x)
{
	int i, massive[5] = {};
	for (i = 0; i < 5; i++)
		{
			massive[i] = 0;
		}
	i = 0;
	if (x == 0)
	{
		printf("В двоичной системе: 0");
	}
	if (x < 0)
		{
		int y = abs(x);
		while (y != 0)
			{	
				if (i == 5)
				{
					return(1);
				}
				if (y % 2 == 0)
				{
					massive[i] = 0;
				}
				else
				{
					massive[i] = 1;
				}
				y = y >> 1;
				i++;
			}
			printf("В двоичной системе: -");

			for (i = i - 1; i >= 0; i--)
			{
				printf("%d", massive[i]);
			}
		}
	if (x > 0)
		{
			while (x != 0)
			{	
				if (i == 5)
				{
					return(1);
				}
				if (x % 2 == 0)
				{
					massive[i] = 0;
				}
				else
				{
					massive[i] = 1;
				}
				x = x >> 1;
				i++;
			}
			printf("В двоичной системе: ");

			for (i = i - 1; i >= 0; i--)
			{
				printf("%d", massive[i]);
			}
		}
		return(0);
}
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int a;
	printf("Введите целое десятичное число: ");
	scanf_s("%d", &a);
	my_function(a);
}
