/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:22:26 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/13 11:38:29 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue et retourne un nouveau maillon de liste chainee.
	- content recoit le pointeur passe en parametre (pas de copie
	  des donnees : seul le pointeur est stocke) ;
	- next est initialise a NULL car le maillon n'est relie a rien.
	Retour : le nouveau maillon, ou NULL si l'allocation echoue. */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	t_list	*new;
	char	*str = "maison";
	int		nb = 42;

	// Test 1 : avec une chaîne
	new = ft_lstnew(str);
	if (!new)
		return (1);
	printf("content : %s\n", (char *)new->content);
	printf("next    : %p\n", (void *)new->next);
	free(new);

	// Test 2 : avec un int
	new = ft_lstnew(&nb);
	if (!new)
		return (1);
	printf("content : %d\n", *(int *)new->content);
	free(new);

	// Test 3 : avec NULL
	new = ft_lstnew(NULL);
	if (!new)
		return (1);
	printf("content : %p\n", new->content);
	free(new);
	return (0);
}*/