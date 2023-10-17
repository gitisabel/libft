/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:15:21 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:13:40 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    char s1[50] = "Hola Mundo!";
    char s2[50] = "Hola Mundo!";
    int result = ft_memcmp(s1, s2, 11);
    if (result > 0)
        printf("s1 es mayor que s2\n");
    else if (result < 0)
        printf("s1 es menor que s2\n");
    else
        printf("s1 es igual a s2\n");
    return (0);
}
*/
/*
** La función ft_memcmp compara los primeros 'n' bytes de las áreas de memoria
** 's1' y 's2'.
**
** Parámetros:
** - s1: un puntero al primer bloque de memoria a comparar.
** - s2: un puntero al segundo bloque de memoria a comparar.
** - n: el número de bytes a comparar.
**
** Valor de retorno:
** - Devuelve un entero menor, igual o mayor que cero si 's1' es menor, igual
**   o mayor que 's2' respectivamente.
**
** Notas:
** - La comparación se realiza en formato de unsigned char.
*/