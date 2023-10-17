/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:16:28 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:39:39 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	int fd = 1; // 1 es el descriptor de archivo para stdout

	ft_putendl_fd(s, fd);
	return (0);
}
*/
/*
** ft_putendl_fd() es una función que escribe la cadena 's' en el descriptor
** de archivo dado por 'fd', seguido de un salto de línea. Recorre la cadena 's'
** y utiliza la función write() del sistema para escribir cada carácter en 'fd'.
** Finalmente, escribe un salto de línea en 'fd'.
*/