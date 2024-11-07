/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:36:17 by tony              #+#    #+#             */
/*   Updated: 2024/11/07 14:51:57 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return(char *)&s[i];
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main()
// {
// 	const char str[] = "salut a france";
// 	char *result = ft_strchr(str, 'f');
// 	printf("%s\n", result);
// 	return 0;
// }
