#include "main.h"
/**
 *checker- checks to see weather its a built in function
 *@ren: tokenized user input
 *@syp: line drived fromgetline function
 *Return: 0 if not a built in function, 1 if it is
 */
int checker(char **ren, char *syp)
{
if (handle_builtin(ren, syp))
return (1);
else if (**ren == '/')
{
perform(ren[0], ren);
return (1);
}
return (0);
