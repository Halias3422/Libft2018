/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 18:44:17 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:46:06 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		b;

	b = 0;
	while (src[b])
	{
		if (dst[b] == '\0')
			return (NULL);
		dst[b] = src[b];
		b++;
	}
	dst[b] = src[b];
	return (dst);
}
