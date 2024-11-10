/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:42:33 by toroman           #+#    #+#             */
/*   Updated: 2024/11/10 20:32:15 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s1) - 1;
	if (!set || *set == '\0')
		return (ft_strdup(s1));
	if (!s1 || *s1 == '\0')
		return (NULL);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if (s1[i] != '\0')
	{
		while (s1[n] && ft_strchr(set, s1[n]))
			n--;
	}
	str = ft_substr(s1, i, n - i + 1);
	return (str);
}
//int	main()
//{
//	char	*s1 = "		Tony es la 		 	\n";
//	char	*set = " \t\n";
//	char	*trimed = ft_strtrim(s1, set);
//	printf("%s\n", trimed);
//	free (trimed);
//	return (0);
//}
