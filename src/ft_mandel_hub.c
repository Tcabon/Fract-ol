#include "fractol.h"

void	give_c_mandel_value(t_mlx *mlx)
{
	mlx->point_mandel->cr = mlx->point_mandel->x / mlx->limit_mandel->coeffx
		+ mlx->limit_mandel->xmin;
	mlx->point_mandel->ci = -(mlx->point_mandel->y / mlx->limit_mandel->coeffy
		+ mlx->limit_mandel->ymin);
	mlx->point_mandel->zr = 0;
	mlx->point_mandel->zi = 0;
}

void	mandel_while_calc(t_mlx *mlx)
{
	int		i;
	double	module;
	double	tmp;

	i = 0;
	module = 0;
	while (i < mlx->limit_mandel->iter && module < 4)
	{
		tmp = mlx->point_mandel->zr;
		mlx->point_mandel->zr = mlx->point_mandel->zr * mlx->point_mandel->zr
			- mlx->point_mandel->zi * mlx->point_mandel->zi
			+ mlx->point_mandel->cr;
		mlx->point_mandel->zi = 2 * mlx->point_mandel->zi
			* tmp + mlx->point_mandel->ci;
		module = mlx->point_mandel->zr * mlx->point_mandel->zr
			+ mlx->point_mandel->zi * mlx->point_mandel->zi;
		i++;
	}
	if (i != mlx->limit_mandel->iter)
		switch_color_mandel(mlx, i);
	if (mlx->bonus_mandel->bol_g == TRUE && (mlx->point_mandel->x == WIDTH / 2
		|| mlx->point_mandel->y == HEIGHT / 2))
		mlx_put_pixel_image_mandel(mlx->point_mandel->x, mlx->point_mandel->y
			, 0x00FF00, *mlx);
}

void	ft_mandel_hub(t_mlx *mlx)
{
	mlx->win_mandel = mlx_new_window(mlx->mlx_ptr, WIDTH, HEIGHT, "mandel");
	mlx_key_hook(mlx->win_mandel, key_mandel, mlx);
	mlx_mouse_hook(mlx->win_mandel, mouse_mandel, mlx);
	mlx_expose_hook(mlx->win_mandel, expose_mandel, mlx);
}
