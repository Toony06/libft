/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:45:04 by tony              #+#    #+#             */
/*   Updated: 2024/11/07 14:34:55 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (char *)&s[i];
			i--;
	}
	return NULL;
}
// #include <stdio.h>
// int	main()
// {
// 	char s[] = "alors la zone";
// 	char *resultat = ft_strrchr(s, 'o');
// 	printf("%s\n", resultat);
// }
