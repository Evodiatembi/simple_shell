#include "shell.h"
/**
*main - secondary process id
*
*Return: always 0
*/
int main(void)
{
pid_t getpid(void);
pid_t secondary_id;
secondary_id = getpid();
write("the secondary is is: %u\n", secondary_id);
return (0);
}
