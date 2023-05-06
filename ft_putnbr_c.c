/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:29:19 by analexan          #+#    #+#             */
/*   Updated: 2023/05/06 13:23:01 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_c(long n, long *ptr)
{
	if (n < 0)
	{
		ft_putchar_c('-', ptr);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_c(n / 10, ptr);
		ft_putnbr_c(n % 10, ptr);
	}
	else
	{
		ft_putchar_c(n + '0', ptr);
	}
}

/*
#include "ft_putchar_c.c"
#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_putnbr_c(-2147483648, &n);
	printf("\n%i\n", n);
	return (0);
}
*/