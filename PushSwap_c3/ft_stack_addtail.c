#include "libftpusw.h"

Stack	*ft_stack_addtail(Stack *p_list, int data)
{
	struct	node *p_new;
	
	if (p_list != NULL)
	{
		p_new = malloc(sizeof *p_new);
		if(p_new != NULL)
		{
			p_new->data = data;
			p_new->p_next = NULL;
			if(p_list->p_tail == NULL)
			{
				p_new->p_next = NULL;
				p_list->p_head = p_new;
				p_list->p_tail = p_new;
			}
			else
			{
				p_list->p_tail->p_next = p_new;
				p_new->p_prev = p_list->p_tail;
				p_list->p_tail = p_new;
			}
			p_list->length++;
		}
	}
	return (p_list);
}
