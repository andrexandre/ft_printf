/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:21:19 by analexan          #+#    #+#             */
/*   Updated: 2023/05/06 13:20:38 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_c(char *s, long *ptr)
{
	long	i;

	i = -1;
	if (!s)
	{
		ft_putstr_c("(null)", ptr);
		return ;
	}
	while (s[++i])
		ft_putchar_c(s[i], ptr);
}

/*
#include "ft_putchar_c.c"
#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_putstr_c("hi\n", &n);
	printf("%i\n", n);
	return (0);
}
*/