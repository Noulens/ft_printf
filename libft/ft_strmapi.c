/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:21:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/10 16:26:07 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;
	int		lgth;

	if (!s || !f)
		return (NULL);
	i = 0;
	lgth = ft_strlen(s);
	res = (char *)malloc(lgth * sizeof(char) + sizeof(char));
	if (!res)
		return (NULL);
	while (i < lgth)
	{
		res[i] = (*f)(i, s[i]);
		++i;
	}
	res[i] = 0;
	return (res);
}
