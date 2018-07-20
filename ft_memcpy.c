/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:03:57 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/12 17:27:33 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*original;
	char	*new;
	size_t	i;

	original = dst;
	new = (char *)src;
	i = 0;
	while (i < n)
	{
		*(original + i) = *(new + i);
		i++;
	}
	return (dst);
}
