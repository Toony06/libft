/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:17:58 by toroman           #+#    #+#             */
/*   Updated: 2024/11/05 19:00:47 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned char value = (unsigned char)c;

	while (n > 0)
	{
		*ptr = value;
		ptr++;
		n--;
	}
	return (s);
}
// #include <stdio.h>
// int	main()
// {
// 	char buffer[3];
// 	int i = 0;

// 	ft_memset(buffer, 'G', 3);
// 	while (i < 3)
// 	{
// 		printf("%c", buffer[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
