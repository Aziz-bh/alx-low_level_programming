#include "main.h"
/**
 * main - Entry point print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
