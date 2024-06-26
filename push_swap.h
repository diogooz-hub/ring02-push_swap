/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaco <dpaco@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:56:16 by dpaco             #+#    #+#             */
/*   Updated: 2023/12/14 22:04:19 by dpaco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/headers/libft.h"
# include "libft/headers/ft_printf.h"

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	int					above_mid;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*prev_node;
	struct s_stack_node	*next_node;
}	t_stack_node;

//error handling
int				error_syntax(char *str);
int				error_duplicate(t_stack_node *a, int n);
void			clean_stack(t_stack_node **stack);
void			clean_av(char **arr);
void			exit_errors(t_stack_node **a, char **av_made);

//stack init
void			stack_init(t_stack_node **a, char **av);
void			stack_init_avmade(t_stack_node **a, char **av_made);
char			**split(char *s, char c);

//nodes init
void			prep_nodes_a(t_stack_node *a, t_stack_node *b);
void			prep_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
void			before_push(t_stack_node	**s, t_stack_node *n, char c);
t_stack_node	*find_cheapest(t_stack_node *stack);

//stack utils
int				stack_size(t_stack_node *stack);
int				stack_sorted(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *node);
t_stack_node	*find_min(t_stack_node *node);
t_stack_node	*find_max(t_stack_node *node);

//operations
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);

//algorithms
void			sort_three(t_stack_node **a);
void			sort_algo(t_stack_node **a, t_stack_node **b); //Turk algorithm
void			last_sort(t_stack_node **a);

#endif