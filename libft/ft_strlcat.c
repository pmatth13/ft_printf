/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:51:33 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:18:53 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ajoute la chaine src a la fin de dst, dsize etant la taille TOTALE
	du buffer dst (pas la place restante).
	- dsize - dst_len - 1 caracteres sont ajoutes, puis '\0' ;
	- si dsize <= dst_len, il n'y a pas la place : rien n'est ecrit et
	  on retourne dsize + src_len.
	Retour : la longueur de la chaine que l'on a essaye de creer
	(dst_len + src_len). Si elle est >= dsize, il y a eu troncature. */

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	len;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	i = 0;
	if (dsize <= dst_len)
		return (dsize + src_len);
	while (src[i] && dst_len < dsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (len);
}

/* int	main(void)
{
	char	dst[20] = "Hello";

	printf("retour : %zu, dst : %s\n", ft_strlcat(dst, " world", 20), dst);
} */
