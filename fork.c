#include "shell.h"
/**
*main - fork function
*
*Return: always 0
*/
int main(void)
{
pid_fork(void);
pid_t secondary_pid;
secondary_pid = fork();
if (secondary_pid == 0)
{
write("alx swe\n");
}
else
{
write("evody from alx\n");
}
return (0);
}
