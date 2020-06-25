/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:52:25 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/25 08:59:25 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_combo2(void);

void ft_print_combo2()
{
	int i;
	int j;

	i=0;
	while(i<99)
	{
		j=i+1;
		while(j<=99)
		{
		    ft_putchar((i/10)+'0');
		    ft_putchar((i%10)+'0');
		    ft_putchar(' ');
			ft_putchar((j/10)+'0');
			ft_putchar((j%10)+'0');
			if(i!=98)
			{
			    ft_putchar(',');
			    ft_putchar(' ');
			}
			j++;
		    
		}
		i=i+1;
	}
	ft_putchar('\n');
}
