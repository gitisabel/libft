/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:17:11 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:01:50 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	int c = 'M';
	char *result;

	result = ft_strchr(s, c);
	printf("La primera ocurrencia del carácter es: %s\n", result);
	return (0);
}
*/
/*
** ft_strchr() busca el carácter 'c' en la cadena 's'.
** Recorre 's' hasta encontrar 'c' o llegar al final de la cadena.
** Si encuentra 'c', devuelve un puntero a su ubicación.
** Si no, devuelve NULL.
*/