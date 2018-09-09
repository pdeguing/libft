#include "libft.h"

char	*ft_utoa(u_int64_t n, int base)
{
	int		size;
	u_int64_t	reminder;
	char		*str;

	if (n == 0)
		return(ft_strdup("0"));
	size = ft_intlen(n, base);
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[size] = '\0';
	while (n != 0 && --size >= 0)
	{
		reminder = n % base;
		str[size] = (reminder > 9) ? (reminder - 10) + 'a' : reminder + '0';
		n /= base;
	}
	return (str);
}