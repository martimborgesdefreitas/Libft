/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:26:49 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 18:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tlen;
	size_t	i;
	size_t	j;
	char	*cat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tlen = ft_strlen(s1) + ft_strlen(s2);
	cat = malloc((tlen + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		cat[i + j] = s2[j];
		j++;
	}
	cat[i + j] = '\0';
	return (cat);
}
