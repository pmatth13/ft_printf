/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:40:03 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 13:21:50 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie la chaine src dans dest en ecrivant au plus dstsize octets,
	'\0' compris : dstsize - 1 caracteres sont copies.
	- le resultat est toujours termine par '\0' si dstsize > 0 ;
	- si dstsize vaut 0, rien n'est ecrit dans dest.
	Retour : la longueur de src. Si elle est >= dstsize, la copie a ete
	tronquee. */

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/* int	main(void)
{
	char	dst[10];
	size_t	copy;

	copy = ft_strlcpy(dst, "Hello World!", 6);
	printf("retour : %zu, dst : %s\n", copy, dst);
	return (0);
} */
