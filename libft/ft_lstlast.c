/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:22 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/14 12:52:07 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Retourne le dernier maillon de la liste : celui dont next vaut NULL.
	Retour : le dernier maillon, ou NULL si la liste est vide. */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* void	print_list(t_list *lst)
{
	int	i;

	i = 0;
	while (lst && i < 10)
	{
		printf("[%s] -> ", (char *)lst->content);
		lst = lst->next;
		i++;
	}
	if (i == 10)
		printf("... BOUCLE INFINIE ?\n");
	else
		printf("NULL\n");
}

int	main(void)
{
	t_list	*liste;
	t_list	*last;
	t_list	*tmp;

	// Test 1 : ajout dans une liste vide
	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew("A"));
	printf("taille : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("Dernier noeud : %s\n", (char *)last->content);
	print_list(liste);

	// Test 2 : ajouts de plusieurs liste
	ft_lstadd_front(&liste, ft_lstnew("B"));
	ft_lstadd_front(&liste, ft_lstnew("C"));
	printf("taille : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("Dernier noeud : %s\n", (char *)last->content);
	print_list(liste);

	// Liberation des maillons
	while (liste)
	{
		tmp = liste->next;
		free(liste);
		liste = tmp;
	}
	return (0);
} */