/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:36:38 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/28 14:12:04 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strccmp(const char *s1, const char *s2, char c)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
		if ((s1[i] == c || s2[i] == c) && (!s1[i] || !s2[i]))
			return (0);
		if (s1[i] == c && s2[i] == c)
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
