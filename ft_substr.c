/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:55:06 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/31 14:02:09 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*init;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	init = malloc(sizeof(char) * (len + 1));
	if (init == NULL )
		return (NULL);
	ft_strlcpy(init, s + start, len + 1);
	return (init);
}

int main (void)
{
char str[] = "holanda";
unsigned int start;
size_t len;

len = 6;
start = 0;

printf("%s\n", ft_substr(str, start, len));

return(0);
}


