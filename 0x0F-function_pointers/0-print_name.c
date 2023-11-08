/**
 * print_name - print a names
 * @name: the name to be printed
 * @f: the pointer for the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
