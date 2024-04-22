/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:41:03 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 16:03:37 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
		}
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*ft_next_word(const char **s, char c)
{
	const char	*start;
	const char	*end;
	char		*word;

	start = *s;
	while (*start && *start == c)
		start++;
	end = start;
	while (*end && *end != c)
		end++;
	word = ft_substr(start, 0, end - start);
	if (!word)
		return (NULL);
	*s = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		result[i] = ft_next_word(&s, c);
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*int	main(void)
{
	char const	*s;
	char		c;
	size_t		elements;
	char		**result;
	size_t		i;

	s = "    Hello World, This is a split Test  ";
	c = ' ';
	elements = ft_count_words(s, c);
	printf("\nNúmero de elementos encontrados: %zu\n", elements);

	result = ft_split(s, c);
	if (!result)
	{
		printf("No se pudieron obtener los elementos o palabras\n");
		return (1);
	}
	i = 0;
	while (result[i] != NULL)
	{
		printf("Palabra encontrada %lu: %s\n", i + 1, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/

/* La función ft_split toma una cadena de caracteres (s) y un carácter
delimitador (c) como entrada. Divide la cadena en palabras separadas por el
delimitador y devuelve un arreglo de punteros a caracteres, donde cada puntero
apunta a una palabra.
La función cuenta inicialmente el número de palabras en la cadena utilizando
ft_count_words, luego asigna memoria para un arreglo de punteros a caracteres.
Luego, utiliza un bucle para llamar a ft_next_word para cada palabra,
almacenando cada palabra en una entrada del arreglo. Si ocurre un error durante
la asignación de memoria para una palabra, la función libera la memoria asignada
previamente antes de devolver NULL.
En resumen, ft_split divide una cadena en palabras utilizando un carácter
delimitador y devuelve un arreglo de punteros a estas palabras.*/
