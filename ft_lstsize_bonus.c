/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:41:31 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:24 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main_lstsize(void)
{
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(strdup("first")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("second")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("third")));
    
    int size = ft_lstsize(lst);
    printf("List size: %d\n", size);
    
    ft_lstclear(&lst, del_func);
    return (0);
}*/