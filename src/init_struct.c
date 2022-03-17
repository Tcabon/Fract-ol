#include "fractol.h"

void			init_struct_point(t_mlx *mlx)
{
	mlx->point_burning = (t_point *)malloc(sizeof(t_point));
	mlx->point_julia = (t_point *)malloc(sizeof(t_point));
	mlx->point_mandel = (t_point *)malloc(sizeof(t_point));
	mlx->point_burning->cr = 0;
	mlx->point_burning->ci = 0;
	mlx->point_burning->zr = 0;
	mlx->point_burning->zi = 0;
	mlx->point_burning->x = 0;
	mlx->point_burning->y = 0;
	mlx->point_julia->cr = 0.3;
	mlx->point_julia->ci = 0.5;
	mlx->point_julia->zr = 0;
	mlx->point_julia->zi = 0;
	mlx->point_julia->x = 0;
	mlx->point_julia->y = 0;
	mlx->point_mandel->cr = 0;
	mlx->point_mandel->ci = 0;
	mlx->point_mandel->zr = 0;
	mlx->point_mandel->zi = 0;
	mlx->point_mandel->x = 0;
	mlx->point_mandel->y = 0;
}

static void		init_struct_limit2(t_mlx *mlx)
{
	mlx->limit_burning->xmin = -5.2;
	mlx->limit_burning->xmax = 5.2;
	mlx->limit_burning->ymin = -5.2;
	mlx->limit_burning->ymax = 5.2;
	mlx->limit_burning->coeffx = WIDTH / (mlx->limit_burning->xmax -
		mlx->limit_burning->xmin);
	mlx->limit_burning->coeffy = HEIGHT / (mlx->limit_burning->ymax -
		mlx->limit_burning->ymin);
	mlx->limit_burning->iter = 50;
}

void			init_struct_limit(t_mlx *mlx)
{
	mlx->limit_burning = (t_limit *)malloc(sizeof(t_limit));
	mlx->limit_julia = (t_limit *)malloc(sizeof(t_limit));
	mlx->limit_mandel = (t_limit *)malloc(sizeof(t_limit));
	mlx->limit_mandel->xmin = -2;
	mlx->limit_mandel->xmax = 2;
	mlx->limit_mandel->ymin = -2;
	mlx->limit_mandel->ymax = 2;
	mlx->limit_mandel->coeffx = WIDTH / (mlx->limit_mandel->xmax -
		mlx->limit_mandel->xmin);
	mlx->limit_mandel->coeffy = HEIGHT / (mlx->limit_mandel->ymax -
		mlx->limit_mandel->ymin);
	mlx->limit_mandel->iter = 50;
	mlx->limit_julia->xmin = -2;
	mlx->limit_julia->xmax = 2;
	mlx->limit_julia->ymin = -2;
	mlx->limit_julia->ymax = 2;
	mlx->limit_julia->coeffx = WIDTH / (mlx->limit_julia->xmax -
		mlx->limit_julia->xmin);
	mlx->limit_julia->coeffy = HEIGHT / (mlx->limit_julia->ymax -
		mlx->limit_julia->ymin);
	mlx->limit_julia->iter = 50;
	init_struct_limit2(mlx);
}

void			init_struct_zoom(t_mlx *mlx)
{
	mlx->zoom_burning = (t_zoom *)malloc(sizeof(t_zoom));
	mlx->zoom_julia = (t_zoom *)malloc(sizeof(t_zoom));
	mlx->zoom_mandel = (t_zoom *)malloc(sizeof(t_zoom));
	mlx->zoom_mandel->cx = 0;
	mlx->zoom_mandel->cy = 0;
	mlx->zoom_mandel->hx = 0;
	mlx->zoom_mandel->hy = 0;
	mlx->zoom_julia->cx = 0;
	mlx->zoom_julia->cy = 0;
	mlx->zoom_julia->hx = 0;
	mlx->zoom_julia->hy = 0;
	mlx->zoom_burning->cx = 0;
	mlx->zoom_burning->cy = 0;
	mlx->zoom_burning->hx = 0;
	mlx->zoom_burning->hy = 0;
}

void			init_struct_bonus(t_mlx *mlx)
{
	mlx->bonus_burning = (t_bonus *)malloc(sizeof(t_bonus));
	mlx->bonus_julia = (t_bonus *)malloc(sizeof(t_bonus));
	mlx->bonus_mandel = (t_bonus *)malloc(sizeof(t_bonus));
	mlx->bonus_burning->bol_g = 0;
	mlx->bonus_burning->help = 0;
	mlx->bonus_burning->win_help = 0;
	mlx->bonus_burning->color = 0;
	mlx->bonus_julia->bol_g = 0;
	mlx->bonus_julia->locked = FALSE;
	mlx->bonus_julia->help = 0;
	mlx->bonus_julia->win_help = 0;
	mlx->bonus_julia->color = 0;
	mlx->bonus_mandel->bol_g = 0;
	mlx->bonus_mandel->help = 0;
	mlx->bonus_mandel->win_help = 0;
	mlx->bonus_mandel->color = 0;
}
