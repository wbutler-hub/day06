/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:20:15 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/25 14:24:32 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 1;

	while(--argc)
	{
		while(argv[j][i])
			ft_putchar(argv[j][i++]);
		i = 0;
		j ++;
		ft_putchar('\n');
	}
	return(0);
}
