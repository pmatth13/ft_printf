/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:41:11 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 22:50:42 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	write(1, &c, 1);
	return (1);
}

/*int	main(void)
{
	char	c;
	int 	test;

	c = '\0';
	printf("Test du printf origine :\n");
	test = printf("%c", c);
	printf("%d\n", test);
	printf("Test de mon ft_pustr_pf :\n");
	test = ft_putchar_pf(c);
	printf("%d\n", test);
	

	return (0);
}*/