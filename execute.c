#include "shell.h"
/**
*main - execute function
*@instructions: parameter one
*@implimenting_instructions: parameter two
*Return: always 0
*/
void implimenting_instructions(const char *instructions)
{
pid_t secondary_pid fork(void);
if (secondary_pid == 0)
{
execve(instructions, instructions, (char *)null);
perror("execve");
exit(exit_failure);
}
else if (secondary_pid == -1)
{
perror("fork);
exit(exit_failure);
{
else wait(null)
}
