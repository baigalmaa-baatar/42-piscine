#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int main(int argc, char *argv[])
{
   int i;
	(void)argc;
	 i = atoi(argv[1]);
   printf("%d\n", ABS(i));
   return 0;
}
