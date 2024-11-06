/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:36:17 by tony              #+#    #+#             */
/*   Updated: 2024/11/06 21:00:02 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return(char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return (NULL);
}
// #include <stdio.h>
// int	main()
// {
// 	const char str[] = "salut la france";
// 	char *result = ft_strchr(str, 'a');
// 	printf("%s\n", result);
// 	return 0;
// }
