/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:35:31 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:14:53 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue et retourne la sous-chaine de 's' qui commence a l'index 'start'
	et fait au plus 'len' caracteres.
	- si 'start' depasse la longueur de 's', on retourne une chaine vide
	  allouee (et pas NULL) ;
	- si 'len' depasse ce qu'il reste apres 'start', on le reduit pour
	  n'allouer que le necessaire.
	Retour : la sous-chaine, ou NULL si s est NULL ou si l'allocation
	echoue. */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		len_s;
	char		*copy;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i + start];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int	main(void)
{
	char *s;
	char *copy;

	s = "Hello World";
	// Test 1 : start = 6, len trop grand -> reduit, attendu "World" 
	copy =  ft_substr(s, 6, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	// Test 2 : start > longueur de s -> attendu "" (chaine vide allouee) 
	copy =  ft_substr(s, 25, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	// Test 3 : start == longueur de s (sur le '\0') -> attendu "" 
	copy =  ft_substr(s, 11, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	// Test 4 : start = 2, len trop grand -> attendu "llo World" 
	copy =  ft_substr(s, 2, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
} */