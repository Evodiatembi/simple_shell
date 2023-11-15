#include "shell.h"
/**
*main - entry function
*
*Return: always 0
*/
int main(void)
{
char instructions[255];
while (true)
{
my_ammazing_prompt();
presenting_instructions(instructions, sizeof(instructions));
implimenting_instuctions(instructions);
}
return (0);
}
