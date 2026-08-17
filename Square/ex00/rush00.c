/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aexcelle <aexcelle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:44:54 by aexcelle          #+#    #+#             */
/*   Updated: 2026/08/08 23:22:09 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char gauche, char milieu, char droite)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(gauche);
		else if (col == x)
			ft_putchar(droite);
		else
			ft_putchar(milieu);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x < 1 || x > 2147483647 || y < 1 || y > 2147483647)
		return ;
	row = 1;
	while (row <= y)
	{
		if (row == 1 || row == y)
			print_line(x, 'o', '-', 'o');
		else
			print_line(x, '|', ' ', '|');
		row++;
	}
}
