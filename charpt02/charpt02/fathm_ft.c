#include <stdio.h>

int fathm_ft_main(void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = fathoms * 6;
	printf("there are %d feet in %d fathoms!\n", feet, fathoms);
	printf("yes,i said %d feet!\n", 6 * fathoms);
	return 0;
}