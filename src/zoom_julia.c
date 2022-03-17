#include "fractol.h"

void	left_click_julia(t_mlx *mlx, int x, int y)
{
	mlx->zoom_julia->cx = x / mlx->limit_julia->coeffx +
		mlx->limit_julia->xmin;
	mlx->zoom_julia->cy = (y / mlx->limit_julia->coeffy +
		mlx->limit_julia->ymin);
	mlx->zoom_julia->hx = (mlx->limit_julia->xmax - mlx->limit_julia->xmin)
		/ 4;
	mlx->zoom_julia->hy = (mlx->limit_julia->ymax - mlx->limit_julia->ymin)
		/ 4;
	mlx->limit_julia->xmin = mlx->zoom_julia->cx - mlx->zoom_julia->hx;
	mlx->limit_julia->xmax = mlx->zoom_julia->cx + mlx->zoom_julia->hx;
	mlx->limit_julia->ymin = mlx->zoom_julia->cy - mlx->zoom_julia->hy;
	mlx->limit_julia->ymax = mlx->zoom_julia->cy + mlx->zoom_julia->hy;
	mlx->limit_julia->coeffx = WIDTH / (mlx->limit_julia->xmax -
		mlx->limit_julia->xmin);
	mlx->limit_julia->coeffy = HEIGHT / (mlx->limit_julia->ymax -
		mlx->limit_julia->ymin);
	mlx->limit_julia->iter += 20;
	expose_julia(mlx);
}

void	right_click_julia(t_mlx *mlx, int x, int y)
{
	mlx->zoom_julia->cx = x / mlx->limit_julia->coeffx +
		mlx->limit_julia->xmin;
	mlx->zoom_julia->cy = (y / mlx->limit_julia->coeffy +
		mlx->limit_julia->ymin);
	mlx->zoom_julia->hx = (mlx->limit_julia->xmax - mlx->limit_julia->xmin);
	mlx->zoom_julia->hy = (mlx->limit_julia->ymax - mlx->limit_julia->ymin);
	mlx->limit_julia->xmin = mlx->zoom_julia->cx - mlx->zoom_julia->hx;
	mlx->limit_julia->xmax = mlx->zoom_julia->cx + mlx->zoom_julia->hx;
	mlx->limit_julia->ymin = mlx->zoom_julia->cy - mlx->zoom_julia->hy;
	mlx->limit_julia->ymax = mlx->zoom_julia->cy + mlx->zoom_julia->hy;
	mlx->limit_julia->coeffx = WIDTH / (mlx->limit_julia->xmax -
		mlx->limit_julia->xmin);
	mlx->limit_julia->coeffy = HEIGHT / (mlx->limit_julia->ymax -
		mlx->limit_julia->ymin);
	mlx->limit_julia->iter -= 20;
	if (mlx->limit_julia->iter <= 20)
		mlx->limit_julia->iter = 20;
	expose_julia(mlx);
}
