/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:57:49 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/25 14:01:24 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	void ft_putchar(char c)
int main(int argc, char *argv[])
{
	int i;
	i =0;
	if(argc ++ 1)
	{
		while(argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return(0);
}
