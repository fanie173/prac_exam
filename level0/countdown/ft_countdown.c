/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzondi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:40:42 by bzondi            #+#    #+#             */
/*   Updated: 2018/03/30 12:26:23 by bzondi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_countdown();
	return (0);
}
