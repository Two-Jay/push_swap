
int fn_push_swap_t100_v1(t_bucket *data)
{
	int ix = 0;
	int lowest = 1;
	while (ix < data->size)
	{
		fn_findup_by_rank_a(data, lowest++);
		ps_inst_pb(data);
		ix++;
	}
	while (ix--)
		ps_inst_pa(data);
	return (data->count);
}