/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:38:49 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 12:50:02 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applique la fonction f a chaque caractere de s, en lui passant
	l'index du caractere et son ADRESSE (&s[i]).
	Comme f recoit un pointeur, elle peut modifier la chaine
	directement : rien n'est alloue.
	Si s ou f est NULL, la fonction ne fait rien. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void ft_change_a(unsigned int i, char *c)
{
	(void)i;
	if (*c == 'a')
		*c = 'O';
}

int	main(void)
{
	char s[] = "maison";

	printf("String de base  : %s\n", s);
	ft_striteri(s, ft_change_a);
	printf("String modifiee : %s\n", s );
	return (0);
} */