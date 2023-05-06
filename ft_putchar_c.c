/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:17:10 by analexan          #+#    #+#             */
/*   Updated: 2023/05/06 13:20:46 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_c(char c, long *ptr)
{
	write(1, &c, 1);
	(*ptr)++;
}

/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_putchar_c('a', &n);
	ft_putchar_c('\n', &n);
	printf("%i\n", n);
	return (0);
}
*/