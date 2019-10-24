#include "3-calc.h"
int main(int argc, char *argv[])
{
	int (*r)(int, int);
	
	printf("Dir of + is %p\n", op_add);
	printf("Dir of - is %p\n", op_sub);
	printf("Dir of * is %p\n", op_mul);
	printf("Dir of / is %p\n", op_div);
	/*printf("Dir of \% is %p\n", op_mod);*/

	r = get_op_func(argv[1]);
	printf("The operation is %p\n", r);

	return (0);
}

