/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstrcchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:12:38 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/26 14:17:15 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_pstrcchr(char **pstr, char *str, char c)
{
	int		i;

	i = 0;
	while (pstr[i] != NULL)
	{
		if (ft_strccmp(pstr[i], str, c) == 0)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}
