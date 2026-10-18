/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:38:07 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 13:32:15 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare au plus les n premiers caracteres des chaines s1 et s2.
	La comparaison s'arrete a la premiere difference, a la fin d'une
	des chaines ('\0') ou apres n caracteres.
	Les caracteres sont compares en unsigned char
	Retour : 0 si egales, < 0 si s1 < s2, > 0 si s1 > s2. */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/* int main(void)
{
	char	s1[] = "maison";
	char	s2[] = "maison";
	char	s3[] = "Maison";
	char	s4[] = " maison";

	printf("s1 = \"%s\"\n", s1);
	printf("s1 vs s2 \"%s\" -> ft_strncmp : %d / strncmp : %d\n",
		s2, ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
	printf("s1 vs s3 \"%s\" -> ft_strncmp : %d / strncmp : %d\n",
		s3, ft_strncmp(s1, s3, 6), strncmp(s1, s3, 6));
	printf("s1 vs s4 \"%s\" -> ft_strncmp : %d / strncmp : %d\n",
		s4, ft_strncmp(s1, s4, 7), strncmp(s1, s4, 7));
	printf("Avec n = 0 (s1 vs s3) -> ft_strncmp : %d / strncmp : %d\n",
		ft_strncmp(s1, s3, 0), strncmp(s1, s3, 0));
	return (0);
} */
