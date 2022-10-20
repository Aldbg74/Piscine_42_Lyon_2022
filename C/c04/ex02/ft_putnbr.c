/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrago-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:04:35 by adrago-b          #+#    #+#             */
/*   Updated: 2022/09/22 15:15:07 by adrago-b         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
		if (nb == -2147483648)
        {
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
        }
        else if (nb < 0)
        {
			ft_putchar('-');
			nb = -nb;
			ft_putnbr(nb);
        }
        else if (nb > 9)
        {
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
        }
        else
			ft_putchar(nb + 48);
}
