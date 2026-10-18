/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:07:22 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 15:56:37 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare les n premiers octets des zones memoire s1 et s2.
	Les octets sont lus en unsigned char et la comparaison ne s'arrete
	pas sur un '\0' mais selon 'n'.
	Retour : la difference entre les premiers octets differents,
	ou 0 si les n octets sont identiques (ou si n vaut 0). */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "Hello World";
	char	s2[] = "Hello Wxrld";

	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, 11));
	printf("memcmp    : %d\n", memcmp(s1, s2, 11));
	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, 7));
	printf("memcmp    : %d\n", memcmp(s1, s2, 7));
	return (0);
}*/
