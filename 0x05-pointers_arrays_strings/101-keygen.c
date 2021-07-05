#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int i;
	int key;
	char *str_rand = NULL;

	long val = 0;
	char range[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
	int length = 29;
	
	srand(time(0));
	while (val != 2772) 
	{
		str_rand = malloc(sizeof(char) * length - 1);

		for (i = 0; i < length; i++)
		{
			key = rand() % 68;
			str_rand[i] = range[key];
		}

		str_rand[length] = '\0';

		for (i = 0; i < length;i++)
		{
			val = str_rand[0] + str_rand[1] + str_rand[2] + str_rand[3] + str_rand[4] + str_rand[5];
			val += str_rand[6] + str_rand[7] + str_rand [ 8] + str_rand [9] + str_rand[10] + str_rand[11];
			val += str_rand[12] + str_rand[13] + str_rand[14] + str_rand[15] + str_rand[16] + str_rand[17];
			val += str_rand[18] + str_rand[19] + str_rand[20] + str_rand[21] + str_rand[22] + str_rand[23];
			val += str_rand[24] + str_rand[25] + str_rand[26]+ str_rand[27] + str_rand[28] + str_rand[29];

		}

	}

	printf("%s", str_rand);

	return (0);

}
