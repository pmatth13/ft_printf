/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:31:41 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 16:52:08 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ecrit l'entier n en base 10 sur le file descriptor fd.
	- n est copie dans un long pour gerer INT_MIN,
	  dont l'oppose ne tient pas dans un int ;
	- si le nombre est negatif, on ecrit '-' puis on le rend positif ;
	- recursion : on ecrit d'abord nb / 10 (les chiffres de gauche),
	  puis le dernier chiffre nb % 10 converti en caractere. */

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = '0' + nb % 10;
	ft_putchar_fd(c, fd);
}

/* int	main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(7, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(125, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(100000, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MAX, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1, 2);
	ft_putchar_fd('\n', 2);
	return (0);
} */
