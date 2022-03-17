#include "fractol.h"

void	mlx_put_pixel_image_burning(int x, int y, unsigned long img_color,
	t_mlx mlx)
{
	unsigned int		color;
	char				*ptr;
	int					i;

	i = y * mlx.sizeline + x * mlx.bpp / 8;
	color = mlx_get_color_value(mlx.mlx_ptr, img_color);
	ptr = (char *)&color;
	mlx.data_burning[i] = ptr[0];
	mlx.data_burning[i + 1] = ptr[1];
	mlx.data_burning[i + 2] = ptr[2];
}

void	mlx_put_pixel_image_julia(int x, int y, unsigned long img_color,
	t_mlx mlx)
{
	unsigned int		color;
	char				*ptr;
	int					i;

	i = y * mlx.sizeline + x * mlx.bpp / 8;
	color = mlx_get_color_value(mlx.mlx_ptr, img_color);
	ptr = (char *)&color;
	mlx.data_julia[i] = ptr[0];
	mlx.data_julia[i + 1] = ptr[1];
	mlx.data_julia[i + 2] = ptr[2];
}

void	mlx_put_pixel_image_mandel(int x, int y, unsigned long img_color,
	t_mlx mlx)
{
	unsigned int		color;
	char				*ptr;
	int					i;

	i = y * mlx.sizeline + x * mlx.bpp / 8;
	color = mlx_get_color_value(mlx.mlx_ptr, img_color);
	ptr = (char *)&color;
	mlx.data_mandel[i] = ptr[0];
	mlx.data_mandel[i + 1] = ptr[1];
	mlx.data_mandel[i + 2] = ptr[2];
}
