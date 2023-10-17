/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:13:44 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:57:44 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c = 'A';
    if (ft_isalpha(c))
        printf("El caracter '%c' es una letra.\n", c);
    else
        printf("El caracter '%c' no es una letra.\n", c);
    return (0);
}
*/
/*
** La función ft_isalpha comprueba si el carácter pasado como parámetro
** es una letra mayúscula o minúscula.
**
** Parámetros:
** - c: el carácter a comprobar.
**
** Valor de retorno:
** - Devuelve 1 si el carácter es una letra, y 0 en caso contrario.
**
** Notas:
** - Las letras son aquellos caracteres que van de 'A' a 'Z' y de 'a' a 'z'.
*/