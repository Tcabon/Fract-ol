#include "fractol.h"

void	ft_arg_error(void)
{
	ft_putendl("Illegal usage of program !");
	ft_putstr("Use : ./fractol [mandelbrot, julia, burning] (You can launch");
	ft_putendl(" several fractals, but you can't launch the same two times.)");
	exit(1);
}
