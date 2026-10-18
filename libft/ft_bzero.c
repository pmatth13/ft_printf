/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:31:47 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 14:28:28 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Met a zero les n premiers octets de la zone memoire s.
	Si n vaut 0, rien n'est modifie.
	Pas de valeur de retour. */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	str[] = "Bonjour";
	int		i;

	ft_bzero(str, 2);
	i = 0;
	while (i < 8)
	{
		printf("str[%d] = %d ('%c')\n", i, str[i], str[i]);
		i++;
	}
	return (0);
}*/