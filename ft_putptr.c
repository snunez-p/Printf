/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:44:23 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/07 18:13:24 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}
