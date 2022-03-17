#include "../include/fractol.h"

static void	close_burning(t_mlx *mlx)
{
	if (mlx->zoom_burning)
		free(mlx->zoom_burning);
	if (mlx->point_burning)
		free(mlx->point_burning);
	if (mlx->limit_burning)
		free(mlx->limit_burning);
	if (mlx->bonus_burning)
	{
		if (mlx->bonus_burning->help == 1)
			mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_burning->win_help);
		free(mlx->bonus_burning);
	}
	if (mlx->data_burning)
		free(mlx->data_burning);
	if (mlx->win_burning)
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_burning);
}

static void	close_julia(t_mlx *mlx)
{
	if (mlx->zoom_julia)
		free(mlx->zoom_julia);
	if (mlx->point_julia)
		free(mlx->point_julia);
	if (mlx->limit_julia)
		free(mlx->limit_julia);
	if (mlx->bonus_julia)
	{
		if (mlx->bonus_julia->help == 1)
			mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_julia->win_help);
		free(mlx->bonus_julia);
	}
	if (mlx->data_julia)
		free(mlx->data_julia);
	if (mlx->win_julia)
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_julia);
}

static void	close_mandel(t_mlx *mlx)
{
	if (mlx->zoom_mandel)
		free(mlx->zoom_mandel);
	if (mlx->point_mandel)
		free(mlx->point_mandel);
	if (mlx->limit_mandel)
		free(mlx->limit_mandel);
	if (mlx->bonus_mandel)
	{
		if (mlx->bonus_mandel->help == 1)
			mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_mandel->win_help);
		free(mlx->bonus_mandel);
	}
	if (mlx->data_mandel)
		free(mlx->data_mandel);
	if (mlx->win_mandel)
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_mandel);
}

void		close_prog(t_mlx *mlx)
{
	if (mlx->win_mandel)
		close_mandel(mlx);
	if (mlx->win_julia)
		close_julia(mlx);
	if (mlx->win_burning)
		close_burning(mlx);
	if (mlx->mlx_ptr)
		free(mlx->mlx_ptr);
	exit(1);
}
