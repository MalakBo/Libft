/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:35:45 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:56 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main_lstadd_front(void)
{
    t_list *lst = NULL;
    t_list *node1 = ft_lstnew(strdup("first"));
    t_list *node2 = ft_lstnew(strdup("second"));
    
    ft_lstadd_front(&lst, node1);
    ft_lstadd_front(&lst, node2);
    
    t_list *curr = lst;
    while (curr)
    {
        printf("Content: %s\n", (char *)curr->content);
        curr = curr->next;
    }
    
    ft_lstclear(&lst, del_func);
    return (0);
}*/