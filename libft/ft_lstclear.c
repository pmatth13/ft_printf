/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:28:16 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 15:13:18 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Libere le maillon *lst et tous ses suivants, avec del pour le
	contenu et free pour les maillons (via ft_lstdelone).
	On sauvegarde next AVANT de supprimer chaque maillon, sinon on
	perdrait la suite de la liste.
	A la fin, *lst vaut NULL : la liste de l'appelant est vide.
	Si lst ou del est NULL, rien n'est fait. */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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

	
	printf("            TESTS LISTES CHAINEES             \n");
	
	// Test 1 : ajout dans une liste vide
	// (ft_strdup pour que le content soit malloc et puisse etre free par del)
	printf("\n--- Test 1 : ajout de A dans une liste vide ---\n");
	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("A")));
	printf("  Taille        : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("  Dernier noeud : %s\n", (char *)last->content);
	printf("  Liste         : ");
	print_list(liste);

	// Test 2 : ajouts de plusieurs liste
	printf("\n--- Test 2 : front B, front C, back D ---\n");
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("B")));
	ft_lstadd_front(&liste, ft_lstnew(ft_strdup("C")));
	ft_lstadd_back(&liste, ft_lstnew(ft_strdup("D")));
	printf("  Taille        : %d\n", ft_lstsize(liste));
	last = ft_lstlast(liste);
	printf("  Dernier noeud : %s\n", (char *)last->content);
	printf("  Liste         : ");
	print_list(liste);

	// Test 3 : supprimer la tete (on garde next AVANT de supprimer)
	printf("\n--- Test 3 : suppression de la tete ---\n");
	tmp = liste->next;
	printf("  ");
	ft_lstdelone(liste, del_print);
	liste = tmp;
	printf("  Taille        : %d\n", ft_lstsize(liste));
	printf("  Liste         : ");
	print_list(liste);

	// Test 4 : supprimer un noeud du milieu (on relie B a D avant)
	printf("\n--- Test 4 : suppression d'un noeud du milieu ---\n");
	tmp = liste->next;
	liste->next = tmp->next;
	printf("  ");
	ft_lstdelone(tmp, del_print);
	printf("  Taille        : %d\n", ft_lstsize(liste));
	printf("  Liste         : ");
	print_list(liste);

	// Test 5 : lst = NULL et del = NULL (ne doit pas crasher)
	printf("\n--- Test 5 : lst NULL / del NULL ---\n");
	ft_lstdelone(NULL, del_print);
	ft_lstdelone(liste, NULL);
	printf("  Pas de crash  : OK\n");
	printf("  Liste         : ");
	print_list(liste);

	// Liberation des maillons avec ft_lstclear
	printf("\n--- Test 6 : ft_lstclear ---\n");
	ft_lstclear(&liste, del_print);
	printf("  Liste         : ");
	print_list(liste);

	
	printf("               FIN DES TESTS                  \n");
	return (0);
} */