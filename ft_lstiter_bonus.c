/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:14:01 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:46 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void iter_func(void *content)
{
    char *str = (char *)content;
    printf("Node content: %s\n", str);
}

int main(void)
{
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(strdup("first")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("second")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("third")));
    
    printf("Iterating through list:\n");
    ft_lstiter(lst, iter_func);
    
    ft_lstclear(&lst, del_func);
    return (0);
}*/