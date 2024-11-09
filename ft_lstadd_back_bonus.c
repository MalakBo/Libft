/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:34:03 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 04:44:32 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int main_lstadd_back(void)
{
    t_list *lst = NULL;
    t_list *node1 = ft_lstnew(strdup("first"));
    t_list *node2 = ft_lstnew(strdup("second"));
    
    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    
    t_list *curr = lst;
    while (curr)
    {
        printf("Content: %s\n", (char *)curr->content);
        curr = curr->next;
    }
    
    ft_lstclear(&lst, del_func);
    return (0);
}*/