/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:24:46 by hichokri          #+#    #+#             */
/*   Updated: 2023/09/17 00:20:46 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (alphanum(str[i]) == 1)
		{
			if (word == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			else if (word == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (str);
}
