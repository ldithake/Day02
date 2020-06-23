/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:19:00 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/23 16:12:55 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n);
void ft_putchar(char num);

void ft_is_negative(int n)
{
	if (n<0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
	ft_putchar('\n');
}