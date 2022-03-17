#include "fractol.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_arg_error();
	if (ft_check_error(argc, argv + 1) == TRUE)
	{
		ft_init(argv + 1);
	}
	else
		ft_arg_error();
	return (0);
}
