/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:20:10 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:16:54 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, s1[0]))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int	main(void)
{
	char *s1 = "   Hola Mundo   ";
	char *set = " ";
	char *result;

	result = ft_strtrim(s1, set);
	printf("La cadena sin espacios al principio y al final es: '%s'\n", result);
	free(result);
	return (0);
}
*/
/*
** ft_strtrim() elimina los caracteres de 'set' 
** al inicio y al final de 's1'.
** Si 's1' o 'set' son NULL, devuelve NULL.
** Recorre 's1' desde el inicio y el final hasta 
** que no encuentra caracteres de 'set'.
** Devuelve una subcadena de 's1' sin los caracteres de 'set'.
*/