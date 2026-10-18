/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:32:47 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 12:53:32 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue et retourne une nouvelle chaine : s1 suivie de s2.
	Retour : la nouvelle chaine, ou NULL si s1 ou s2 est NULL ou si
	l'allocation echoue. */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int main(void)
{
	char *s1;
	char *s2;

	s1 = "Hello ";
	s2 = "World";
	printf("Le 1er mot est  : %s\n", s1);
	printf("Le 2eme mot est : %s\n", s2);
	printf("Les 2 mots colles avec ft_strjoin : %s\n", ft_strjoin(s1, s2));
} */