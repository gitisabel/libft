/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:07:09 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 10:55:16 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
    t_list *head;
    t_list *new_node;

    head = ft_lstnew("Segundo nodo");
    new_node = ft_lstnew("Primer nodo");
    ft_lstadd_front(&head, new_node);
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    ft_lstclear(&head, &free);
    return (0);
}
*/
/*
** La función ft_lstadd_front_bonus añade el elemento 
**'new' al inicio de la lista.
**
** Parámetros:
** - lst: un puntero al primer enlace de una lista.
** - new: el enlace para añadir al inicio de la lista.
**
** Valor de retorno:
** - No devuelve ningún valor.
**
** Notas:
** - Si 'lst' o 'new' son NULL, la función no hace nada.
** - Si 'lst' es NULL, 'new' se convierte en el primer enlace.
*/