#include <stdio.h>

void swap_int(int *, int *);
/**
 *swap_int - swaping 2 integer using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */

int main(void)
{
	a = 98;
	b = 42;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);

}
