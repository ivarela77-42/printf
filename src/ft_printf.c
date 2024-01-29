/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:24:29 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/13 10:55:49 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	check_format_arg(va_list arg, char c)
{
	int	result;

	if (c == 'c')
		result = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		result = ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
	{
		result = ft_putstr("0x");
		result += ft_putunsigned((unsigned long)va_arg(arg, void *), HEXA_LO);
	}
	else if (c == 'd' || c == 'i')
		result = ft_putsigned(va_arg(arg, int));
	else if (c == 'u')
		result = ft_putunsigned(va_arg(arg, unsigned int), DECIMAL);
	else if (c == 'x')
		result = ft_putunsigned(va_arg(arg, unsigned int), HEXA_LO);
	else if (c == 'X')
		result = ft_putunsigned(va_arg(arg, unsigned int), HEXA_UP);
	else if (c == '%')
		result = ft_putchar('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		result;

	result = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			result += check_format_arg(args, *(++format));
		else
			result += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (result);
}
