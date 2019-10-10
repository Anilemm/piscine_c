/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:40:50 by adda-sil          #+#    #+#             */
/*   Updated: 2019/07/22 17:11:16 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (*tab && ++i < length)
		if (f(*tab++))
			count++;
	return (count);
}
