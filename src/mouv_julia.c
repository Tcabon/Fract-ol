#include "fractol.h"

void		mouv_up_julia(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_julia->ymax - mlx->limit_julia->ymin) / 10;
	mlx->limit_julia->ymin -= decal;
	mlx->limit_julia->ymax -= decal;
}

void		mouv_down_julia(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_julia->ymax - mlx->limit_julia->ymin) / 10;
	mlx->limit_julia->ymin += decal;
	mlx->limit_julia->ymax += decal;
}

void		mouv_left_julia(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_julia->xmax - mlx->limit_julia->xmin) / 10;
	mlx->limit_julia->xmin -= decal;
	mlx->limit_julia->xmax -= decal;
}

void		mouv_right_julia(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_julia->xmax - mlx->limit_julia->xmin) / 10;
	mlx->limit_julia->xmin += decal;
	mlx->limit_julia->xmax += decal;
}
