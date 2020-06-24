/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:48:36 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/24 15:10:21 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_print_combo(void);

void ft_print_combo(void)
{
	int i;
	int	j;
	int k;
	i=0;

	while(i<=7)
	{
		j=i+1;
		while(j<=8)
		{
			k=j+1;
			while(k<=9)
			{
				ft_putchar(i+'0');
			    ft_putchar(j+'0');
				ft_putchar(k+'0');
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}	
			j++;
		}
		i++;
	}

	ft_putchar('\n');
}

