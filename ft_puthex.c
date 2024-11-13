/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:48:10 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/08 18:09:18 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_puthex(unsigned int num, int uppercase)
{
	char	*hex_digits;
	int		count;
	char	buffer[9];
	int		i;

	count = 0;
	i = 7;
	buffer[8] = '\0';
	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	while (i >= 0)
	{
		buffer[i] = hex_digits[num % 16];
		num /= 16;
		i--;
		if (num == 0)
			break ;
	}
	count = ft_putstr(&buffer[i + 1]);
	return (count);
}
