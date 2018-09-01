#include "libft.h"

char	*ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_islower(str[i]))
			ft_toupper(str[i]);
		i++;
	}
	return (str);
}
