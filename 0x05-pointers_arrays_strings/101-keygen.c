#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0;
	int key;
	char *str_rand = NULL;

	long val = 0;
	char range[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
	int length = 30;
	
	srand(time(0));
	while (val != 2772) 
	{
		val = 0;
		str_rand = malloc(sizeof(char) * (length - 1));

		for (i = 0; i < length; i++)
		{
			key = rand() % 68;
			str_rand[i] = range[key];
		}

		for (i = 0; i < length; i++)
			val += str_rand[i];
	}

	printf("%s", str_rand);

	return (0);

}
