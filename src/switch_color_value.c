#include "fractol.h"

void	switch_color_value_burning(t_mlx *mlx)
{
	if (mlx->bonus_burning->color == 0)
		mlx->bonus_burning->color = 1;
	else if (mlx->bonus_burning->color == 1)
		mlx->bonus_burning->color = 2;
	else if (mlx->bonus_burning->color == 2)
		mlx->bonus_burning->color = 0;
}

void	switch_color_value_julia(t_mlx *mlx)
{
	if (mlx->bonus_julia->color == 0)
		mlx->bonus_julia->color = 1;
	else if (mlx->bonus_julia->color == 1)
		mlx->bonus_julia->color = 2;
	else if (mlx->bonus_julia->color == 2)
		mlx->bonus_julia->color = 0;
}

void	switch_color_value_mandel(t_mlx *mlx)
{
	if (mlx->bonus_mandel->color == 0)
		mlx->bonus_mandel->color = 1;
	else if (mlx->bonus_mandel->color == 1)
		mlx->bonus_mandel->color = 2;
	else if (mlx->bonus_mandel->color == 2)
		mlx->bonus_mandel->color = 0;
}
