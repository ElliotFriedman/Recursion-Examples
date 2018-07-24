#include <unistd.h>

void	ft_rechar(char *str)
{
	if (*str)
	{
		write(1, &str[0], 1);
		ft_rechar(++str);
	}
}
