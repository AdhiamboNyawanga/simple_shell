#include "main.h"
/**
 * find_path - finds path
 * @f: file name
 * @t: saves the PATH string
 * @r: an error message
 * Return: Success - path/filename, failure - er
 */

char *find_path(char *f, char *t, char *r)
{
	DIR *dir;
	struct dirent *sd;
	char *file_path, *path, *ret;
	int len = 0;

	while (f[len])
		len++;
	path = _getenv("PATH");
	t = save_path(t, path);
	file_path = strtok(t, ":");
	while (file_path)
	{
		dir = opendir(file_path);
		if (!dir)
		{
			printf("Error! Unable to open directory.\n");
			exit(0);
		}
		while ((sd = readdir(dir)))
		{
			ret = read_dir(r, sd, f, len, file_path, t);
			if (ret != er)
			{
				closedir(dir);
				if (!(access(ret, X_OK)))
					return (ret);
			}
		}
		closedir(dir);
		file_path = strtok(NULL, ":");
	}
	path = NULL;
	free(t);
	return (r);
}

/**
 *read_dir - opens and reads directory file names in search of fil
 *@er: error message
 *@s: struct containing info about a files in a directory
 *@fil: name of file being searched for
 *@fp: directory being searched through
 *@t: string containing the PATH variable's value
 *@l: length of filename
 *Return: success - path of fil/fil, else er
 */
char *read_dir(char *er, struct dirent *s, char *fil, int l, char *fp, char *t)
{
	int x = 0;
	char *ret;

	for (x = 0; s->d_name[x] && fil[x]; x++)
	{
		if (s->d_name[i] != fil[i])
			break;
		if (x == (l - 1) && !(s->d_name[x + 1]))
		{
			ret = strcat(fp, "/");
			ret = strcat(ret, fil);
			free(t);
			return (ret);
		}
	}
	return (er);
}
/**
 *save_path - saves a copy of the PATH string
 *@t: copy to be made of PATH
 *@p: string containing original PATH value
 *
 *Return: success - tmp first time, path every other time, else error
 */
char *save_path(char *t, char *p)
{
	int i = 0;

	if (!t)
	{
		t = malloc(sizeof(char) * 100);
		while (p[i])
		{
			t[i] = p[i];
			i++;
			t[i] = '\0';
		}
		i = 0;
		return (t);
	}
	else
	{
		while (t[i])
		{
			p[i] = t[i];
			i++;
			p[i] = '\0';
		}
		i = 0;
		return (p);
	}
	return ("error");
}
