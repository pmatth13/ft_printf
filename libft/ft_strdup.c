/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:22:17 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 12:42:02 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cree une copie de la chaine s dans une nouvelle zone allouee avec
	malloc.
	Retour : un pointeur sur la nouvelle chaine, ou NULL si echec
	d'allocation. */

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}

/* int	main(void)
{
	char	str[] = "Hello World !";
	char	*copy;
	char	*real;

	copy = ft_strdup(str);
	real = strdup(str);
	if (!copy || !real)
		return (1);
	printf("La string de base : %s\n", str);
	printf("La string copiee  : %s\n", copy);
	printf("strdup donne      : %s\n", real);
	printf("Adresse de base : %p / adresse copie : %p\n",
		(void *)str, (void *)copy);
	copy[0] = 'J';
	printf("Apres copy[0] = 'J' -> base : %s / copie : %s\n", str, copy);
	free(copy);
	free(real);

	copy = ft_strdup("");
	if (!copy)
		return (1);
	printf("Chaine vide : \"%s\" (longueur %zu)\n", copy, ft_strlen(copy));
	free(copy);
	return (0);
} */