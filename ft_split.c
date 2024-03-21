/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:41:03 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 13:13:04 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count_word;
	int	inside_word;

	count_word = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s != c && !inside_word)
		{
			inside_word = 1;
			count_word++;
		}
		else if (*s == c)
		{
			inside_word = 0;
		}
		s++;
	}
	return (count_word);
}

static char	*copy_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = ft_strdup(s);
	if (!word)
		return (NULL);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;
	int		i;

	count = count_words(s, c);
	if (count == 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = copy_word(s, c);
			if (!result[i])
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
