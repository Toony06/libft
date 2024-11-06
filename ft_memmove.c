/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:15:54 by tony              #+#    #+#             */
/*   Updated: 2024/11/06 20:30:25 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned const char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n - 1;
		while (i < n)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int	main()
// {
// 	char dest[] = "hello";
// 	char src[] = "toietmoi";
// 	ft_memmove(dest, src, 3);
// 	printf("%s\n", dest);
// 	return (0);
// }
