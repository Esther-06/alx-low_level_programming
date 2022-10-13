/**
 * print_name - function to print name
 *
 *  @name: name to print
 *
 *  Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
