/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:51:35 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/13 14:50:06 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ajoute le maillon new au DEBUT de la liste *lst.
	new->next pointe sur l'ancienne tete, puis *lst pointe sur new :
	new devient la nouvelle tete. lst est un t_list ** pour pouvoir
	modifier le pointeur de tete de l'appelant.
	Si lst ou new est NULL, rien n'est fait. */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	t_list	*tmp;

	// Test 1 : ajout dans une liste vide
	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew("A"));
	print_list(liste);

	// Test 2 : ajouts devant une liste existante
	ft_lstadd_front(&liste, ft_lstnew("B"));
	ft_lstadd_front(&liste, ft_lstnew("C"));
	print_list(liste);

	// Test 3 : new = NULL (ne doit rien changer ni crasher)
	ft_lstadd_front(&liste, NULL);
	print_list(liste);

	// Test 4 : lst = NULL (ne doit pas crasher)
	ft_lstadd_front(NULL, NULL);
	printf("Test 4 OK\n");

	// Liberation des maillons
	while (liste)
	{
		tmp = liste->next;
		free(liste);
		liste = tmp;
	}
	return (0);
} */
