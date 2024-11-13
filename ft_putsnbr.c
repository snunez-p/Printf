/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:45:19 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/08 18:49:29 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putsnbr(unsigned int n)
{
	char	str[11];
	int		i;
	int		cw;

	i = 0;
	cw = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
		cw++;
	}
	return (cw);
}
