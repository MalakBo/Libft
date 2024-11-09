/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:00:33 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 14:56:40 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int main(void)
{
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(strdup("first")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("second")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("last")));
    
    t_list *last = ft_lstlast(lst);
    printf("Last node content: %s\n", (char *)last->content);
    
    ft_lstclear(&lst, del_func);
    return (0);
}*/