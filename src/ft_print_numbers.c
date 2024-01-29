/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:22:15 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/13 10:48:47 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putsigned(long num)
{
	if (num < 0)
		return (ft_putchar('-') + ft_putunsigned(-num, DECIMAL));
	else
		return (ft_putunsigned(num, DECIMAL));
}

int	ft_putunsigned(unsigned long num, char *base)
{
	size_t	base_length;
	int		printed_chars;

	base_length = ft_strlen(base);
	printed_chars = 0;
	if (num >= base_length)
		printed_chars += ft_putunsigned(num / base_length, base);
	printed_chars += ft_putchar(base[num % base_length]);
	return (printed_chars);
}
