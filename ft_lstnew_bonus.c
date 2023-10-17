/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:11:08 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:07:52 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(1 * sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int main(void)
{
    // Supongamos que la función ft_lstnew crea un nuevo nodo.
    t_list *node = ft_lstnew("Nodo de prueba");

    if (node != NULL)
    {
        printf("El contenido del nuevo nodo es: %s\n", (char *)node->content);
        // No olvides liberar la memoria del nodo después de usarlo.
        free(node);
    }
    else
    {
        printf("Error: No se pudo asignar memoria para el nuevo nodo.\n");
    }
    return (0);
}
*/
/*
** La función ft_lstnew crea un nuevo elemento de lista. El elemento
** inicializa su variable 'content' con el valor del parámetro 'content'.
** La variable 'next' se inicializa a NULL.
**
** Parámetros:
** - content: el valor a asignar al campo 'content' del nuevo elemento.
**
** Valor de retorno:
** - El nuevo elemento de la lista, o NULL si la asignación de memoria falla.
*/