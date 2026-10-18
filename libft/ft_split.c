/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:35:42 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:15:34 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Decoupe la chaine s en mots selon le separateur c et retourne un
	tableau de chaines termine par NULL.
	1. compte les mots (ft_count) et alloue nb_str + 1 pointeurs ;
	2. pour chaque mot : saute les separateurs, mesure le mot (ft_len)
	   et le copie avec ft_substr ;
	3. si une allocation echoue, tout est libere (ft_free_tab).
	Ex : ft_split("  a bb ", ' ') donne {"a", "bb", NULL}.
	Retour : le tableau, ou NULL si une allocation echoue. */

/* Fonction d'aide : compte le nombre de mots dans s, un mot etant une
	suite de caracteres differents du separateur c.
	Les separateurs consecutifs, au debut ou a la fin sont ignores. */

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

/* Fonction d'aide : en cas d'echec d'allocation, libere les j chaines
	deja allouees puis le tableau lui-meme, pour eviter les fuites.
	Retour : toujours NULL, pour pouvoir faire return (ft_free_tab()). */

static char	**ft_free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

/* Fonction d'aide : retourne la longueur du mot qui commence en s,
	c'est-a-dire le nombre de caracteres avant c ou '\0'. */

static size_t	ft_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	nb_str;
	char	**tab;

	i = 0;
	j = 0;
	nb_str = ft_count(s, c);
	tab = malloc((sizeof(char *)) * (nb_str + 1));
	if (!tab)
		return (NULL);
	while (j < nb_str)
	{
		while (s[i] && s[i] == c)
			i++;
		len = ft_len(&s[i], c);
		tab[j] = ft_substr(s, i, len);
		i += len;
		if (!tab[j])
			return (ft_free_tab(tab, j));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	**tab;
	int		k;

	tab = ft_split("    Hello World, it's crazy", ' ');
	k = 0;
	while (tab[k])
	{
		printf("%s\n", tab[k]);
		free(tab[k]);
		k++;
	}
	free(tab);
	return (0);
}*/
