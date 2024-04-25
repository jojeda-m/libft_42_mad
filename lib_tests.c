/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:05:40 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/25 21:30:10 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	
	//Funciones is.... 
	char	funcion[100];
	char	is_caracteres[] = {'a', '5', '\0', '9', 'Z', '*', '\t'};
	int		is_i;
	int		is_len;

	printf("Ingrese el nombre de la función que desea probar: ");
	scanf("%s", funcion);
	printf("\n");
	if (strcmp(funcion, "ft_isalpha") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		
		printf("caracteres[] = {");
    	while (is_i++ < is_len)
        	printf(" '%c'", is_caracteres[is_i]);
    	printf(" }\n");
		is_i = 0;
		printf("\nImplementación propia ft_isalpha:\n");
		while (is_i < is_len)
		{
			if (ft_isalpha(is_caracteres[is_i]))
				printf("%c es una letra.\n", is_caracteres[is_i]);
			else
				printf("%c no es una letra.\n", is_caracteres[is_i]);
			is_i++;
		}
		printf("\nImplementación isalpha original:\n");
		is_i = 0;
    	while (is_i < is_len)
		{
			if (isalpha(is_caracteres[is_i]))
				printf("%c es una letra.\n", is_caracteres[is_i]);
			else
				printf("%c no es una letra.\n", is_caracteres[is_i]);
			is_i++;
		}
	} 
	if (strcmp(funcion, "ft_isdigit") == 0) 
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
	
		printf("caracteres[] = {");
    	while (is_i++ < is_len)
        	printf(" '%c'", is_caracteres[is_i]);
    	printf(" }\n");
		is_i = 0;
		printf("\nImplementación propia ft_isdigit:\n");
		while (is_i < is_len)
		{
			if (ft_isdigit(is_caracteres[is_i]))
				printf("%c es un dígito.\n", is_caracteres[is_i]);
			else
				printf("%c no es una dígito.\n", is_caracteres[is_i]);
			is_i++;
		}
		printf("\nImplementación isdigit original:\n");
		is_i = 0;
		while (is_i < is_len)
		{
			if (isdigit(is_caracteres[is_i]))
				printf("%c es un dígito.\n", is_caracteres[is_i]);
			else
				printf("%c no es una dígito.\n", is_caracteres[is_i]);
			is_i++;
		}
	}
	if (strcmp(funcion, "ft_isalnum") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		printf("caracteres[] = {");
    	while (is_i++ < is_len)
        	printf(" '%c'", is_caracteres[is_i]);
    	printf(" }\n");
		is_i = 0;
		printf("\nImplementación propia ft_isalnum:\n");
		while (is_i < is_len)
		{
			if (ft_isalnum(is_caracteres[is_i]))
				printf("%c es un caracter alfanumérico.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter alfanumérico.\n", is_caracteres[is_i]);
			is_i++;
		}
		printf("\nImplementación isalnum original:\n");
		is_i = 0;
    	while (is_i < is_len)
		{
			if (isalnum(is_caracteres[is_i]))
				printf("%c es un caracter alfanumérico.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter alfanumérico.\n", is_caracteres[is_i]);
			is_i++;
		}
	}
	if (strcmp(funcion, "ft_isascii") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		printf("caracteres[] = {");
    	while (is_i++ < is_len)
        	printf(" '%c'", is_caracteres[is_i]);
    	printf(" }\n");
		is_i = 0;
		printf("\nImplementación propia ft_isascii:\n");
		while (is_i < is_len)
		{
			if (ft_isascii(is_caracteres[is_i]))
				printf("%c es un caracter ascii std.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter ascii std.\n", is_caracteres[is_i]);
			is_i++;
		}
		printf("\nImplementación isascii original:\n");
		is_i = 0;
    	while (is_i < is_len)
		{
			if (isascii(is_caracteres[is_i]))
				printf("%c es un caracter ascii std.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter ascii std.\n", is_caracteres[is_i]);
			is_i++;
		}
	}
	if (strcmp(funcion, "ft_isprint") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		printf("caracteres[] = {");
    	while (is_i++ < is_len)
        	printf(" '%c'", is_caracteres[is_i]);
    	printf(" }\n");
		is_i = 0;
		printf("\nImplementación propia ft_isprint:\n");
		while (is_i < is_len)
		{
			if (ft_isprint(is_caracteres[is_i]))
				printf("%c es un caracter imprimible.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter imprimible.\n", is_caracteres[is_i]);
			is_i++;
		}
		printf("\nImplementación isprint original:\n");
		is_i = 0;
    	while (is_i < is_len)
		{
			if (isprint(is_caracteres[is_i]))
				printf("%c es un caracter imprimible.\n", is_caracteres[is_i]);
			else
				printf("%c no es un caracter imprimible.\n", is_caracteres[is_i]);
			is_i++;
		}
	}
	//Funsiones de manejo de cadena de caracteres
	size_t		s_len;
	const char	*s_str = "Hello, World!!!";
	char		s_dst[20];
	
	if (strcmp(funcion, "ft_strlen") == 0)
	{
    	s_len = ft_strlen(s_str);
		printf("\nCadena de caracteres input: %s\n", s_str);
		printf("Resultado ft_strlen: %zu\n", s_len);
		s_len = strlen(s_str);
		printf("Resultado strlen: %zu\n", s_len);
	}
	if (strcmp(funcion, "ft_strlcpy") == 0)
	{	
		s_len = ft_strlcpy(s_dst, s_str, sizeof(s_dst));
		printf("\nCadena de caracteres origen: %s\n", s_str);
		printf("Longitud ft_strlcpy: %zu -- Longitud copia: %zu\n", s_len, ft_strlen(s_dst));
		printf("Longitud strlcpy: %zu -- Longitud copia: %zu\n", s_len, ft_strlen(s_dst));
	}
	return (0);
}

