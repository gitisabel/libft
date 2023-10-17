/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:15:31 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:15:03 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[50];
    char src[50] = "Hola Mundo!";
    printf("Antes de memcpy: %s\n", dest);
    ft_memcpy(dest, src, 11);
    printf("Después de memcpy: %s\n", dest);
    return (0);
}
*/
/*
** La función ft_memcpy copia 'n' bytes del área de memoria 'src' al área de
** memoria 'dest'.
**
** Parámetros:
** - dest: un puntero al área de memoria de destino.
** - src: un puntero al área de memoria de origen.
** - n: el número de bytes a copiar.
**
** Valor de retorno:
** - Un puntero al área de memoria de destino 'dest'.
**
** Notas:
** - Si 'dest' y 'src' son NULL, la función devuelve NULL.
*/