/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:16:39 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 14:55:59 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + 48, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
}
/*
int	main(void)
{
	int n = 12345;
	int fd = 1; // 1 es el descriptor de archivo para stdout

	ft_putnbr_fd(n, fd);
	return (0);
}
*/
/*
** La función ft_putnbr_fd() escribe el entero 'n' 
**en el descriptor 'fd'.
** Si 'n' es -2147483648, escribe "-2147483648".
** Si 'n' está entre 0 y 9, convierte 'n' a un carácter y lo escribe.
** Si 'n' es mayor o igual a 10, llama recursivamente 
** a ft_putnbr_fd() con 'n' / 10,
** y luego escribe el último dígito de 'n'.
** Si 'n' es negativo, escribe un '-' y llama 
** a ft_putnbr_fd() con |n|.
*/