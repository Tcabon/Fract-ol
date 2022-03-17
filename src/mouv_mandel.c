#include "fractol.h"

void		mouv_up_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin) / 10;
	mlx->limit_mandel->ymin -= decal;
	mlx->limit_mandel->ymax -= decal;
}

void		mouv_down_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin) / 10;
	mlx->limit_mandel->ymin += decal;
	mlx->limit_mandel->ymax += decal;
}

void		mouv_left_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin) / 10;
	mlx->limit_mandel->xmin -= decal;
	mlx->limit_mandel->xmax -= decal;
}

void		mouv_right_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin) / 10;
	mlx->limit_mandel->xmin += decal;
	mlx->limit_mandel->xmax += decal;
}
