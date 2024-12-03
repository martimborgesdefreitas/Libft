/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:05:20 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 18:05:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sublen;

	if (s == NULL || start >= ft_strlen(s))
		return (NULL);
	if (ft_strlen(s) - start < len)
		sublen = ft_strlen(s) - start;
	else
		sublen = len;
	sub = malloc((sublen + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < sublen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
