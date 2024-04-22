/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:49:54 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/22 13:54:26 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;

	if (lst && del)
	{
		while (*lst)
		{
			temp_next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp_next;
		}
	}
}

/*int	main(void)
{
	t_list  *disco1 = ft_lstnew(ft_strdup("Thriller"));
	t_list  *disco2 = ft_lstnew(ft_strdup("Back in Black"));
	t_list  *disco3 = ft_lstnew(ft_strdup("The Dark side of the Moon"));
	t_list  *disco4 = ft_lstnew(ft_strdup("The Bodyguard"));
	t_list	*current;
	int		i;

    
	disco1->next = disco2;
    disco2->next = disco3;
    disco3->next = disco4;

    printf("Lista a elimminar:\n");
    current = disco1;
    i = 0;
	while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
		i++;
    }
	printf("Número de nodos creados: %d", i);
	
	ft_lstclear(&disco1, &free);
	if (current == NULL)
		printf("\nLista eliminada correctamente:\n");
    return (0);
}*/
