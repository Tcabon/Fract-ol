#include "fractol.h"

int		mouse_mandel(int button, int x, int y, t_mlx *mlx)
{
	init_struct_zoom(mlx);
	if (button == L_CLIC || button == SCROLL_UP)
		left_click_mandel(mlx, x, y);
	else if (button == R_CLIC || button == SCROLL_DOWN)
		right_click_mandel(mlx, x, y);
	return (0);
}

int		mouse_julia(int button, int x, int y, t_mlx *mlx)
{
	init_struct_zoom(mlx);
	if (button == L_CLIC || button == SCROLL_UP)
		left_click_julia(mlx, x, y);
	else if (button == R_CLIC || button == SCROLL_DOWN)
		right_click_julia(mlx, x, y);
	return (0);
}

int		mouse_burning(int button, int x, int y, t_mlx *mlx)
{
	init_struct_zoom(mlx);
	if (button == L_CLIC || button == SCROLL_UP)
		left_click_burning(mlx, x, y);
	else if (button == R_CLIC || button == SCROLL_DOWN)
		right_click_burning(mlx, x, y);
	return (0);
}
