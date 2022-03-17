#include "fractol.h"

void		mouv_up_burning(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_burning->ymax - mlx->limit_burning->ymin) / 10;
	mlx->limit_burning->ymin -= decal;
	mlx->limit_burning->ymax -= decal;
}

void		mouv_down_burning(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_burning->ymax - mlx->limit_burning->ymin) / 10;
	mlx->limit_burning->ymin += decal;
	mlx->limit_burning->ymax += decal;
}

void		mouv_left_burning(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_burning->xmax - mlx->limit_burning->xmin) / 10;
	mlx->limit_burning->xmin -= decal;
	mlx->limit_burning->xmax -= decal;
}

void		mouv_right_burning(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_burning->xmax - mlx->limit_burning->xmin) / 10;
	mlx->limit_burning->xmin += decal;
	mlx->limit_burning->xmax += decal;
}
