/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:14:51 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 13:50:44 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_vocal_change(unsigned int i, char *str)
{
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'i' || str[i] == 'I')
			str[i] = '1';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		i++;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* //Función de ejemplo para imprimir la cadena
void print_string(unsigned int i, char *s)
{
	(void)i;
	printf("%c", *s);
}

int main(void)
{
    // Cadena de entrada
    char input[] = "Este es un murcielago";

    // Prueba de ft_vocal_change
    printf("Cadena original: %s\n", input);
    ft_vocal_change(0, input);
    printf("Cadena modificada por ft_vocal_change: %s\n", input);

    // Prueba de ft_striteri con print_string
    printf("Iteración a través de la cadena con ft_striteri:\n");
    ft_striteri(input, &print_string);
    printf("\n");

    return 0;
}*/

/*La función ft_striteri itera a través de una cadena de caracteres s y aplica
una función f a cada carácter de la cadena. La función f toma dos parámetros: el
índice del carácter en la cadena y un puntero al carácter actual. Esto permite
que el usuario defina una función personalizada que puede aplicarse a cada
elemento de la cadena. La función ft_striteri no devuelve ningún valor; su
propósito es aplicar la función f a cada carácter de la cadena s.*/
