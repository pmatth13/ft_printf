/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:18:53 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/12 19:33:34 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cree une nouvelle chaine en appliquant f a chaque caractere de s.
	f recoit l'index du caractere et le caractere, et retourne le
	nouveau caractere a stocker. s n'est pas modifiee : on travaille
	sur une copie faite avec ft_strdup.
	Retour : la nouvelle chaine, ou NULL si s ou f est NULL ou si
	l'allocation echoue. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/*static char	ft_maj(unsigned int i, char c)
	{
		(void)i;
		if (c >= 'a' && c <= 'z')
			c = c - 32;
		return (c);
	}
int	main(void)
{
	char *s;
	char *str;

	s = "maison";
	str = ft_strmapi(s, ft_maj);
	printf("%s\n", str);
	free(str);
	return (0);
}*/