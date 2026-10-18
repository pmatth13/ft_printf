/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:46:05 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:17:45 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* Cherche la premiere occurrence de l'octet c (converti en unsigned char)
	dans les n premiers octets de la zone memoire s.
	La recherche ne s'arrete pas sur un '\0' : seul n limite la recherche.
	Return : un pointeur sur l'octet trouve, ou NULL s'il est absent. */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	carac;
	unsigned char	*str;

	i = 0;
	carac = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == carac)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hello World";
	char	*mine;
	char	*original;
	char	*mine2;
	char	*original2;

	mine = ft_memchr(str, 'W', 9);
	original = memchr(str, 'W', 9);
	if (mine)
		printf("ft_memchr : \"%s\" (index %ld)\n", mine, mine - str);
	else
		printf("ft_memchr : NULL\n");
	if (original)
		printf("memchr    : \"%s\" (index %ld)\n", original, original - str);
	else
		printf("memchr    : NULL\n");

	mine2 = ft_memchr(str, 'z', 9);
	original2 = memchr(str, 'z', 9);	
	if (mine2)
		printf("2. ft_memchr : \"%s\" (index %ld)\n", mine2, mine2 - str);
	else
		printf("2. ft_memchr : NULL\n");
	if (original2)
		printf("2. memchr    : \"%s\" (index %ld)\n", original2, 
		original2 - str);
	else
		printf("2. memchr    : NULL\n");
	return (0);
}*/