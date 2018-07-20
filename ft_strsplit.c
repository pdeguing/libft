/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:39:41 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/19 16:11:55 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	split = (char **)malloc(sizeof(char*) * (ft_wrdcount((char *)s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break;
		split[j] = (char *)malloc(sizeof(char) * (ft_wrdlen((char *)&s[i], c) + 1));
		if (!split[j])
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
		{
			split[j][k] = s[i];
			i++;
			k++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}
