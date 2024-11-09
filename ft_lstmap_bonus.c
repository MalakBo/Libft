/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:54:42 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:36 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*map_func(void *content)
{
	char	*str;

	str = strdup((char *)content);
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

void	del_func(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *mapped;
	char *str1 = strdup("first");
	char *str2 = strdup("second");

	ft_lstadd_back(&lst, ft_lstnew(str1));
	ft_lstadd_back(&lst, ft_lstnew(str2));

	mapped = ft_lstmap(lst, map_func, del_func);

	// Print original and mapped list
	t_list *curr = mapped;
	while (curr)
	{
		printf("Mapped content: %s\n", (char *)curr->content);
		curr = curr->next;
	}

	ft_lstclear(&lst, del_func);
	ft_lstclear(&mapped, del_func);
	return (0);
}*/
