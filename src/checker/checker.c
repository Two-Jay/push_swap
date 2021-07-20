/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/21 07:29:23 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void fn_print_stack(t_bucket *data, int flag)
{
	if (flag == 1)
		printf("===== before ===\n");
	if (flag == 2)
		printf("===== after ===\n");
	printf("A : ");
	ps_dlstprint(data->a);
	printf("B : ");
	ps_dlstprint(data->b);
	if (flag == 2)
		printf("result : [%d]\n", data->count);
}

int fn_check_command(t_bucket *data, void (*fn)(t_bucket), char *line)
{
}

int fn_read_inputcommand(void)
{
	void (*fn)(t_bucket);
	char *line;

	while (ft_strgnl(0, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_bucket *data;

	data = ps_bucketnew(argc - 1);
	fn_validate_input(argc, argv, data);
	fn_read_inputcommand();
	return (data->count);
}