#include "holberton.h"
/**
 * jack_bauer - print every minute of the day
 * @void: variable
 * Return: j
 */
void jack_bauer(void)
{
	int t1;
	int t2;
	int t3;
	int t4;

	for (t1 = '0'; t1 <= '9'; t1++)
	{
		for (t2 = '0'; t2 <= '9'; t2++)
		{
			for (t3 = '0'; t3 <= '5'; t3++)
			{
				for (t4 = '0'; t4 <= '9'; t4++)
				{
					if ((t1 != '2' && t2 <= '9') || (t1 == '2' && t2 <= '3'))
					{
						_putchar(t1);
						_putchar(t2);
						_putchar(':');
						_putchar(t3);
						_putchar(t4);
						_putchar('\n');
					}
				}
			}
		}
	}

}
