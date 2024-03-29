/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwisozk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 12:55:11 by jwisozk           #+#    #+#             */
/*   Updated: 2018/11/28 13:19:08 by jwisozk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 1;
	sqrt = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (sqrt <= nb)
	{
		i++;
		sqrt = i * i;
	}
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
