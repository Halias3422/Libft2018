/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 14:38:31 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 15:49:45 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		a;

	a = ft_strlen(s);
	if (a == 0)
		return (NULL);
	while (s[a] != (char)c && a > 0)
		a--;
	if (a == 0 && s[1] != (char)c)
		return (NULL);
	return ((char*)&s[a]);
}
