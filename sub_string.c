/**
 * _strstr - locates sub string
 * @h: input one
 * @n: input two
 * Return: sub string
 */
char *_strstr(char *h, char *n)
{
	for (; *h != '\0'; h++)
	{
		char *i = h;
		char *z = n;

		while (*i == *z && *z != '\0')
		{
			i++;
			z++;
		}

		if (*z == '\0')
			return (h);
	}

	return (NULL);
}
