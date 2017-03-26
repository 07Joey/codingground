/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 20:09:04 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/26 14:23:58 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int		strlen;
	int		comp;
	int		i;

	strlen = 0;
	comp = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			comp++;
		if (s2[i] == '*')
			if (s2[i + 1] == '\0')
				if (comp == strlen)
				{
					return (1);
				}
		i++;
		strlen = i;
	}
	if (comp == strlen)
	{
		return (1);
	}
	return (0);
}
