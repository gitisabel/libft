/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:13:21 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:55:48 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int c = 'A';
	int result = ft_isalnum(c);
	printf("El resultado es: %d\n", result);
	return (0);
}
*/
/*
** La función ft_isalnum comprueba si el carácter pasado como parámetro
** es un carácter alfanumérico.
**
** Parámetros:
** - c: el carácter a comprobar.
**
** Valor de retorno:
** - Devuelve 1 si el carácter es alfanumérico, y 0 en caso contrario.
**
** Notas:
** - Los caracteres alfanuméricos son aquellos que son letras mayúsculas o
**   minúsculas (de 'A' a 'Z' y de 'a' a 'z') o dígitos (de '0' a '9').
*/