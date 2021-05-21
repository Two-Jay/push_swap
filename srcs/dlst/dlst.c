/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:22 by jekim             #+#    #+#             */
/*   Updated: 2021/05/20 14:22:05 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

void	ft_dlstadd_front(t_stack *stack, t_dlst *newnode)
{
	t_dlst *tmp;

	tmp = 0;
	if (!stack || !newnode)
		return ;
	
	stack->top->next = newnode;
}


//check
t_dlst	*ft_dlstnew(int value)
{
	t_dlst	*node;
	
	node = (t_dlst *)malloc(sizeof(t_dlst));
	if (!node)
		return (NULL);
	if (!value)
		node->value = 0;
	else
		node->value = value;
	node->next = NULL;
	node->before = NULL;
	return (node);
}

int main()
{
	t_dlst	*node = ft_dlstnew(3);
	t_dlst	*node2 = ft_dlstnew(5);
	t_dlst	*node3 = ft_dlstnew(7);

	printf("node1 value == [%d]\n", node->value);
	printf("node2 value == [%d]\n", node2->value);
	printf("node3 value == [%d]\n", node3->value);
	node->next = node2;
	node2->before = node;
	node2->next = node3;
	node3->before = node2;
	node->before = node3;
	node3->next = node;

	t_dlst	*ptr = node;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->next;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->next;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->next;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->next;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->before;
	printf("ptr's node value == [%d]\n", ptr->value);
	ptr = ptr->before;
	printf("ptr's node value == [%d]\n", ptr->value);
	return (0);

}
