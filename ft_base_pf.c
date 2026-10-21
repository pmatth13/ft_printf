/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:37:20 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 22:46:14 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_pf(unsigned long nb, char *base)
{
	unsigned long	size_b;
	char			c;
	int				nb_c;

	size_b = 0;
	nb_c = 0;
	while (base[size_b])
		size_b++;
	if (nb >= size_b)
		nb_c += ft_base_pf(nb / size_b, base);
	c = base[nb % size_b];
	nb_c++;
	write(1, &c, 1);
	return (nb_c);
}

/* int main(void)
{
	//int	ret;
	//ret = ft_base_pf(10000000, "0123456789abcdef");
	//printf("\n");
	//printf("%d\n", ret);
	//printf("%lx", 10000000UL);
	//printf("\n");
	//printf("%x\n", -1);
	//ft_base_pf(-1, "0123456789abcdef");
	printf("%p\n", NULL);
} */