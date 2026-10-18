/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:12:39 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 13:46:12 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cherche la DERNIERE occurrence du caractere c dans la chaine s.
	On part de la fin (le '\0', qui fait partie de la recherche) et on
	remonte vers le debut ; s[0] est teste a part car i est un size_t
	et ne peut pas descendre sous 0.
	Retour : un pointeur sur le caractere trouve, ou NULL s'il est
	absent. */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[0]);
	return (NULL);
}

/* int	main(void)
{
	char	str[]= "Hello world !";

	printf("Derniere occurrence de 'o' dans \"%s\" : %s\n",
		str, ft_strrchr(str, 'o'));
	printf("Derniere occurrence de 'z' dans \"%s\" : %s\n",
		str, ft_strrchr(str, 'z'));
	printf("Recherche du '\\0' : \"%s\"\n", ft_strrchr(str, '\0'));
} */
