/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:18:23 by analexan          #+#    #+#             */
/*   Updated: 2023/10/23 16:29:50 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

// ft_printf
int		ft_printf(const char *format, ...);

// ft_printf_utils
void	ft_putchar_c(char c, long *ptr);
void	ft_putstr_c(char *s, long *ptr);
void	ft_putnbr_c(long n, long *ptr);
#endif
