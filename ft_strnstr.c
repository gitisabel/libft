/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:47 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:14:31 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *big = "Hola Mundo";
	char *little = "Mundo";
	size_t len = 10;
	char *result;

	result = ft_strnstr(big, little, len);
	printf("La subcadena encontrada es: %s\n", result);
	return (0);
}
*/
/*
** ft_strnstr() busca 'little' en 'big' hasta 'len' caracteres.
** Si 'little' es vacío, devuelve 'big'.
** Si 'len' es 0, devuelve NULL.
** Compara 'big' y 'little' mientras 'big' no sea '\0'.
** Si encuentra 'little', devuelve un puntero a su ubicación.
*/