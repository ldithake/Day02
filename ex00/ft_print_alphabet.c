/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:27:55 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/23 11:39:28 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_alphabet(void);

void ft_print_alphabet()
{
	char c;
	c='a';

	while(c<='z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}


