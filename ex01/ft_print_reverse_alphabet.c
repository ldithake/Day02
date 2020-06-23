/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:47:15 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/23 12:03:49 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet()
{
	char c;
	c='z';

	while(c>='a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

