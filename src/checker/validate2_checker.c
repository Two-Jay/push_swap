/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate2_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 02:19:46 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 04:24:45 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_count_word(const char *src, char c)
{
	unsigned int	count;

	count = 0;
	while (*src)
	{
		if (*src != c && *(src + 1) == c)
			count++;
		if (*src != c && !*(src + 1))
			count++;
		src++;
	}
	return (count);
}

static int	fn_check_bucket_size(char **bucket)
{
	int	ix;

	ix = 0;
	while (bucket[ix] && ft_strlen(bucket[ix]))
		ix++;
	return (ix);
}

void	fn_check_setting_type(int argc, char **argv, t_bucket *data)
{
	int	count;

	count = ft_count_word(argv[1], ' ');
	if (count > 1 && argc == 2)
	{
		data->arg_type = STR_ARG;
		data->input_arr_str = ft_split(argv[1], ' ');
		if (!data->input_arr_str)
			exit(EXIT_FAILURE);
		data->arg_size = fn_check_bucket_size(data->input_arr_str);
		data->input_arr = (int *)ft_calloc(sizeof(int), data->arg_size);
	}
	else
	{
		data->arg_type = NUM_ARG;
		data->input_arr_str = argv;
		data->input_arr_str++;
		data->input_arr = (int *)ft_calloc(sizeof(int), argc - 1);
		data->arg_size = argc - 1;
	}
}