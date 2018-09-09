#include "libft.h"

char	*ft_itoa(int64_t n, int base)
{
	int	size;
	int64_t	reminder;
	char	*str;
	int	negative;

	if (n == 0)
		return(ft_strdup("0"));
	negative = 0;
	size = 0;
	if (n < 0)
	{
		negative = 1;
		n *= -1;
		size++;
	}
	size += ft_intlen(n, base);
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[size] = '\0';
	while (n != 0 && --size >= 0)
	{
		reminder = n % base;
		str[size] = (reminder > 9) ? (reminder - 10) + 'a' : reminder + '0';
		n /= base;
	}
	if (negative)
		str[size] = '-';
	return (str);
}