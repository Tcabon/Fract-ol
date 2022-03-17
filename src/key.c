#include "fractol.h"

int		key_burning(int keycode, t_mlx *mlx)
{
	if (keycode == UP)
		mouv_up_burning(mlx);
	else if (keycode == DOWN)
		mouv_down_burning(mlx);
	else if (keycode == LEFT)
		mouv_left_burning(mlx);
	else if (keycode == RIGHT)
		mouv_right_burning(mlx);
	else if (keycode == C)
		switch_color_value_burning(mlx);
	else if (keycode == G)
		grille_burning(mlx);
	else if (keycode == H)
		helper_burning(mlx);
	else if (keycode == ECHAP)
		close_prog(mlx);
	expose_burning(mlx);
	return (0);
}

int		key_julia(int keycode, t_mlx *mlx)
{
	if (keycode == UP)
		mouv_up_julia(mlx);
	else if (keycode == DOWN)
		mouv_down_julia(mlx);
	else if (keycode == LEFT)
		mouv_left_julia(mlx);
	else if (keycode == RIGHT)
		mouv_right_julia(mlx);
	else if (keycode == C)
		switch_color_value_julia(mlx);
	else if (keycode == G)
		grille_julia(mlx);
	else if (keycode == L)
	{
		if (mlx->bonus_julia->locked == FALSE)
			mlx->bonus_julia->locked = TRUE;
		else
			mlx->bonus_julia->locked = FALSE;
	}
	else if (keycode == H)
		helper_julia(mlx);
	else if (keycode == ECHAP)
		close_prog(mlx);
	expose_julia(mlx);
	return (0);
}

int		key_mandel(int keycode, t_mlx *mlx)
{
	if (keycode == UP)
		mouv_up_mandel(mlx);
	else if (keycode == DOWN)
		mouv_down_mandel(mlx);
	else if (keycode == LEFT)
		mouv_left_mandel(mlx);
	else if (keycode == RIGHT)
		mouv_right_mandel(mlx);
	else if (keycode == C)
		switch_color_value_mandel(mlx);
	else if (keycode == G)
		grille_mandel(mlx);
	else if (keycode == H)
		helper_mandel(mlx);
	else if (keycode == ECHAP)
		close_prog(mlx);
	expose_mandel(mlx);
	return (0);
}
