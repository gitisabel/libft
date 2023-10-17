/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:17:24 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:29 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s) + 1);
	if ((!s) || (!s2))
		return (NULL);
	ft_memcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	char *result;

	result = ft_strdup(s);
	printf("La cadena duplicada es: %s\n", result);
	free(result);
	return (0);
}
*/
/*
** ft_strdup() duplica la cadena 's'.
** Reserva memoria para 's2', copia 's' en 's2' y devuelve 's2'.
** Si 's' o 's2' son NULL, devuelve NULL.
*/