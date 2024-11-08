/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:36:17 by tony              #+#    #+#             */
/*   Updated: 2024/11/08 13:58:07 by toroman          ###   ########.fr       */
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
			return ((char *)&s[i]);
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
