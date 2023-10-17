/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:07:54 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:00:55 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
#include <stdio.h>

int main(void)
{
    // Creamos un nodo para probar la función ft_lstdelone.
    t_list *node = ft_lstnew("Nodo de prueba");

    // Usamos ft_lstdelone para eliminar el nodo.
    ft_lstdelone(node, &free);

    // Después de llamar a ft_lstdelone, el nodo ya no debería existir.
    // Intentar acceder a él podría causar un segmentation fault.
    // Por lo tanto, no intentamos imprimir el nodo o su contenido aquí.

    return (0);
}
*/
/*
** La función ft_lstdelone_bonus toma como parámetro un enlace y libera la
** memoria del contenido del enlace utilizando la función 'del' dada como
** parámetro, luego libera el enlace en sí mismo con free().
**
** Parámetros:
** - lst: el enlace a borrar.
** - del: dirección de una función para eliminar el contenido.
**
** Valor de retorno:
** - No devuelve ningún valor.
**
** Notas:
** - La memoria del 'next' no debe ser liberada bajo ninguna circunstancia.
** - Si 'lst' o 'del' son NULL, la función no hace nada.
*/