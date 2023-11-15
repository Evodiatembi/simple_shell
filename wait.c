#include "shell.h"
/**
*main - the wait function
*
*Return: always 0
*/
int main(void)
{
pid_t secondary_pid;
secondary_pid = fork();
if (secondary_pid == 0)
{
write("evody from alx\n");
}
else
{
wait(null);
sleep(25);
write("alx swe\n");
}
return (0);
}
