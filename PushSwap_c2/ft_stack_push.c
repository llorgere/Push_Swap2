#include "libftpusw.h"
int		ft_stack_push(stack *stk1, stack *stk2)
{
	//int		tmp1;
	//int		tmp2;

//	tmp = 0;
	if (!ft_stack_empty(stk2))
	{
	//	tmp1 = *stk1.array;
	//	tmp2 = *stk2.array;
		*stk1.top++;
		*stk1.array[stk1.top] = *stk2.array[stk2.top];
		*stk2.top--;
		return (1);
	}
	else
		return (0);
}
