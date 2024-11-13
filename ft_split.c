/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:40:19 by toroman           #+#    #+#             */
/*   Updated: 2024/11/13 17:43:18 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(const char *s, char c)
{
	int	i;
	int	res;
	int	mot;

	i = 0;
	res = 0;
	mot = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!mot)
			{
				res++;
				mot = 1;
			}
		}
		else
			mot = 0;
		i++;
	}
	return (res);
}

static	char	*lenword(const char *s, int start, int end)
{
	char	*search;
	int		i;

	if (!s || start >= end || start < 0 || end < 0)
		return (NULL);
	search = malloc(sizeof(char) * (end - start + 1));
	if (!search)
		return (NULL);
	i = 0;
	while (start < end)
		search[i++] = s[start++];
	search[i] = '\0';
	return (search);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		end;
	int		i;
	int		size;

	i = 0;
	size = countword(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	while (i < size)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start + 1;
		while (s[end] && s[end] != c)
			end++;
		split[i] = lenword(s, start, end);
		start = end + 1;
		i++;
	}
	split[i] = '\0';
	return (split);
}
//int main(void)
//{
//	int	i = 0;
//	char	*str = "xxsaxx ditx xxxxxquoi xsplitxxx xxxyx xxxfaisx xxserrerxx";
//	char	**split = ft_split(str, 'x');
//	while (split[i])
//	{
//		printf("%s", split[i]);
//		i++;
//	}
//	free (split);
//	return (0);
//}
