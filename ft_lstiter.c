/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:30:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/22 15:41:12 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst -> next;
		}
	}
}

/*static void	ft_f(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int   main(void)
{
	t_list  *disco1 = ft_lstnew(ft_strdup("Thriller"));
	t_list  *disco2 = ft_lstnew(ft_strdup("Back in Black"));
	t_list  *disco3 = ft_lstnew(ft_strdup("The Dark side of the Moon"));
	t_list  *disco4 = ft_lstnew(ft_strdup("The Bodyguard"));
	t_list  *current;

	disco1->next = disco2;
	disco2->next = disco3;
	disco3->next = disco4;
	printf("Lista antes de iterar y aplicar la función f:\n");
	current = disco1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstiter(disco1, ft_f);
	printf("\nLista luego de iterar aplicando la función ft_toupper:\n");
	current = disco1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
    return (0);
}*/
