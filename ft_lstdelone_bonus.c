/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:40:41 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 04:45:21 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*int main_lstdelone(void)
{
    char *str = strdup("test content");
    t_list *node = ft_lstnew(str);
    
    printf("Before deletion: %s\n", (char *)node->content);
    ft_lstdelone(node, del_func);
    printf("After deletion (node should be freed)\n");
    return (0);
}*/