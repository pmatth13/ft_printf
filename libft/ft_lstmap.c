/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:08:59 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/15 15:14:12 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cree une NOUVELLE liste en appliquant f au contenu de chaque maillon
	de lst. La liste d'origine n'est pas modifiee.
	- pour chaque maillon : tmp = f(contenu), puis ft_lstnew(tmp) et
	  ajout a la fin de la nouvelle liste ;
	- si ft_lstnew echoue, on libere tmp avec del et toute la nouvelle
	  liste avec ft_lstclear, pour ne laisser aucune fuite.
	Retour : la nouvelle liste, ou NULL si un parametre est NULL ou si
	une allocation echoue. */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)
					(void *))
{
	t_list	*new_list;
	void	*tmp;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_node = ft_lstnew(tmp);
		if (!new_node)
		{
			del(tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
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

void	add_mod(void *content)
{
	char	*str;

	str = (char *)content;
	ft_strlcat(str, "mod", 10);
}

// f pour lstmap : retourne une NOUVELLE chaine en majuscules (malloc)
void	*map_upper(void *content)
{
	char	*str;
	int		i;

	str = ft_strdup((char *)content);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	t_list	*liste;
	t_list	*last;
	t_list	*tmp;
	t_list	*copy;
	t_list	*mapped;
	char	*buf;

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

	//copie de la liste avec des buffers
	copy = NULL;
	tmp = liste;
	while (tmp)
	{
		buf = ft_calloc(10, 1);
		ft_strlcpy(buf, (char *)tmp->content, 10);
		ft_lstadd_back(&copy, ft_lstnew(buf));
		tmp = tmp->next;
	}
	

	// Liberation des maillons avec ft_lstclear
	printf("\n--- Test 6 : ft_lstclear ---\n");
	ft_lstclear(&liste, del_print);
	printf("  Liste         : ");
	print_list(liste);

	// Appel d'une fonction sur chaque noeud //
	printf("\n--- Test 7 : ft_lstiter ---\n");
	ft_lstiter(copy, add_mod);
	printf("  Liste         : ");
	print_list(copy);

	// Creation d'une nouvelle liste a partir de copy //
	printf("\n--- Test 8 : ft_lstmap ---\n");
	mapped = ft_lstmap(copy, map_upper, del_print);
	printf("  Nouvelle      : ");
	print_list(mapped);
	printf("  Originale     : ");
	print_list(copy);
	printf("  lst NULL      : %p\n", (void *)ft_lstmap(NULL, map_upper,
			del_print));
	ft_lstclear(&mapped, del_print);
	ft_lstclear(&copy, del_print);
	
	printf("               FIN DES TESTS                  \n");
	return (0);
}*/