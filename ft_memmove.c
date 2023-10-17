/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:15:46 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:23:31 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		return (ft_memcpy (dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[50] = "Esta es una cadena de prueba.";
    char src[50] = "Hola Mundo!";
    printf("Antes de memmove: %s\n", dest);
    ft_memmove(dest, src, 11);
    printf("Después de memmove: %s\n", dest);
    return (0);
}
*/
/*
** ft_memmove() es una función que copia 'n' bytes desde 'src' a 'dest'.
** A diferencia de memcpy, esta función maneja correctamente la superposición
** de las áreas de memoria de origen y destino. Si 'dest' y 'src' son NULL,
** la función devuelve NULL. Si 'dest' es menor que 'src', la función realiza
** una copia directa utilizando ft_memcpy. En caso contrario, realiza una copia
** inversa. Al final, la función devuelve un puntero a 'dest'.
*/
