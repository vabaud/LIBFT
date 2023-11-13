/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabaud <vabaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:53:19 by vabaud            #+#    #+#             */
/*   Updated: 2023/11/11 17:35:20 by vabaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		i;

	i = 1;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		i = 2;
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	ft_putchar(c);
	return (i);
}
