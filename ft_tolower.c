/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:24:40 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/31 12:25:10 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c +32;
	return (c);
	return (0);
}

int main (void)
{

	int a;

	a = 'U';

	printf("%d\n", ft_tolower(a));


}