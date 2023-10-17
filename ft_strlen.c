/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:12 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:10:54 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	size_t result;

	result = ft_strlen(s);
	printf("La longitud de la cadena es: %zu\n", result);
	return (0);
}
*/
/*
** ft_strlen() calcula la longitud de la cadena 's'.
** Recorre 's' hasta encontrar '\0' y devuelve el número de caracteres.
*/