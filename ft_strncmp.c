/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 11:14:24 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 17:38:19 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	a;

	a = 0;
	while ((s1[a] && s2[a]) && s1[a] == s2[a] && a <= n)
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
