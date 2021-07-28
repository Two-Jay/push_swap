/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearmem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:53:38 by jekim             #+#    #+#             */
/*   Updated: 2021/07/29 04:12:17 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fn_clear_memory(t_bucket *data)
{
	int	ix;

	ix = 0;
	if (data->a->size > 0)
		ps_dlstclear(data->a);
	if (data->b->size > 0)
		ps_dlstclear(data->b);
	free(data->a);
	free(data->b);
	free(data->input_arr);
	if (data->arg_type == STR_ARG)
	{
		while (data->input_arr_str[ix])
			free(data->input_arr_str[ix++]);
		free(data->input_arr_str);
	}
	free(data);
}
