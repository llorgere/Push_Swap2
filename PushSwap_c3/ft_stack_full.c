#include "libftpusw.h"

int		stack_full(stack stk)
{
	if (stk.top == stack_size)
		return (1);
	else
		return (0);
}
