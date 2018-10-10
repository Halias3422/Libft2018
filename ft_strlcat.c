/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:37:24 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 12:10:35 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		b;
	size_t		len;
	char		*db_dst;
	char		*db_src;

	db_dst = dst;
	db_src = (char*)src;
	b = size;
	while (*db_dst && b-- != 0)
		db_dst++;
	len = db_dst - dst;
	b = size - len;
	if (b == 0)
		return (len + ft_strlen(db_src));
	while (*db_src)
	{
		if (b-- != 1)
			*db_dst++ = *db_src;
		db_src++;
	}
	*db_dst = '\0';
	return (db_src + len - src);
}
