/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:50:45 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/13 10:55:36 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define DECIMAL "0123456789"
# define HEXA_UP "0123456789ABCDEF"
# define HEXA_LO "0123456789abcdef"

// Auxiliar functions
size_t	ft_strlen(const char *str);

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putsigned(long num);
int		ft_putunsigned(unsigned long num, char *base);

int		ft_printf(const char *str, ...);

#endif