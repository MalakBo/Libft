/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:40:41 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:50 by mbouyi           ###   ########.fr       */
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