/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:35:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/10 16:28:24 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	l = len;
	while (*(big + i) && len--)
	{
		j = 0;
		while (*(little + j) == *(big + i + j) && (i + j) < l)
		{
			if (*(little + j + 1) == '\0')
				return ((char *)big + i);
			++j;
		}
		++i;
	}
	return (NULL);
}
