/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:18:47 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:08:09 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size > dst_len + 1)
	{
		while (src[i] && (dst_len + 1 + i) < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + src_len);
}
/*
int	main(void)
{
	char dst[50] = "Hola";
	char src[50] = " Mundo";
	size_t size = 50;
	size_t result;

	result = ft_strlcat(dst, src, size);
	printf("La cadena resultante es: %s\n", dst);
	printf("El tamaño total de la cadena es: %zu\n", result);
	return (0);
}
*/
/*
** ft_strlcat() concatena 'src' a 'dst' de forma segura.
** No añade más de 'size' caracteres en total a 'dst'.
** Añade '\0' al final, a menos que 'size' sea menor que la longitud de 'dst'.
** Devuelve la longitud total que 'dst' tendría después de la concatenación.
*/