/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:55:02 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 17:13:59 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convertit une lettre majuscule en minuscule.
	On calcule la position de c dans l'alphabet (c - 'A') puis on la
	reporte a partir de 'a'.
	Retour : la minuscule correspondante, ou c inchange s'il n'est pas
	une lettre majuscule. */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
