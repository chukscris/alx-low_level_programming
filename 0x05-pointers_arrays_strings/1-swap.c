#include "main.h"

/**
*swap_int - swaps values of two integer
*@a: first integer
*@b: second integer
*Return: Always 0
*/

void swap_int(int *a, int *b)

{
int tmp = *a;

*a = *b;
*b = tmp;
}
