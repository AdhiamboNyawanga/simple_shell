#include "main.h"
#include <string.h>

/**
 * _strtok - a function ...
 * @ren: the chain
 * @syp: the chain
 *
 * Return: 1 or 0
 */

char	*_strtok(char *ren, const char *syp)
{
	/* implement your code, see man strtok*/

	return (strtok(ren, syp));
}
