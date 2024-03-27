/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:13:53 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 13:44:52 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_absolut_value(int n)
{
	if (n == -2147483648)
		return (-1);
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		length = 1;
	n = ft_absolut_value(n);
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*result;

	if (n < 0)
		length = ft_length(n) + 1;
	else
		length = ft_length(n);
	result = (char *)malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		result[0] = '-';
	n = ft_absolut_value(n);
	while (n != 0)
	{
		result[length - 1] = n % 10 + '0';
		length--;
		n /= 10;
	}
	return (result);
}

/*int main(void)
{
    int n = -2147483647;
    int abs_val = ft_absolut_value(n);
    int length = ft_length(n);
    char *result = ft_itoa(n);

    printf("El valor absoluto de n es: %d\n", abs_val);
    printf("La longitud de la cadena es: %d\n", length);
    
    if (result != NULL)
    {
        printf("El valor convertido es: %s\n", result);
        free(result);
    }
    else
    {
        fprintf(stderr, "Error: No se pudo convertir el número.\n");
    }
    
    return 0;
}*/

/*El comportamiento de la función ft_itoa es el siguiente:
Toma un entero n como entrada y devuelve una cadena de caracteres que representa
ese entero. Calcula la longitud necesaria para almacenar el entero convertido en
cadena, considerando el signo. Asigna memoria dinámica para almacenar la cadena
resultante. Maneja casos especiales como cuando n es igual a 0 o igual a
-2147483648. Si n es negativo, coloca el signo negativo en la primera posición
de la cadena resultante. Convierte el entero en su valor absoluto y lo convierte
en una cadena de caracteres, dígito por dígito. Devuelve la cadena resultante
que representa el entero n.*/
