/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:59:17 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/10 16:39:35 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*des;
	const char	*sc;
	size_t		n;
	size_t		dest_len;

	des = dst;
	sc = src;
	n = size;
	while (n-- != 0 && *des != '\0')
		des++;
	dest_len = des - dst;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(sc));
	while (*sc != '\0')
	{
		if (n != 1)
		{
			*des++ = *sc;
			n--;
		}
		sc++;
	}
	*des = '\0';
	return (dest_len + (sc - src));
}
