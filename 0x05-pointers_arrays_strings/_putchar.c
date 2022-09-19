#include <unistd.h>
/**
 * _putchar - writes the character ch to stdout
 * @ch: character to print
 */
void _putchar(char ch)
{
	write(1, &ch, 1);
}
