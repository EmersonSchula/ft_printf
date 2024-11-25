/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:15:44 by eschula           #+#    #+#             */
/*   Updated: 2024/11/25 19:42:37 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_print_int(int n, int *count);
void	ft_putchar(int c, int *count);
void	ft_print_str(char *s, int *count);
int		ft_printf(const char *format, ...);
void	ft_check(va_list arg, int c, int *count);
void	ft_print_unsint(unsigned int n, int *count );
void	ft_print_address(unsigned long pointer, int *count);
void	ft_print_hex(unsigned int hex_num, int *count, char hex);

#endif