#include "push_swap.h"

static int	int_validate(char **split, char *nbr, int bgn)
{
	int i;

	i = 0;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (!ft_isdigit(nbr[i + 1]))
			return (0);
		i++;
	}
	while (nbr && nbr[i] != '\0')
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	if (ft_ato_longlong(nbr) > 2147483647 || ft_ato_longlong(nbr) < -2147483647)
		return (0);
	while (split[bgn] && split && nbr)
	{
		if (ft_strequ(split[bgn], nbr))
			return (0);
		bgn++;
	}
	return (1);
}

static	int	build_stacks(t_stacks *stacks, char **split, int count)
{
	int	i;

	i = -1;
	stacks->a_stack = (int*)malloc(sizeof(int)* count);
	stacks->b_stack = (int*)ft_memalloc(sizeof(int) * count);
	stacks->a_size = count;
	stacks->b_size = 0;
	while(++i < count)
	{
		if(int_validate(split, split[i], i + 1))
			stacks->a_stack[i] = ft_atoi(split[i]);
		else
		{
			delete_stacks(&stacks);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	return (1);
}

static int	split_count(char **split)
{
	int	count;

	count = 0;
	while(*(split++))
		count++;
	return (count);
}

static	void	delete_split(char ***split)
{
	int	i;
	
	i = 0;
	if(*split)
	{
		while((*split)[i])
			free((*split)[i++]);
		free(*split);
		*split = NULL;
	}
}


void		check_argv(t_stacks *stacks, char **argv, int argc)
{
	char	**split;

	split = NULL;
	if(argc == 2)
	{
		split = ft_strsplit(argv[1], ' ');
		if(!build_stacks(stacks, split, split_count(split)))
		{
			delete_split(&split);
			exit(1);
		}
		delete_split(&split);
	}
	else if (!build_stacks(stacks, (argv + 1), argc - 1))
		exit(1);
	return ;
}
