/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:14 by tony              #+#    #+#             */
/*   Updated: 2024/11/06 23:09:28 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *d;
	const char *s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int	main()
// {
// 	char src[] = "Hello ";
// 	char dest[20] = "world";
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("%s\n", dest);
// 	return (0);
// }