/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:25:01 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/25 14:34:09 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	void ft_putchar(char c)
int main(int argc, char *argv[])
{

	int i;
	i = 0;

	while(--argc)
	{
		while(argv[argc][i])
			ft_putchar(argv[argc][i++]);
		i = 0;
		ft_putchar('\n');
	}
	return 0;
}
