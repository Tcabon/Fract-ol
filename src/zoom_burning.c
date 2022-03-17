#include "fractol.h"

void	left_click_burning(t_mlx *mlx, int x, int y)
{
	mlx->zoom_burning->cx = x / mlx->limit_burning->coeffx +
		mlx->limit_burning->xmin;
	mlx->zoom_burning->cy = (y / mlx->limit_burning->coeffy +
		mlx->limit_burning->ymin);
	mlx->zoom_burning->hx = (mlx->limit_burning->xmax -
		mlx->limit_burning->xmin) / 4;
	mlx->zoom_burning->hy = (mlx->limit_burning->ymax -
		mlx->limit_burning->ymin) / 4;
	mlx->limit_burning->xmin = mlx->zoom_burning->cx - mlx->zoom_burning->hx;
	mlx->limit_burning->xmax = mlx->zoom_burning->cx + mlx->zoom_burning->hx;
	mlx->limit_burning->ymin = mlx->zoom_burning->cy - mlx->zoom_burning->hy;
	mlx->limit_burning->ymax = mlx->zoom_burning->cy + mlx->zoom_burning->hy;
	mlx->limit_burning->coeffx = WIDTH / (mlx->limit_burning->xmax -
		mlx->limit_burning->xmin);
	mlx->limit_burning->coeffy = HEIGHT / (mlx->limit_burning->ymax -
		mlx->limit_burning->ymin);
	mlx->limit_burning->iter += 20;
	expose_burning(mlx);
}

void	right_click_burning(t_mlx *mlx, int x, int y)
{
	mlx->zoom_burning->cx = x / mlx->limit_burning->coeffx +
		mlx->limit_burning->xmin;
	mlx->zoom_burning->cy = (y / mlx->limit_burning->coeffy +
		mlx->limit_burning->ymin);
	mlx->zoom_burning->hx = (mlx->limit_burning->xmax -
		mlx->limit_burning->xmin);
	mlx->zoom_burning->hy = (mlx->limit_burning->ymax -
		mlx->limit_burning->ymin);
	mlx->limit_burning->xmin = mlx->zoom_burning->cx - mlx->zoom_burning->hx;
	mlx->limit_burning->xmax = mlx->zoom_burning->cx + mlx->zoom_burning->hx;
	mlx->limit_burning->ymin = mlx->zoom_burning->cy - mlx->zoom_burning->hy;
	mlx->limit_burning->ymax = mlx->zoom_burning->cy + mlx->zoom_burning->hy;
	mlx->limit_burning->coeffx = WIDTH / (mlx->limit_burning->xmax -
		mlx->limit_burning->xmin);
	mlx->limit_burning->coeffy = HEIGHT / (mlx->limit_burning->ymax -
		mlx->limit_burning->ymin);
	mlx->limit_burning->iter -= 20;
	if (mlx->limit_burning->iter <= 20)
		mlx->limit_burning->iter = 20;
	expose_burning(mlx);
}
