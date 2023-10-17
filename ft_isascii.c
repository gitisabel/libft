/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:03 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:59:56 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c = 'A';
    if (ft_isascii(c))
        printf("El caracter '%c' es un carácter ASCII.\n", c);
    else
        printf("El caracter '%c' no es un carácter ASCII.\n", c);
    return (0);
}
*/
/*
** La función ft_isascii comprueba si el carácter pasado como parámetro
** es un carácter ASCII válido.
**
** Parámetros:
** - c: el carácter a comprobar.
**
** Valor de retorno:
** - Devuelve 1 si el carácter es un carácter ASCII válido, 
**   y 0 en caso contrario.
**
** Notas:
** - Los caracteres ASCII válidos son aquellos que están 
**   en el rango de 0 a 127.
*/