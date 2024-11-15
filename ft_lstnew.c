/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:45:01 by toroman           #+#    #+#             */
/*   Updated: 2024/11/15 17:42:32 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof (size_t));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}
//int main(void)
//{    char *str = "Hello, World!";
//    t_list *node = ft_lstnew(str);

//    if (node)
//        printf("%s\n", (char *)node->content);
//    free(node);

//    return 0;
//}
