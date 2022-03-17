#include "fractol.h"

void	reinit_julia(t_mlx *mlx)
{
	mlx->point_julia->zr = 0;
	mlx->point_julia->zi = 0;
	mlx->point_julia->x = 0;
	mlx->point_julia->y = 0;
}

void	reinit_mandel(t_mlx *mlx)
{
	mlx->point_mandel->cr = 0;
	mlx->point_mandel->ci = 0;
	mlx->point_mandel->zr = 0;
	mlx->point_mandel->zi = 0;
	mlx->point_mandel->x = 0;
	mlx->point_mandel->y = 0;
}

void	reinit_burning(t_mlx *mlx)
{
	mlx->point_burning->cr = 0;
	mlx->point_burning->ci = 0;
	mlx->point_burning->zr = 0;
	mlx->point_burning->zi = 0;
	mlx->point_burning->x = 0;
	mlx->point_burning->y = 0;
}
