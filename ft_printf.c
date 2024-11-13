/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:55 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/08 18:10:04 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_variabletype(va_list arg, char const s1)
{
	int	cw;

	if (s1 == 'c')
		cw = ft_putchar(va_arg(arg, int));
	else if (s1 == 's')
		cw = ft_putstr(va_arg(arg, char *));
	else if (s1 == 'p')
		cw = ft_putptr(va_arg(arg, void *));
	else if (s1 == 'd' || s1 == 'i')
		cw = ft_putnbr(va_arg(arg, int));
	else if (s1 == 'u')
		cw = ft_putnbr(va_arg(arg, unsigned int));
	else if (s1 == 'x')
		cw = ft_puthex(va_arg(arg, unsigned int), 0);
	else if (s1 == 'X')
		cw = ft_puthex(va_arg(arg, unsigned int), 1);
	else if (s1 == '%')
		cw = write(1, "%", 1);
	else
		cw = write(1, &s1, 1);
	return (cw);
}

int	ft_printf(char const *s1, ...)
{
	int		i;
	int		cw;
	va_list	arg;

	i = 0;
	cw = 0;
	va_start(arg, s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == '%')
		{
			i++;
			cw += ft_variabletype(arg, s1[i]);
		}
		else
		{
			write(1, &s1[i], 1);
			cw++;
		}
		i++;
	}
	va_end(arg);
	return (cw);
}
