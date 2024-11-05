/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:07:25 by tony              #+#    #+#             */
/*   Updated: 2024/11/05 20:31:14 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while ((i < size) && dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>
// int main()
// {
//     char dst[20] = "Hello, ";
//     const char src[] = "world!";
//     size_t size = 20;

//     size_t result = ft_strlcat(dst, src, size);
// 	printf("%s\n", dst);
//     printf("%zu\n", result);

//     return 0;
// }
