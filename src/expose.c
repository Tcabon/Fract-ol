#include "fractol.h"

int			expose_burning(t_mlx *mlx)
{
	if (mlx->img_burning)
		mlx_destroy_image(mlx->mlx_ptr, mlx->img_burning);
	mlx->img_burning = mlx_new_image(mlx->mlx_ptr, WIDTH, HEIGHT);
	mlx->data_burning = mlx_get_data_addr(mlx->img_burning, &(mlx->bpp),
		&(mlx->sizeline), &(mlx->endian));
	reinit_burning(mlx);
	while (mlx->point_burning->x < WIDTH)
	{
		mlx->point_burning->y = 0;
		while (mlx->point_burning->y < HEIGHT)
		{
			give_c_burning_value(mlx);
			burning_while_calc(mlx);
			mlx->point_burning->y++;
		}
		mlx->point_burning->x++;
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_burning,
		mlx->img_burning, 0, 0);
	return (0);
}

int			expose_mandel(t_mlx *mlx)
{
	if (mlx->img_mandel)
		mlx_destroy_image(mlx->mlx_ptr, mlx->img_mandel);
	mlx->img_mandel = mlx_new_image(mlx->mlx_ptr, WIDTH, HEIGHT);
	mlx->data_mandel = mlx_get_data_addr(mlx->img_mandel, &(mlx->bpp),
		&(mlx->sizeline), &(mlx->endian));
	reinit_mandel(mlx);
	while (mlx->point_mandel->x < WIDTH)
	{
		mlx->point_mandel->y = 0;
		while (mlx->point_mandel->y < HEIGHT)
		{
			give_c_mandel_value(mlx);
			mandel_while_calc(mlx);
			mlx->point_mandel->y++;
		}
		mlx->point_mandel->x++;
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_mandel,
		mlx->img_mandel, 0, 0);
	return (0);
}

static void	expose_julia2(t_mlx *mlx)
{
	if (mlx->bonus_julia->locked == FALSE)
		mlx_string_put(mlx->mlx_ptr, mlx->win_julia, 50, 50, 0x00FF00,
			"UNLOCKED");
	else
		mlx_string_put(mlx->mlx_ptr, mlx->win_julia, 50, 50, 0x00FF00,
			"LOCKED");
}

int			expose_julia(t_mlx *mlx)
{
	if (mlx->img_julia)
		mlx_destroy_image(mlx->mlx_ptr, mlx->img_julia);
	mlx->img_julia = mlx_new_image(mlx->mlx_ptr, WIDTH, HEIGHT);
	mlx->data_julia = mlx_get_data_addr(mlx->img_julia, &(mlx->bpp),
		&(mlx->sizeline), &(mlx->endian));
	reinit_julia(mlx);
	while (mlx->point_julia->x < WIDTH)
	{
		mlx->point_julia->y = 0;
		while (mlx->point_julia->y < HEIGHT)
		{
			give_c_julia_value(mlx);
			julia_while_calc(mlx);
			mlx->point_julia->y++;
		}
		mlx->point_julia->x++;
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_julia,
		mlx->img_julia, 0, 0);
	expose_julia2(mlx);
	return (0);
}
