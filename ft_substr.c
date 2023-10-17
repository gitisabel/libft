/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:20:21 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:18:39 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		return (ft_strdup(""));
	}
	if (len > len_s - start)
	{
		len = len_s - start;
	}
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	unsigned int start = 5;
	size_t len = 5;
	char *result;

	result = ft_substr(s, start, len);
	printf("La subcadena es: %s\n", result);
	free(result);
	return (0);
}
*/
/*
** ft_substr() crea una subcadena de 's' desde 'start' de longitud 'len'.
** Si 'start' es mayor o igual a la longitud de 's', devuelve una cadena vacía.
** Si 'len' es mayor que la longitud de 's' desde 'start', ajusta 'len'.
** Reserva memoria para 'sub_str' y copia 'len' caracteres de 's' a 'sub_str'.
** Si 'sub_str' es NULL, devuelve NULL.
** Al final, añade '\0' a 'sub_str'.
*/