/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:36:49 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 16:09:55 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie n octets de la zone memoire src vers la zone memoire dest,
	octet par octet, du debut vers la fin.
	Attention : les deux zones ne doivent pas se chevaucher, sinon le
	resultat est indefini (cf ft_memmove dans ce cas).
	Retour : le pointeur dest. */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	src[] = "Hello World";
	char	d1[] = "xxxxxxxxxxx";
	char	d2[] = "xxxxxxxxxxx";

	ft_memcpy(d1, src, 5);
	memcpy(d2, src, 5);
	printf("ft_memcpy : %s\n", d1);
	printf("memcpy    : %s\n", d2);
	ft_memcpy(NULL, NULL, 5);
	printf("pas de crash\n");
	return (0);
} */
