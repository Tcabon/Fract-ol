#include "fractol.h"

void		give_c_julia_value(t_mlx *mlx)
{
	mlx->point_julia->zr = mlx->point_julia->x / mlx->limit_julia->coeffx
		+ mlx->limit_julia->xmin;
	mlx->point_julia->zi = -(mlx->point_julia->y / mlx->limit_julia->coeffy
		+ mlx->limit_julia->ymin);
}

void		julia_while_calc(t_mlx *mlx)
{
	int		i;
	double	module;
	double	tmp;

	i = 0;
	module = 0;
	while (i < mlx->limit_julia->iter && module < 4)
	{
		tmp = mlx->point_julia->zr;
		mlx->point_julia->zr = mlx->point_julia->zr * mlx->point_julia->zr -
			mlx->point_julia->zi * mlx->point_julia->zi + mlx->point_julia->cr;
		mlx->point_julia->zi = 2 * mlx->point_julia->zi * tmp
			+ mlx->point_julia->ci;
		module = mlx->point_julia->zr * mlx->point_julia->zr
			+ mlx->point_julia->zi * mlx->point_julia->zi;
		i++;
	}
	if (i != mlx->limit_julia->iter)
		switch_color_julia(mlx, i);
	if (mlx->bonus_julia->bol_g == TRUE && (mlx->point_julia->x == WIDTH / 2
		|| mlx->point_julia->y == HEIGHT / 2))
		mlx_put_pixel_image_julia(mlx->point_julia->x,
			mlx->point_julia->y, 0x00FF00, *mlx);
}

void		ft_julia_hub(t_mlx *mlx)
{
	mlx->win_julia = mlx_new_window(mlx->mlx_ptr, WIDTH, HEIGHT, "julia");
	mlx_key_hook(mlx->win_julia, key_julia, mlx);
	mlx_mouse_hook(mlx->win_julia, mouse_julia, mlx);
	mlx_hook(mlx->win_julia, 6, (1L << 6), motion_julia, mlx);
	mlx_expose_hook(mlx->win_julia, expose_julia, mlx);
}
