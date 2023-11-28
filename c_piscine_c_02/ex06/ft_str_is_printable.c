/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:09:24 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/28 21:09:26 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] <= 32) || (str[c] >= 126))
			return (0);
		c++;
	}
	return (1);
}