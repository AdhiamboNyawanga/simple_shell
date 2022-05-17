#include "main.h"
/**
 * check_builtins - Checks for builtins
 * @args: Arguments passed from prompt
 * @line: Buffer with line of input from user
 * @env: Environment
 * Return: 1 if builtins exist, 0 if they don't
 */
int check_builtins(char **args, char *line, char **env)
{
	t_builtins list[] = {
		{"exit", exit_shell},
		{"env", env_shell},
		{NULL, NULL}
	};
	int n;

	for (n = 0; list[n].arg != NULL; n++)
	{
		if (_strcmp(list[n].arg, args[0]) == 0)
		{
			list[n].builtin(args, line, env);
			return (1);
		}
	}
	return (0);
}
