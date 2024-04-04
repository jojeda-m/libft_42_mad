/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:08:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/04 14:21:41 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	negativenb;

	i = 0;
	nb = 0;
	negativenb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negativenb++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (negativenb % 2 == 1)
		return (nb * -1);
	return (nb);
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
