/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:47:24 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/17 15:50:07 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	k = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] && haystack[i] == needle[j] && i < len)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)haystack + k);
			i = k;
		}
		i++;
	}
	return (NULL);
}
