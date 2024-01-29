/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:20:01 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/11 19:25:20 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	main(void)
{
	// char	c = 'c';
	// char	*str = "Hola";
	// char	*str = "Pepe";
	// char c ='%';
	int	num = 7;

	//!		%c Imprime un solo carácter
	/* printf("Imprimiendo el carácter 'c' con 'printf'   : %c\n", c);
	ft_printf("Imprimiendo el carácter 'c' con 'ft_printf': %c\n", c); */

	//!		%s Imprime una string (como se define por defecto en C)
	/* printf("Imprimiendo la palabra 'Hola' con 'printf'   : %s\n", str);
	ft_printf("Imprimiendo la palabra 'Hola' con 'ft_printf': %s\n", str); */

	//!		%p El puntero void * dado como argumento se imprime en formato hexadecimal
	/* printf("Imprimiendo la palabra 'Hola' y el carácter 'c' con 'printf'   : %s - %c\n", str, c);
	ft_printf("Imprimiendo la palabra 'Hola' y el carácter 'c' con 'ft_printf': %s - %c\n", str, c); */

	//!		Prueba combinando %c y %s
	/* printf("Imprimendo la dirección en memoria de 'str' con printf   : %p\n", str);
	ft_printf("Imprimendo la dirección en memoria de 'str' con ft_printf: %p\n", str); */

	//!		%i Imprime un entero en base 10
	/* printf("Imprimiendo el número '0' con printf   : %i\n", 0);
	ft_printf("Imprimiendo el número '0' con ft_printf: %i\n", 0);
	printf("Imprimiendo el número '77' con printf   : %i\n", 77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %i\n", 77);
	printf("Imprimiendo el número '77' con printf   : %i\n", -77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %i\n", -77);
	printf("Imprimiendo el número mas alto '2147483647' posible con printf   : %i\n", 2147483647);
	ft_printf("Imprimiendo el número mas alto '2147483647' posible con ft_printf: %i\n", 2147483647);
	printf("Imprimiendo el número mas bajo posible '-2147483647' con printf   : %i\n", -2147483647);
	ft_printf("Imprimiendo el número mas bajo posible '-2147483647' con ft_printf: %i\n", -2147483647); */

	//!		%d Imprime un número decimal (base 10)
	/* printf("Imprimiendo el número '0' con printf   : %d\n", 0);
	ft_printf("Imprimiendo el número '0' con ft_printf: %d\n", 0);
	printf("Imprimiendo el número '77' con printf   : %d\n", 77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %d\n", 77);
	printf("Imprimiendo el número '77' con printf   : %d\n", -77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %d\n", -77);
	printf("Imprimiendo el número mas alto posible '2147483647' con printf   : %d\n", 2147483647);
	ft_printf("Imprimiendo el número mas alto posible '2147483647' con ft_printf: %d\n", 2147483647);
	printf("Imprimiendo el número mas bajo posible '-2147483647' con printf   : %d\n", -2147483647);
	ft_printf("Imprimiendo el número mas bajo posible '-2147483647' con ft_printf: %d\n", -2147483647); */

	//!		%u Imprime un número decimal (base 10) sin signo
	/* printf("Imprimiendo el número '0' con printf   : %u\n", 0);
	ft_printf("Imprimiendo el número '0' con ft_printf: %u\n", 0);
	printf("Imprimiendo el número '77' con printf   : %u\n", 77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %u\n", 77);
	printf("Imprimiendo el número '-77' con printf   : %u\n", -77);
	ft_printf("Imprimiendo el número '-77' con ft_printf: %u\n", -77);
	printf("Imprimiendo el número mas alto posible con printf   : %u\n", 2147483647);
	ft_printf("Imprimiendo el número mas alto posible con ft_printf: %u\n", 2147483647);
	printf("Imprimiendo el número mas bajo posible '-2147483647' con printf   : %u\n", -2147483647);
	ft_printf("Imprimiendo el número mas bajo posible '-2147483647' con ft_printf: %u\n", -2147483647); */

	//!		%x Imprime un número hexadecimal (base 16) en minúsculas
	/* printf("Imprimiendo el número '0' con printf   : %x\n", 0);
	ft_printf("Imprimiendo el número '0' con ft_printf: %x\n", 0);
	printf("Imprimiendo el número '9' con printf   : %x\n", 9);
	ft_printf("Imprimiendo el número '9' con ft_printf: %x\n", 9);
	printf("Imprimiendo el número '10' con printf   : %x\n", 10);
	ft_printf("Imprimiendo el número '10' con ft_printf: %x\n", 10);
	printf("Imprimiendo el número '11' con printf   : %x\n", 11);
	ft_printf("Imprimiendo el número '11' con ft_printf: %x\n", 11);
	printf("Imprimiendo el número '77' con printf   : %x\n", 77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %x\n", 77);
	printf("Imprimiendo el número '-77' con printf   : %x\n", -77);
	ft_printf("Imprimiendo el número '-77' con ft_printf: %x\n", -77);
	printf("Imprimiendo el número mas alto posible con printf   : %x\n", 2147483647);
	ft_printf("Imprimiendo el número mas alto posible con ft_printf: %x\n", 2147483647);
	printf("Imprimiendo el número mas bajo posible '-2147483647' con printf   : %x\n", -2147483647);
	ft_printf("Imprimiendo el número mas bajo posible '-2147483647' con ft_printf: %x\n", -2147483647); */

	//!		%X Imprime un número hexadecimal (base 16) en mayúsculas
	/* printf("Imprimiendo el número '0' con printf   : %X\n", 0);
	ft_printf("Imprimiendo el número '0' con ft_printf: %X\n", 0);
	printf("Imprimiendo el número '9' con printf   : %X\n", 9);
	ft_printf("Imprimiendo el número '9' con ft_printf: %X\n", 9);
	printf("Imprimiendo el número '10' con printf   : %X\n", 10);
	ft_printf("Imprimiendo el número '10' con ft_printf: %X\n", 10);
	printf("Imprimiendo el número '11' con printf   : %X\n", 11);
	ft_printf("Imprimiendo el número '11' con ft_printf: %X\n", 11);
	printf("Imprimiendo el número '77' con printf   : %X\n", 77);
	ft_printf("Imprimiendo el número '77' con ft_printf: %X\n", 77);
	printf("Imprimiendo el número '-77' con printf   : %X\n", -77);
	ft_printf("Imprimiendo el número '-77' con ft_printf: %X\n", -77);
	printf("Imprimiendo el número mas alto posible con printf   : %X\n", 2147483647);
	ft_printf("Imprimiendo el número mas alto posible con ft_printf: %X\n", 2147483647);
	printf("Imprimiendo el número mas bajo posible '-2147483647' con printf   : %X\n", -2147483647);
	ft_printf("Imprimiendo el número mas bajo posible '-2147483647' con ft_printf: %X\n", -2147483647); */

	//!		% % para imprimir el símbolo del porcentaje
	/* printf("Imprimiendo el símbolo de '%%' con printf   : %c\n", c);
	ft_printf("Imprimiendo el símbolo de '%%' con ft_printf: %c\n", c); */

	//!		Imprimiendo cualquier otro caracter despues del %
	printf("Imprimiendo cuando no es un modificador válido después del %% %n\n", &num);
	ft_printf("Imprimiendo cuando no es un modificador válido después del %% %n\n", &num);

	return (0);
}