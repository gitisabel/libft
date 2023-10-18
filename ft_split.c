/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:17:01 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:00:25 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substr_info(const char *s, char c, size_t *count, size_t *len)
{
	*count = 0;
	*len = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			(*count)++;
			while (*s != c && *s != '\0')
			{
				(*len)++;
				s++;
			}
		}
		else
			s++;
	}
}

static char	*create_sub_str(const char *s, char c, size_t *i)
{
	size_t	str_len;
	char	*sub_str;

	str_len = 0;
	while (s[str_len] != '\0' && s[str_len] != c)
		str_len++;
	sub_str = malloc((str_len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s, str_len + 1);
	*i += str_len;
	return (sub_str);
}

static void	free_set_str(char **set_str, size_t j)
{
	while (j > 0)
		free(set_str[--j]);
	free(set_str);
}

char	**ft_split(char const *s, char c)
{
	char	**set_str;
	size_t	i;
	size_t	j;
	size_t	substr_count;
	size_t	substr_len;

	ft_substr_info(s, c, &substr_count, &substr_len);
	set_str = (char **) ft_calloc((substr_count + 1), sizeof(char *));
	i = 0;
	j = 0;
	if (!set_str)
		return (NULL);
	while (s[i] != '\0' && j < substr_count)
	{
		while (s[i] == c)
			i++;
		set_str[j] = create_sub_str(&s[i], c, &i);
		if (!set_str[j])
		{
			free_set_str(set_str, j);
			return (NULL);
		}
		j++;
	}
	return (set_str);
}
/*
void print_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(void)
{
	char *s = "Hola Mundo";
	char c = ' ';
	char **result;

	result = ft_split(s, c);
	print_split(result);
	return (0);
}
*/
/*
** ft_split() divide la cadena 's' por el carácter 'c' en subcadenas.
** ft_substr_info() cuenta y mide las subcadenas en 's'.
** create_sub_str() crea una subcadena desde 's' hasta encontrar 'c'.
** free_set_str() libera la memoria de set_str si hay un error.
** En el bucle principal, se crean y almacenan las subcadenas en set_str.
*/
