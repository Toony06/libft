/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:53 by tony              #+#    #+#             */
/*   Updated: 2024/11/08 20:30:58 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nmemb * size);
	if (tab != NULL)
	{
		ft_bzero(tab, nmemb * size);
	}
	return (tab);
}
//int	main()
//{
//	void	*ptr = ft_calloc(5, sizeof(int));
//	printf("%p\n", ptr);
//	free (ptr);
//	return (0);
//}
