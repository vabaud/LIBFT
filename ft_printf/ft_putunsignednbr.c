/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabaud <vabaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:28:17 by vabaud            #+#    #+#             */
/*   Updated: 2023/11/13 03:10:31 by vabaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(long n)
{
	char	c;
	int		i;

	i = 1;
	if (n >= 10)
		i += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	ft_putchar(c);
	return (i);
}
