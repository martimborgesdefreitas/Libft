/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:16:24 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 20:16:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char a, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		len;
	int		start;
	char	*str;

	start = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[start] != '\0' && is_set(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while (is_set(s1[end], set) == 1 && end >= start)
		end--;
	len = end - start + 1;
	if (len <= 0)
		len = 0;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
		str[len] = s1[start + len];
	return (str);
}
