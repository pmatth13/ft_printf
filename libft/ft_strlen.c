/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:56:15 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 13:56:16 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Calcule la longueur de la chaine str : le nombre de caracteres avant
	le '\0' final (le '\0' n'est pas compte).
	str doit etre une chaine valide terminee par '\0'.
	Retour : la longueur de str. */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
