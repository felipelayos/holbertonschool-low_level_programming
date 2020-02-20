/**
   * _strcmp - check the code for Holberton School students.
    *	@s1: param
    *	@s2: param
     * Return: Always 0.
      */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}

	return (0);
}
