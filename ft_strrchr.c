/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:07:19 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/13 12:01:25 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	man strrchr	
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == c)
			return ((char *) s + i);
	return (NULL);
}
