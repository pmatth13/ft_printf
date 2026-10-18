/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:25:06 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 16:24:37 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie n octets de src vers dest, meme si les deux zones se chevauchent.
	- si dest est apres src (d > s), on copie de la fin vers le debut,
	  pour ne pas ecraser des octets de src pas encore copies ;
	- sinon on copie du debut vers la fin, comme ft_memcpy.
	Si dest et src sont NULL, on retourne NULL sans rien faire.
	Retour : le pointeur dest. */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n-- > i)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	src[] = "Hello World";
	char	src2[] = "Hello Word";
	ft_memmove(src + 2, src, 5);
	printf("%s\n", src);
	ft_memmove(src2, src2 + 2, 5);
	printf("%s\n", src2);
	return (0);
} */
