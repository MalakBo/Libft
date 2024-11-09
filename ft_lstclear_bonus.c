/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:43:58 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:53 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*temp;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
/*int main_lstclear(void)
{
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(strdup("first")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("second")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("third")));
    
    printf("Before clearing:\n");
    t_list *curr = lst;
    while (curr)
    {
        printf("Content: %s\n", (char *)curr->content);
        curr = curr->next;
    }
    
    ft_lstclear(&lst, del_func);
    printf("After clearing (lst should be NULL): %p\n", (void *)lst);
    return (0);
}*/