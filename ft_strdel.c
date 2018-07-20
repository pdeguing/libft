/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:05:50 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/13 11:34:12 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes as a parameter the address of a string that need to be freed
** 	with free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **) as);
}
