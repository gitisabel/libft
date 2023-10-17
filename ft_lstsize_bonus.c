/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:12:02 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:09:50 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (lst == NULL)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
    t_list *head = NULL;
    // Supongamos que la función ft_lstnew crea un nuevo nodo.
    // Añadimos algunos nodos a la lista para probar la función ft_lstsize.
    head = ft_lstnew("Primer nodo");
    head->next = ft_lstnew("Segundo nodo");
    head->next->next = ft_lstnew("Tercer nodo");

    int size = ft_lstsize(head);
    printf("El tamaño de la lista es: %d\n", size);

    // No olvidar liberar la memoria de la lista después de usarla.
    ft_lstclear(&head, &free);
    return (0);
}
*/
/*
** La función ft_lstsize cuenta el número de elementos en una lista.
**
** Parámetros:
** - lst: el inicio de la lista.
**
** Valor de retorno:
** - El número de elementos en la lista.
**
** Notas:
** - Si 'lst' es NULL, la función devuelve 0.
*/