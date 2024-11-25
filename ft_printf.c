/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:55:27 by eschula           #+#    #+#             */
/*   Updated: 2024/11/25 19:43:30 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	valid_type(const char *format, va_list args)
{
	int	count;
	
	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(args, int));
	return(count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += valid_type(format, args);		
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}