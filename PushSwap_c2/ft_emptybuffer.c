#include "libftpusw.h"

void	ft_emptybuffer(void)
{
	char	c;
	c = 0;
	while (c != '\n' && c != '\0')
	{
		c = ft_getchar();
	}
}
