/**
* print_name - function
* @name: param
* @f: param
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
