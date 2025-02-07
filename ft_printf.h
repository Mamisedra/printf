/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:04:57 by mranaivo          #+#    #+#             */
/*   Updated: 2024/03/16 16:29:18 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putbase(unsigned int nb);
int		ft_check_print(char str, va_list arg);
int		ft_put_point(unsigned long long nb);
int		ft_puthexa_up(unsigned int nb, int *i);
int		ft_puthexa_low(unsigned int nb, int *i);
int		ft_check_suiv(char str);
int		ft_printf(const char *str, ...);

#endif
