#include "main.h"

/**
 * jack_bauer - function that prints
 * every minute of the day
 *
 * Description: print every minutes 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
