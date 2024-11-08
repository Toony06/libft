/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:17:58 by toroman           #+#    #+#             */
/*   Updated: 2024/11/08 13:56:19 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	i = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int	main()
// {
// 	char str[3];
// 	int i = 0;

// 	ft_memset(str, 'G', 3);
// 	while (i < 3)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
