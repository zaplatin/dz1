#include <iostream>
#include "stdio.h"
#include "locale.h"

int my_function(int x)
{
	int i, massive[99];
	for (i = 0; i < 99; i++)
		{
			massive[i] = 0;
		}
	i = 0;
	while (x != 0)
		{
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
	return(0);
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	int a;
	printf("Введите целое десятичное число: ");
	scanf_s("%d", &a);
	my_function(a);
}
