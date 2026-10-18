/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:55:07 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 14:36:13 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue un tableau de 'nmemb' elements de 'size' octets chacun et met
	toute la memoire allouee a zero (avec ft_bzero).
	- si nmemb ou size vaut 0, on retourne malloc(0).
	- si nmemb * size depasse SIZE_MAX return NULL
	Return: un pointeur sur la memoire allouee, ou NULL si echec. */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	char		*tab;
	size_t		i;

	tab = ft_calloc(5, sizeof(char));
	if (!tab)
	{
		printf("Echec d'allocation\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("tab[%zu] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);

	tab = ft_calloc(5, 125445545211554555);
	if (!tab)
	{
		printf("Echec d'allocation\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("tab[%zu] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
} */