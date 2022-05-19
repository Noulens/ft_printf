/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:37:34 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/18 15:44:35 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_di(int nbr)
{
	char	*p;
	int		j;

	p = ft_itoa(nbr);
	j = ft_strlen(p);
	ft_putstr_fd(p, 1);
	if (p)
		free(p);
	return (j);
}
