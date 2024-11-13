/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:47:46 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/07 18:10:14 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putptr(void *ptr);
int	ft_putstr(char *s);
int	ft_puthex(unsigned int num, int uppercase);
int	ft_putnbr(long int num);
int	ft_putsnbr(unsigned int n);

#endif
