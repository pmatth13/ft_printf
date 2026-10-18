/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:32:14 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 16:51:46 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convertit une lettre minuscule en majuscule.
	Dans la table ASCII, 'a' (97) et 'A' (65) sont separes de 32 :
	il suffit donc de retirer 32 a une minuscule.
	Retour : la majuscule correspondante, ou c inchange s'il n'est pas
	une lettre minuscule. */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
