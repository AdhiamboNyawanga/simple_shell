#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

// environment variables
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);


/* handle built ins */
typedef struct instruction_l
{
	char *str;
	struct instruction_l *next;
} instruction_l;

int checker(char **ren, char *syp)
int	_strcmp(char *s1, char *s2)
int _strlen(char *i)to
int bridge(char *check, char **args)
void _executecmd(char **cmd, int argc, char **argv, char **env);
void prompt(void)
void shell_1_0(char *cmd, char **env)
void shell_env(char **args, char *line, char **env)
void shell_exit(char **args, char *line, char **env)
char *_strtok(char *ren, const char *syp);
char _getline(char **foot, size_t *p, FILE *stream);
char *_strstr(char *h, char *n)
char *find_path(char *f, char *t, char *r)
char *read_dir(char *er, struct dirent *s, char *fil, int l, char *fp, char *t)
char *save_path(char *t, char *p)
char *cwd_search(char *f, char *er)

instruction_l *add_nodeinstruction_end(instruction_l **head, char *str);
instruction_l **list_instrctions(instruction_l **head, char *str);
char *_strdup(char *src);
char *get_environment(char *env)


#endif
