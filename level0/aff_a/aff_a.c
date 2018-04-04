/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzondi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:20:54 by bzondi            #+#    #+#             */
/*   Updated: 2018/04/02 10:35:48 by bzondi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	r;
	int	i;

	i = 0;
	r = 0;

	if (argc != 2)
	{
		ft_putchar('a');
	}
	else
	{
		while (argv[1][i] && r !=1)
		{
			if (argv[1][i] == 'a')
				r = 1;
			i++;
		}
	if (r == 1)
	{
		ft_putchar('a');
	}

	}
	ft_putchar('\n');
	return (0);
}
