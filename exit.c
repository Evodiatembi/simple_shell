#include "shell.h"
/**
*main - the exit function
*
*Return: always 0
*/
int main(void)
{
pid = fork(void);
pit_t secondary_pid;
secondary_pid = fork();
if (secondary_pid == -1)
{
exit(0);
write("secondary process exiting....\n");
}
else
{
write("main process continues....\n");
}
return (0);
}

