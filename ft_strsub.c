/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:23:58 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/11 09:52:36 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *) malloc(len * sizeof(*new) + 1);
	if (!new)
		return (NULL);
	while (i < len && s[start])
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
