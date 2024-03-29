/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:47:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/19 16:57:44 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_percentage(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

static	int	ft_print_format(const char *format, va_list arg)
{
	int	j;

	j = 0;
	if (*format == 'd' || *format == 'i')
		return (j = ft_di(va_arg(arg, int)));
	else if (*format == 'c')
		return (j = ft_c(va_arg(arg, int)));
	else if (*format == 'p')
		return (j = ft_p(va_arg(arg, void *)));
	else if (*format == 's')
		return (j = ft_s(va_arg(arg, char *)));
	else if (*format == 'x' || *format == 'X' || *format == 'u')
		return (j = ft_xupx(va_arg(arg, unsigned int), *format));
	else if (*format == '%')
		return (j = ft_percentage());
	else
		return (-1);
}

int	ft_print_default(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		j;
	int		error;

	j = 0;
	va_start(arg, format);
	while (format && *format)
	{
		while (*format != '%' && *format)
			j += ft_print_default(*format++);
		if (*format == '\0')
			return (j);
		else
			error = ft_print_format(++format, arg);
		if (error == -1)
			return (-1);
		else
			j += error;
		++format;
	}
	va_end(arg);
	return (j);
}
