/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:51:04 by tony              #+#    #+#             */
/*   Updated: 2024/11/08 13:59:37 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*src;
	char	*dest;

	i = 0;
	len = 0;
	src = (char *)s;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int	main()
// {
// 	char	*str;
// 	char	*new_str;

// 	str = "wesh bien";
// 	new_str = ft_strdup(str);
// 	printf("%s\n", new_str);
// 	free (new_str);
// }
