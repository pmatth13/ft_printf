/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:32:18 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:17:12 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cherche la PREMIERE occurrence du caractere c dans la chaine s.
	- c est converti en char avant la comparaison ;
	- le '\0' final fait partie de la recherche : chercher '\0'
	  renvoie un pointeur sur la fin de la chaine.
	Retour : un pointeur sur le caractere trouve, ou NULL s'il est
	absent. */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	char	str[]= "Hello world !";
	int		c;
	int		b;

	c = 33;
	b = 35;
	printf("Le caractere recherche est : '%c' dans : %s,
	 il est affiché si retrouvé : %s\n" ,c , str, ft_strchr(str, c));
	printf("Le caractere recherche est : '%c' dans : %s, 
	il est affiché si retrouvé : %s\n" ,b , str, ft_strchr(str, b));
} */