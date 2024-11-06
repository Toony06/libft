/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:25:27 by tony              #+#    #+#             */
/*   Updated: 2024/11/06 11:55:50 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, There!";
    
//     int result = ft_strncmp(str1, str2, 1);

//     printf("%d\n",result);
//     return 0;
// }
