/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:07:29 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/13 16:28:14 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Libere UN seul maillon : son contenu avec del, puis le maillon
	lui-meme avec free. Le maillon suivant n'est PAS libere : c'est a
	l'appelant de garder lst->next avant l'appel s'il en a besoin.
	Si lst ou del est NULL, rien n'est fait. */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

// del perso : affiche le contenu libere pour verifier que del est bien appele
void	del_print(void *content)
{
	printf("del appele sur : %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*liste;
	t_list	*last;
	t_list	*tmp;

	// Test 1 : ajout dans une liste vide
	// (ft_strdup pour que le content soit malloc et puisse etre free par del)
	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("A")));
	printf("taille : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("Dernier noeud : %s\n", (char *)last->content);
	print_list(liste);

	// Test 2 : ajouts de plusieurs liste
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("B")));
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("C")));
	ft_lstadd_back(&liste, ft_lstnew(ft_strdup("D")));
	printf("taille : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("Dernier noeud : %s\n", (char *)last->content);
	print_list(liste);

	// Test 3 : supprimer la tete (on garde next AVANT de supprimer)
	tmp = liste->next;
	ft_lstdelone(liste, del_print);
	liste = tmp;
	printf("taille : %d\n", ft_lstsize(liste));
	print_list(liste);

	// Test 4 : supprimer un noeud du milieu (on relie B a D avant)
	tmp = liste->next;
	liste->next = tmp->next;
	ft_lstdelone(tmp, del_print);
	printf("taille : %d\n", ft_lstsize(liste));
	print_list(liste);

	// Test 5 : lst = NULL et del = NULL (ne doit pas crasher)
	ft_lstdelone(NULL, del_print);
	ft_lstdelone(liste, NULL);
	printf("Test 5 OK\n");
	print_list(liste);

	// Liberation des maillons avec ft_lstdelone
	while (liste)
	{
		tmp = liste->next;
		ft_lstdelone(liste, free);
		liste = tmp;
	}
	return (0);
} */
