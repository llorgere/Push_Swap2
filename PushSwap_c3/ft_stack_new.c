#include "libftpusw.h"

Stack	*ft_stack_new(void)
{
	Stack	*p_new; 
	if(!(p_new = malloc(sizeof *p_new)))
		return (NULL);
	if (p_new != NULL)
	{
		p_new->length = 0;
		p_new->p_head = NULL;
		p_new->p_tail = NULL;
	}
	return p_new;
}
