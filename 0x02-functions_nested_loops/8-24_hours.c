#include "main.h"
/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar(':');
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar('\n');
		}
	}

}
