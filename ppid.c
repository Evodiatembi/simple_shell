#include "shell.h"
/**
*main - main process id
*
*Return: always 0
*/
int main(void)
{
pid_t getppid(void);
pid_t main_id;
main_id = getppid();
write("the main process id is: %u\n", main_id);
return (0);
}

