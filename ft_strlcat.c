/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:03:50 by tony              #+#    #+#             */
/*   Updated: 2024/11/08 20:32:52 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
	{
		return (size + len_src);
	}
	while (src[i] && (i < (size - len_dst - 1)))
	{
		dst[len_src + i] = src[i];
		i++;
	}
	dst[len_src + i] = '\0';
	return (len_dst + len_src);
}
// int	main()
// {
// 	char dst[20] = "hello";
// 	const char src[] = "world";
// 	size_t size = 10;

// 	printf("%zu", ft_strlcat(dst, src, size));
// 	return (0);
// }
