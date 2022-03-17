#include "fractol.h"

void	left_click_mandel(t_mlx *mlx, int x, int y)
{
	mlx->zoom_mandel->cx = x / mlx->limit_mandel->coeffx +
		mlx->limit_mandel->xmin;
	mlx->zoom_mandel->cy = (y / mlx->limit_mandel->coeffy +
		mlx->limit_mandel->ymin);
	mlx->zoom_mandel->hx = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin)
		/ 4;
	mlx->zoom_mandel->hy = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin)
		/ 4;
	mlx->limit_mandel->xmin = mlx->zoom_mandel->cx - mlx->zoom_mandel->hx;
	mlx->limit_mandel->xmax = mlx->zoom_mandel->cx + mlx->zoom_mandel->hx;
	mlx->limit_mandel->ymin = mlx->zoom_mandel->cy - mlx->zoom_mandel->hy;
	mlx->limit_mandel->ymax = mlx->zoom_mandel->cy + mlx->zoom_mandel->hy;
	mlx->limit_mandel->coeffx = WIDTH / (mlx->limit_mandel->xmax -
		mlx->limit_mandel->xmin);
	mlx->limit_mandel->coeffy = HEIGHT / (mlx->limit_mandel->ymax -
		mlx->limit_mandel->ymin);
	mlx->limit_mandel->iter += 20;
	expose_mandel(mlx);
}

void	right_click_mandel(t_mlx *mlx, int x, int y)
{
	mlx->zoom_mandel->cx = x / mlx->limit_mandel->coeffx +
		mlx->limit_mandel->xmin;
	mlx->zoom_mandel->cy = (y / mlx->limit_mandel->coeffy +
		mlx->limit_mandel->ymin);
	mlx->zoom_mandel->hx = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin);
	mlx->zoom_mandel->hy = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin);
	mlx->limit_mandel->xmin = mlx->zoom_mandel->cx - mlx->zoom_mandel->hx;
	mlx->limit_mandel->xmax = mlx->zoom_mandel->cx + mlx->zoom_mandel->hx;
	mlx->limit_mandel->ymin = mlx->zoom_mandel->cy - mlx->zoom_mandel->hy;
	mlx->limit_mandel->ymax = mlx->zoom_mandel->cy + mlx->zoom_mandel->hy;
	mlx->limit_mandel->coeffx = WIDTH / (mlx->limit_mandel->xmax -
		mlx->limit_mandel->xmin);
	mlx->limit_mandel->coeffy = HEIGHT / (mlx->limit_mandel->ymax -
		mlx->limit_mandel->ymin);
	mlx->limit_mandel->iter -= 20;
	if (mlx->limit_mandel->iter <= 20)
		mlx->limit_mandel->iter = 20;
	expose_mandel(mlx);
}
