#include "shell.h"
/**
*main - argument function
*@ac: parameter one
*@av: parameter two
*Return: always 0
*/
int main(int ac, char *av)
{
char *instruction = null, *instruction_copy = null, *token = null;
char *token;
char *delim = "_";
int ac;
int k = 0;
char *av = null
size_t m = 0;
evody_print("@ ");
if (getline(&instruction, &m, stdin) == -1)
return -1
instruction_copy = stdup(instruction);
token = strtok(instruction, delim);
while (token != null)
{
token = strtok(null, delim);
ac++;
}
evody_print("%d\n", ac);
av = malloc(sizeof(char *) * ac);
token = strtok(instruction_copy, delim);
while (token != null)
{
av[k] = token;
token = strtok(null, delim);
k++
}
av[k] = null;
k = 0;
while (av[k])
evody_print("%s\n", av[k++]);
return (0);
}

