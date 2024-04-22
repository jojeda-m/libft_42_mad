/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:19 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/22 12:30:56 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		temp = lst;
		del(lst->content);
		lst = lst->next;
		free(temp);
	}
}

/*int	main(void)
{
	t_list	*disco1 = ft_lstnew(ft_strdup("Thriller"));
	t_list	*disco2 = ft_lstnew(ft_strdup("Back in Black"));
	t_list	*disco3 = ft_lstnew(ft_strdup("The Dark side of the Moon"));
	t_list	*disco4 = ft_lstnew(ft_strdup("The Bodyguard"));
	t_list	*current;

	disco1->next = disco2;
	disco2->next = disco3;
	disco3->next = disco4;

	printf("Lista completa antes de eliminar el primer nodo:\n");
	current = disco1;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstdelone(disco1, &free);

	printf("Lista completa después de eliminar el primer nodo:\n");
	current = disco2;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/
