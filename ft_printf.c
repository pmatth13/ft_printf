/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 00:15:14 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 23:16:40 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
		{
			va_end(ap);
			return (-1);
		}
		else if (str[i] == '%')
		{
			count = count + ft_conversion(&ap, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	int	ret;

	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);

	ret = ft_printf("%p\n", &ret);
	ft_printf("%d\n", ret);

	ret = printf("%p\n", &ret);
	printf("%d\n", ret);
} */