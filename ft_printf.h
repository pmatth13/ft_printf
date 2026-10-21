/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 00:15:03 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/21 23:17:33 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_conversion(va_list *ap, char c);
int	ft_putnbr_pf(int nb);
int	ft_putstr_pf(char *str);
int	ft_base_pf(unsigned long nb, char *base);
int	ft_putchar_pf(char c);

#endif