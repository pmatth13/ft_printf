/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 05:31:47 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/16 14:16:17 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue et retourne la chaine qui represente l'entier n en base 10.
	- n est copie dans un long, car -INT_MIN ne tient pas dans un int ;
	- la chaine est remplie de la droite vers la gauche avec n % 10
	  (le dernier chiffre), puis n / 10 ;
	- le '-' est place en premiere case si n est negatif.
	Retour : la chaine, ou NULL si l'allocation echoue. */

/* Fonction d'aide : compte le nombre de caracteres necessaires pour
	ecrire n en base 10, signe '-' compris.
	n est un long pour pouvoir faire -n sur INT_MIN sans overflow. */

static int	ft_len(long n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	i;
	int		len;
	char	*str;

	i = n;
	if (i < 0)
		i = -i;
	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (i == 0)
		str[0] = '0';
	str[len] = '\0';
	while (i != 0)
	{
		len--;
		str[len] = i % 10 + '0';
		i = i / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* int	main(void)
{
	printf("%d -> \"%s\"\n", 123, ft_itoa(123));
	printf("%d -> \"%s\"\n", -123, ft_itoa(-123));
	printf("%d -> \"%s\"\n", 0, ft_itoa(0));
	printf("%d -> \"%s\"\n", INT_MIN, ft_itoa(INT_MIN));
	printf("%d -> \"%s\"\n", INT_MAX, ft_itoa(INT_MAX));
} */
