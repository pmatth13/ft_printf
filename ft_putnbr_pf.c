/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:35:04 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 21:28:38 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nb)
{
	long	n;
	int		nb_c;
	char	c;

	n = nb;
	nb_c = 0;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		nb_c++;
	}
	if (n > 9)
		nb_c += ft_putnbr_pf(n / 10);
	c = (n % 10) + '0';
	nb_c++;
	write(1, &c, 1);
	return (nb_c);
}

/* int	main(void)
{
	int	ret;
	ret = ft_putnbr_pf(INT_MIN);
	printf("\n");
	printf("%d\n", ret);
	ret = ft_putnbr_pf(0);
	printf("\n");
	printf("%d\n", ret);
} */
