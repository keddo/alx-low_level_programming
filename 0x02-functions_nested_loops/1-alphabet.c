#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/
void print_alphabet(void)
{
int letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar(10);
}
