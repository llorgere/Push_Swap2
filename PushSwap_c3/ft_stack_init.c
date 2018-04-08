#include "libftpusw.h"

stack	ft_stack_init(stack stk, int *tab, int size, int top)
{
	stk.array = tab;
	stk.top = top;
	stk.size = size;
	return (stk);
}
