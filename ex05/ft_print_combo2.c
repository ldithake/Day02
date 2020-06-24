/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:16:34 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/24 16:05:10 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_combo2(void);

void ft_print_combo2()
{
	int i;
	int j;;

	i=0;
	while(i<=9)
	{
		j=0;
		while(j<=9)
		{
			ft_putchar(i+'0');
			ft_putchar(j+'0');
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
