/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:05:22 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/20 18:23:33 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Fonction qui permet de respecter la norme, affiche une adresse et renvoi le nombre de caracteres ecrits dans le cas %p */

static int	ft_ret_nb_c(void *ptr)
{
	int	nb_c;

	nb_c = ft_putstr_pf("0x");
	nb_c = nb_c + ft_base_pf((unsigned long) ptr, "0123456789abcdef");
	return (nb_c);
}

/* Fonction d'aiguillage pour diriger le bon caractere apres le '%' */

int	ft_conversion(va_list *ap, char c)
{
	int	nb_c;

	nb_c = 0;
	if (c == 'd' || c == 'i')
		nb_c = ft_putnbr_pf(va_arg(*ap, int));
	else if (c == 's')
		nb_c = ft_putstr_pf(va_arg(*ap, char *));
	else if (c == 'c')
		nb_c = ft_putchar_pf(va_arg(*ap, int));
	else if (c == '%')
		nb_c = ft_putchar_pf('%');
	else if (c == 'u')
		nb_c = ft_base_pf(va_arg(*ap, unsigned int), "0123456789");
	else if (c == 'x')
		nb_c = ft_base_pf(va_arg(*ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		nb_c = ft_base_pf(va_arg(*ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
		nb_c = ft_ret_nb_c(va_arg(*ap, void *));
	return (nb_c);
}
