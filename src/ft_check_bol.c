#include "fractol.h"

static	int		bolbur_check(t_boller *bol)
{
	if (bol->bur == 0)
	{
		bol->bur = 1;
		return (0);
	}
	else
		return (1);
}

static	int		boljul_check(t_boller *bol)
{
	if (bol->jul == 0)
	{
		bol->jul = 1;
		return (0);
	}
	else
		return (1);
}

static	int		bolmand_check(t_boller *bol)
{
	if (bol->mand == 0)
	{
		bol->mand = 1;
		return (0);
	}
	else
		return (1);
}

void			ft_check_bol(char *str, t_boller *bol)
{
	str = ft_strtolower(str);
	if (ft_strcmp(str, "mandelbrot") == 0)
		bol->ret = bolmand_check(bol);
	else if (ft_strcmp(str, "julia") == 0)
		bol->ret = boljul_check(bol);
	else if (ft_strcmp(str, "burning") == 0)
		bol->ret = bolbur_check(bol);
	else
		bol->ret = 1;
}
