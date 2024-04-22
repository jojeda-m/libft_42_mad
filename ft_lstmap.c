/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:42:33 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/22 15:59:51 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_node = ft_lstnew(f(lst->content));
			if (!new_node)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, new_node);
			lst = lst->next;
		}
	}
	return (new_lst);
}

/*static void	*ft_f(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (content);
}

int   main(void)
{
	t_list	*new_lst;
	t_list  *disco1 = ft_lstnew(ft_strdup("Thriller"));
	t_list  *disco2 = ft_lstnew(ft_strdup("Back in Black"));
	t_list  *disco3 = ft_lstnew(ft_strdup("The Dark side of the Moon"));
	t_list  *disco4 = ft_lstnew(ft_strdup("The Bodyguard"));
	t_list  *current;

	disco1->next = disco2;
	disco2->next = disco3;
	disco3->next = disco4;
	printf("Lista original:\n");
	current = disco1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	new_lst = ft_lstmap(disco1, ft_f, &free);
	printf("\nLista generada alicando la función ft_f:\n");
	current = new_lst;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
    return (0);
}*/
