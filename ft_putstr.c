/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:40:39 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/30 17:41:39 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	return (0);
}
