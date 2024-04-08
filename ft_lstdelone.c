/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:19 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/08 13:44:27 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		temp = lst;
		del(temp->content);
		lst = lst -> next;
		free(temp);
	}
}

/*int main(void)
{
    // Creamos un nodo utilizando ft_lstnew
    t_list *disco = ft_lstnew("Thriller");

    // Verificamos si el nodo fue creado correctamente
    if (disco)
    {
        printf("Contenido del nodo antes de eliminar: %s\n", 
		(char *)disco->content);

        // Llamamos a ft_lstdelone para eliminar el nodo
        ft_lstdelone(disco, &free);

        // Verificamos si el nodo fue eliminado correctamente
        if (disco == NULL)
        {
            printf("Nodo eliminado correctamente\n");
        }
        else
        {
            printf("Error al eliminar el nodo\n");
        }
    }
    else
    {
        printf("Error al crear el nodo\n");
    }

    return (0);
}*/
