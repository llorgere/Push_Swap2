#include "libftpusw.h"

char	ft_getchar(void)
{
	char c;

	if (1 != read(0, &c, 1))
		return (-1);
	return (c);
}
