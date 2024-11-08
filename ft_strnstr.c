/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:37:00 by tony              #+#    #+#             */
/*   Updated: 2024/11/08 14:50:43 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (ptr2[j] == '\0')
		return ((char *)ptr1);
	while (ptr1[i] && i < len)
	{
		if (ptr1[i] == ptr2[j])
		{
			j = 0;
			while (ptr2[j] && ptr1[i + j] == ptr2[j] && i + j < len)
				j++;
			if (ptr2[j] == '\0')
				return ((char *)(ptr1 + i));
		}
		i++;
	}
	return (NULL);
}
//#include <stdio.h>
//int	main()
//{
//	char str[] = "hello tout le monde";
//	char ptr[] = "t";
//	printf("%s\n", ft_strnstr(str, ptr, 15));
//	return (0);
//}
