/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:59:06 by toroman           #+#    #+#             */
/*   Updated: 2024/11/14 17:48:51 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return (NULL);
	if (lst && new)
	{
		new->next = *lst;
		new = *lst;
	}
}
