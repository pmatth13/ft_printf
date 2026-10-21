/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:36:35 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 22:49:02 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr_pf("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/* int	main(void)
{
	char	*str;
	//char	*str2;

	str = NULL;
	//str2 = "Hello World";
	printf("Test du printf origine :\n");
	printf("%s\n", str);
	printf("Test de mon ft_pustr_pf :\n");
	ft_putstr_pf(str);
	
	printf("Test du printf origine :\n");
	test = printf("%s", str2);
	printf("%d\n", test);
	printf("Test de mon ft_pustr_pf :\n");
	test = ft_putstr_pf(str2);
	printf("%d\n", test);
	return (0);
} */