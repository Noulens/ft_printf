/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:41:39 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/12 17:44:47 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		lens1;
	int		i;
	char	*p;
	char	*char_ptr;

	lens1 = ft_strlen(s1);
	i = 0;
	while (ft_is_sep(*(s1 + i), set))
		++i;
	while (lens1 && ft_is_sep(*(s1 + lens1 - 1), set))
		--lens1;
	lens1 = lens1 - i;
	if (lens1 < 0)
		lens1 = 0;
	p = (char *)malloc(sizeof(char) * (lens1) + 1);
	if (!p)
		return (NULL);
	char_ptr = p;
	while (lens1--)
		*p++ = *(s1 + i++);
	*p = 0;
	return (char_ptr);
}
