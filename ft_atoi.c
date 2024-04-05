/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:08:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:01:57 by jojeda-m         ###   ########.fr       */
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
	const	char *str1 = "--123";
	const	char *str2 = "-67890";
	const	char *str3 = "     --+++--+-++73654684321354312354522bckb6763";
	const	char *str4 = "abc123"; 
	
	// Probando ft_atoi con diferentes cadenas de caracteres
	printf("Cadena: \"%s\", Entero: %d\n", str1, ft_atoi(str1));
	printf("Cadena: \"%s\", Entero: %d\n", str2, ft_atoi(str2));
	printf("Cadena: \"%s\", Entero: %d\n", str3, ft_atoi(str3));
	printf("Cadena: \"%s\", Entero: %d\n", str4, ft_atoi(str4));
	return (0);
}*/

/*La función ft_atoi en C (ASCII to Integer) convierte una cadena de
caracteres que representa un número en su forma ASCII a un valor entero*/
