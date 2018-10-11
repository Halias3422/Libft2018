/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printlist.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 15:51:49 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 17:11:25 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		ft_printlist(t_list *lst)
{
	if (lst)
	{
		while (lst != NULL)
		{
			ft_putstr((char*)lst->content);
			lst = lst->next;
		}
	}
}

/*int		main(void)
{
	t_list *new;

	new = ft_lstnew("bonjour", 30);
	printf("new=%s", (char*)new->content);
	new->next = "aurevoir";
	printf("new=%s", (char*)new->content);
	new->next = ft_lstnew("ntm", 5);
	printf("new=%s", (char*)new->content);
	ft_printlist(new);
}*/
