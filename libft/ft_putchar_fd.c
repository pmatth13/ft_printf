/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:59:21 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/12 22:11:39 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ecrit le caractere c sur le file descriptor fd avec write.
	fd : 1 pour la sortie standard, 2 pour la sortie d'erreur, ou le
	fd d'un fichier ouvert avec open. */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
