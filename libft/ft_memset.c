/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:31:50 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:16:08 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Remplit les n premiers octets de la zone memoire s avec la valeur c.
	- c est converti en unsigned char.
	- on travaille octet par octet via un pointeur unsigned char,
	  car on ne peut pas dereferencer un void *.
	Retour : le pointeur s. */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[] = "Bonjour 42";
	int		tab[3];

	// 1. remplace les 4 premiers caracteres par '*'
	ft_memset(str, '*', 4);
	printf("%s\n", str);

	// 2. met un tableau d'int a zero
	ft_memset(tab, 0, sizeof(tab));
	printf("%d %d %d\n", tab[0], tab[1], tab[2]);

	// 3. c > 255 : seul l'octet de poids faible est garde (300 - 256 = 44)
	ft_memset(str, 300, 1);
	printf("%d\n", str[0]);
	return (0);
} */
