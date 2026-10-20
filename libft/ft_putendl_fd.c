/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:21:23 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/20 09:33:17 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ecrit la chaine s sur le file descriptor fd, suivie d'un retour a
	la ligne '\n'. Reutilise ft_putstr_fd et ft_putchar_fd.
	Si s est NULL, rien n'est ecrit (pas meme le '\n'). */

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
