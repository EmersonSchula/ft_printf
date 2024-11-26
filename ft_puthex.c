/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:01:49 by eschula           #+#    #+#             */
/*   Updated: 2024/11/26 18:03:13 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_puthex(num / 16);
	count += write(1, &hex[num % 16], 1);
	return (count);
}
