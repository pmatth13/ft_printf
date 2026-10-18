/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:37:28 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/13 16:27:33 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ajoute le maillon new a la FIN de la liste *lst.
	- si la liste est vide (*lst == NULL), new devient la tete ;
	- sinon on recupere le dernier maillon (ft_lstlast) et on le
	  relie a new.
	Si lst ou new est NULL, rien n'est fait. */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*void	print_list(t_list *lst)
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
	ft_lstadd_back(&liste, ft_lstnew("D"));
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
}*/