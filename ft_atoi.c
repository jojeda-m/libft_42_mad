/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:08:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/10 11:50:07 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str != '\0')
	{
		if (!ft_isdigit(*str))
			return (nbr * sign);
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

/*int	main(void) 
{
	const	char *str1 = "   2147483647";
	const	char *str2 = "   9999999999999999";
	const	char *str3 = "   -2147483648";
	const	char *str4 = "   -9999999999999999"; 
	
	// Probando ft_atoi con diferentes cadenas de caracteres
	printf("Resultados ft_atoi: \n");
	printf("Cadena: \"%s\", Entero: %d\n", str1, ft_atoi(str1));
	printf("Cadena: \"%s\", Entero: %d\n", str2, ft_atoi(str2));
	printf("Cadena: \"%s\", Entero: %d\n", str3, ft_atoi(str3));
	printf("Cadena: \"%s\", Entero: %d\n", str4, ft_atoi(str4));
	
	// Resultados atoi original
	printf("Resultados atoi original: \n");
    printf("Cadena: \"%s\", Entero: %d\n", str1, atoi(str1));
    printf("Cadena: \"%s\", Entero: %d\n", str2, atoi(str2));
    printf("Cadena: \"%s\", Entero: %d\n", str3, atoi(str3));
    printf("Cadena: \"%s\", Entero: %d\n", str4, atoi(str4));
	return (0);
}*/

/*La función ft_atoi en C (ASCII to Integer) convierte una cadena de
caracteres que representa un número en su forma ASCII a un valor int. La función
atoi original no maneja casos especiales en los que los resultados esten fuera
de los rangos de una variable int (INT_MIN & INT_MAX), se puede mejorar la
implementacion de ft_atoi declarando la variable nbr como un long y haciendo un
condicional al principio del segundo bucle while que evalue nbr y retorne el 
valor que queramos si esta fuero de los rangos de un int. En el siguiente 
ejemplo hacemos de si la cadena tiene un valor fuera del rango, retorne CERO:
Ejemplo:

int ft_atoi(const char *str)
{
    long	nbr;
    int 	sign;

    nbr = 0;
    sign = 1;
    while ((*str == ' ') || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str++ == '-')
            sign = -1;
    }
    while (*str != '\0')
    {
        if (nbr < INT_MIN || nbr > INT_MAX)
			return (0);
		if (!ft_isdigit(*str))
            return ((int)nbr * sign);
        nbr = (nbr * 10) + (*str - '0');
        str++;
    }
    return ((int)nbr * sign);
}*/
