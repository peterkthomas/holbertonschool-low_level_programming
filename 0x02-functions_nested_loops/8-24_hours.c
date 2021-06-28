#include "holberton.h"

/**
 * jack_bauer - prints minutes and hours 00:00->23:59
 *
 */
void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		int hour_tens = i / 10;
		int hour_ones = i % 10;

		for (int j = 0; j < 60; j++)
		{
			int minute_tens = j / 10;
			int minute_ones = j % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_ones + '0');
			_putchar(':');
			_putchar(minute_tens + '0');
			_putchar(minute_ones + '0');
			_putchar('\n');
		}
	}
}
