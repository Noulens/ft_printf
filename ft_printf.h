/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:41:29 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/18 15:42:38 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

# define DECIMAL "0123456789"
# define CONVERTCMD "spcdiuxX"

int		ft_c(int c);
int		ft_s(char *p);
int		ft_p(void *p);
int		ft_di(int nbr);
int		ft_xupx(unsigned int nbr, char c);
char	*ft_uitoa(unsigned int nbr);
int		ft_printf(const char *format, ...);

#endif
