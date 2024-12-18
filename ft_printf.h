/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:15:44 by eschula           #+#    #+#             */
/*   Updated: 2024/11/26 18:00:12 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_puthex(unsigned long num);
int	ft_putupperhex(unsigned long num);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_printf(const char *format, ...);

#endif