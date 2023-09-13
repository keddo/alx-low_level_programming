#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
while (counter++ <= 9)
{
int letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar(10);
}
}
