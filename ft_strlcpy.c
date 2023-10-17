/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:00 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:09:03 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{
	char dst[50];
	char *src = "Hola Mundo";
	size_t size = 50;
	size_t result;

	result = ft_strlcpy(dst, src, size);
	printf("La cadena copiada es: %s\n", dst);
	printf("La longitud de la cadena fuente es: %zu\n", result);
	return (0);
}
*/
/*
** ft_strlcpy() copia 'src' a 'dst' de forma segura.
** No añade más de 'size' caracteres a 'dst'.
** Añade '\0' al final, a menos que 'size' sea 0.
** Devuelve la longitud de 'src'.
*/