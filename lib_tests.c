/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:05:40 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 13:47:31 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	//Funciones identificación y manejo de caracteres
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
	if (strcmp(funcion, "ft_toupper") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		printf("Implementación propia ft_toupper:\n");
		while (is_i < is_len)
		{
			printf("Original: %c ", is_caracteres[is_i]);
			if (is_caracteres[is_i] >= 'a' && is_caracteres[is_i] <= 'z')
			printf("Mayúscula: %c\n", ft_toupper(is_caracteres[is_i]));
		else
			printf("No hay cambio: %c\n", is_caracteres[is_i]);
		is_i++;
		}
	}
	is_i = 0;
	printf("\n");
	printf("Implementación función toupper original:\n");
    while (is_i < is_len)
    {
        printf("Original: %c ", is_caracteres[is_i]);
		if (is_caracteres[is_i] >= 'a' && is_caracteres[is_i] <= 'z')
			printf("Mayúscula: %c\n", toupper(is_caracteres[is_i]));
		else
			printf("No hay cambio: %c\n", is_caracteres[is_i]);
		is_i++;
    }
	if (strcmp(funcion, "ft_tolower") == 0)
	{
		is_i = 0;
		is_len = sizeof(is_caracteres) / sizeof(is_caracteres[is_i]);
		printf("Implementación propia ft_tolower:\n");
		while (is_i < is_len)
		{
			printf("Original: %c ", is_caracteres[is_i]);
			if (is_caracteres[is_i] >= 'A' && is_caracteres[is_i] <= 'Z')
				printf("Minúscula: %c\n", ft_tolower(is_caracteres[is_i]));
			else
				printf("No hay cambio: %c\n", is_caracteres[is_i]);
			is_i++;
		}
		is_i = 0;
		printf("\n");
		printf("Implementación función tolower original:\n");
    	while (is_i < is_len)
    	{
        	printf("Original: %c ", is_caracteres[is_i]);
			if (is_caracteres[is_i] >= 'a' && is_caracteres[is_i] <= 'z')
				printf("Mayúscula: %c\n", tolower(is_caracteres[is_i]));
			else
				printf("No hay cambio: %c\n", is_caracteres[is_i]);
			is_i++;
    	}
	
	}
	//Funciones de manejo de cadena de caracteres
	size_t		s_dstsize;
	size_t		s_len;
	const char	*s_str = "Hello, World!!!";
	const char	*s_str2 = "Hello, World!";
	char		s_dst[20];
	char		*s_result;
	int			s_to_find;

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
		s_dstsize = 7;
		s_len = ft_strlen(s_str);
		printf("ft_strlcpy\n");
		ft_strlcpy(s_dst, s_str, s_dstsize);
		printf("Cantidad de caracteres que se intentaron copiar: %zu -- Caracteres copiados: %zu\n", s_len, ft_strlen(s_dst));
		printf("strlcpy");
		strlcpy(s_dst, s_str, s_dstsize);
		printf("Cantidad de caracteres que se intentaron copiar: %zu -- Caracteres copiados: %zu\n", s_len, ft_strlen(s_dst));
	}
	if (strcmp(funcion, "ft_strlcat") == 0)
	{
		s_dstsize = 10;
		s_len = ft_strlen(s_str);
		printf("ft_strlcat\n");
		ft_strlcat(s_dst, s_str, s_dstsize);
		printf("Cantidad de caracteres que se intentaron concatenar: %zu -- Caracteres concatenado: %zu\n", s_len, ft_strlen(s_dst));
		printf("strlcat");
		strlcpy(s_dst, s_str, s_dstsize);
		printf("Cantidad de caracteres que se intentaron concatenar: %zu -- Caracteres concatenados: %zu\n", s_len, ft_strlen(s_dst));
	}
	if (strcmp(funcion, "ft_strchr") == 0)
	{
		s_to_find = '!';
		printf("Implementación propia ft_strchr:\n");
		s_result = ft_strchr(s_str, s_to_find);
		if (s_result != NULL)
			printf("El carácter '%c' se encontró en la posición %ld.\n",s_to_find, s_result - s_str);
		else
			printf("El carácter '%c' no se encontró en la cadena.\n", s_to_find);
		
		printf("\nImplementación de la función strchr original\n");
		s_result = strchr(s_str, s_to_find);
		if (s_result != NULL)
			printf("El carácter '%c' se encontró en la posición %ld\n", s_to_find, s_result - s_str);
		else
			printf("El carácter '%c' no se encontró en la cadena.\n", s_to_find);
	}
	if (strcmp(funcion, "ft_strrchr") == 0)
	{
		s_to_find = '!';
		printf("Implementación propia ft_strrchr:\n");
		s_result = ft_strrchr(s_str, s_to_find);
		if (s_result != NULL)
			printf("El último carácter '%c' se encontró en la posición %ld.\n",s_to_find, s_result - s_str);
		else
			printf("El carácter '%c' no se encontró en la cadena.\n", s_to_find);
		
		printf("\nImplementación de la función strrchr original\n");
		s_result = strrchr(s_str, s_to_find);
		if (s_result != NULL)
			printf("El último carácter '%c' se encontró en la posición %ld\n", s_to_find, s_result - s_str);
		else
			printf("El carácter '%c' no se encontró en la cadena.\n", s_to_find);
	}
	if (strcmp(funcion, "ft_strncmp") == 0)
	{
		s_len = 15;
		printf("Implementación propia ft_strncmp:\n");
		s_to_find = ft_strncmp(s_str, s_str2, s_len);
		if (s_to_find < 0)
			printf("'%.*s' es menor que '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
		else if (s_to_find > 0)
			printf("'%.*s' es mayor que '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
		else
			printf("'%.*s' es igual a '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
	
		printf("\nImplementación strncmp:\n");
    	s_to_find = strncmp(s_str, s_str2, s_len);
		if (s_to_find < 0)
			printf("'%.*s' es menor que '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
		else if (s_to_find > 0)
			printf("'%.*s' es mayor que '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
		else
			printf("'%.*s' es igual a '%.*s'\n", (int)s_len, s_str, (int)s_len, s_str2);
	}
	if (strcmp(funcion, "ft_strnstr") == 0)
	{
		s_len = ft_strlen(s_str);
		printf("\nImplementación propia ft_strnstr:\n");
		s_result = ft_strnstr(s_str, s_str2, s_len);
		if (s_result != NULL)
			printf("'%s' encontrado en la posición: %ld\n", s_str2, s_result - s_str);
		else
			printf("'%s' no encontrado en '%s'\n", s_str2, s_str);
		printf("\nImplementación de la función original strnstr:\n");
		s_result = strnstr(s_str, s_str2, s_len);
		if (s_result != NULL)
			printf("'%s' encontrado en la posición: %ld\n", s_str2, s_result - s_str);
		else
			printf("'%s' no encontrado en '%s'\n", s_str2, s_str);
	}
	//Funciones de manejo de memoria
	size_t	mem_i;
	size_t	mem_len;
	char 	mem_src[] = "Hello, world!";
	char 	mem_dst[sizeof(mem_src)];
	void	*v_result;
	int		mem_to_find;

	if (strcmp(funcion, "ft_memset") == 0)
	{
		char	buffer[20];
		int		c;
		int		cc;

		c = '*';
		cc = '@';
		printf("Bueffer antes de ft_memset y memset original: %s\n", buffer);

		ft_memset(buffer, c, sizeof(buffer));
		printf("Contenido del buffer después de ft_memset con '*': %s\n", buffer);

		memset(buffer, cc, sizeof(buffer));
		printf("Contenido del buffer después de memset original con '@': %s\n", buffer);

	}
	if (strcmp(funcion, "ft_bzero") == 0)
	{
		char	buffer[] = "Testing ft_bzero";
		size_t	n = sizeof(buffer);

		mem_i = 0;
		printf("Buffer original: %s\n", buffer);
		ft_bzero(buffer, n);
		printf("Buffer después de ft_bzero: ");
		while (mem_i++ < n)
			if (buffer[mem_i] == 0)
				printf("0 ");
		printf("\n");

		char	buffer1[] = "Testing bzero original";

		n = sizeof(buffer1);
		mem_i = 0;
    	printf("Buffer original: %s\n", buffer1);
    	bzero(buffer1, n);
    	printf("Buffer después de bzero: ");
    	while (mem_i++ < n)
        	if (buffer1[mem_i] == 0)
            	printf("0 ");
		printf("\n");
	}
	if (strcmp(funcion, "ft_memcpy") == 0)
	{
		mem_len = 5;
		ft_memcpy(mem_dst, mem_src, mem_len);
		printf("Contenido de dst después de ft_memcpy: %s\n", mem_dst);
		
		memcpy(mem_dst, mem_src, mem_len);
		printf("Contenido de dst después de ftmemcpy: %s\n", mem_dst);
	}
	if (strcmp(funcion, "ft_memmove") == 0)
	{
		mem_len = ft_strlen(mem_src) + 1;
		ft_memmove(mem_dst, mem_src, mem_len);
		printf("Contenido de dst después de ft_memmove: %s\n", mem_dst);

		memmove(mem_dst, mem_src, mem_len);
		printf("Contenido de dst después de memmove: %s\n", mem_dst);
	}
	if (strcmp(funcion, "ft_memchr") == 0)
	{
		mem_to_find = 300;
		mem_i = ft_strlen(mem_src);
		printf("\nImplementación propia ft_memchr:\n");
		v_result = ft_memchr(mem_src, mem_to_find, mem_i);
		if (v_result != NULL)
			printf("El caracter '%c' encontrado en la dirección de memoria: %p\n", mem_to_find, v_result);
		else
			printf("El caracter '%c' no encontrado.\n", mem_to_find);
		printf("\nImplementación de la función memchr original:\n");
		v_result = memchr(mem_src, mem_to_find, mem_i);
		if (v_result != NULL)
			printf("El caracter '%c' encontrado en la dirección de memoria: %p\n", mem_to_find, v_result);
		else
			printf("El caracter '%c' no encontrado.\n", mem_to_find);
	}






	return (0);
}
