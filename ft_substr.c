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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - start <= len)
		sublen = ft_strlen(s) - start;
	else
		sublen = len;
	if (start > ft_strlen(s))
		sublen = 0;
	sub = malloc((sublen + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	sub = ft_memcpy(sub, (const void *)(s + start), sublen);
	sub[sublen] = '\0';
	return (sub);
}
