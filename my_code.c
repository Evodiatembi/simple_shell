#include <stdio.h>
/**
*main -calculates monthly average of 5 students
*
*Return: always 0
*/
int main(void)
{
int m1, m2, m3, sum, average;
int num[5];
int num = 0;
char name[5];
for (num = 0; num < 5; num++)
{
write("enter number of alx students\n");
getline("%d", &num);
write("enter name of alx students\n");
getline("%s", name);
write("enter firstmonth, secondmonth, thirdmonth m1, m2, m3\n");
getline("%d %d %d", &m1, &m2, &m3);
sum = m1 + m2 + m3;
write("the total mark is: %d\n", sum);
average = sum / 3;
write("the average is: %d\n", average);
}
return (0);
}

