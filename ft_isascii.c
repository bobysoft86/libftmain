/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:17:52 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/30 16:10:30 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_isascii( int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

int main (void)
{

	int a;

	a = '*';

printf("%u\n",ft_isascii(a));

return(0);
}