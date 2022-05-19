/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:10:58 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/10 18:06:14 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	char		*char_ptr;
	size_t		lgth;

	lgth = ft_strlen(s);
	if (start >= lgth)
	{
		p = (char *)malloc(sizeof(char));
		*p = 0;
		return (p);
	}
	if (len > (lgth - start))
		p = (char *)malloc(sizeof(char) * (lgth - start) + sizeof(char));
	else
		p = (char *)malloc(sizeof(char) * len + sizeof(char));
	if (!p)
		return (NULL);
	char_ptr = p;
	while (len-- && *(s + start))
		*(char_ptr++) = *(char *)(s++ + start);
	*char_ptr = 0;
	return (p);
}
