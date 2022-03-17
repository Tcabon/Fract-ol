#include "fractol.h"

void		give_c_burning_value(t_mlx *mlx)
{
	mlx->point_burning->cr = mlx->point_burning->x / mlx->limit_burning->coeffx
		+ mlx->limit_burning->xmin;
	mlx->point_burning->ci = -(mlx->point_burning->y
		/ mlx->limit_burning->coeffy
		+ mlx->limit_burning->ymin);
	mlx->point_burning->zr = 0;
	mlx->point_burning->zi = 0;
}

void		burning_while_calc(t_mlx *mlx)
{
	int		i;
	double	module;
	double	tmp;

	i = 0;
	module = 0;
	while (i < mlx->limit_burning->iter && module < 4)
	{
		tmp = mlx->point_burning->zr;
		mlx->point_burning->zr = mlx->point_burning->zr * mlx->point_burning->zr
			- mlx->point_burning->zi * mlx->point_burning->zi
			+ mlx->point_burning->cr;
		mlx->point_burning->zi = 2 * ft_absolute_nb(mlx->point_burning->zi)
			* ft_absolute_nb(tmp) - mlx->point_burning->ci;
		module = mlx->point_burning->zr * mlx->point_burning->zr
			+ mlx->point_burning->zi * mlx->point_burning->zi;
		i++;
	}
	if (i != mlx->limit_burning->iter)
		switch_color_burning(mlx, i);
	if (mlx->bonus_burning->bol_g == TRUE && (mlx->point_burning->x ==
			WIDTH / 2 || mlx->point_burning->y == HEIGHT / 2))
		mlx_put_pixel_image_burning(mlx->point_burning->x,
			mlx->point_burning->y, 0x00FF00, *mlx);
}

void		ft_burning_hub(t_mlx *mlx)
{
	mlx->win_burning = mlx_new_window(mlx->mlx_ptr, WIDTH, HEIGHT, "burning");
	mlx_key_hook(mlx->win_burning, key_burning, mlx);
	mlx_mouse_hook(mlx->win_burning, mouse_burning, mlx);
	mlx_expose_hook(mlx->win_burning, expose_burning, mlx);
}
