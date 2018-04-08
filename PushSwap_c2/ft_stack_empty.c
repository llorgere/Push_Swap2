#include "libftpusw.h"

int		stack_empty(stack stk)
{
	if (stk.top == -1)
		return (1);
	else
		return (0);
}
