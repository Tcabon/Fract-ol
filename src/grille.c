#include "fractol.h"

void		grille_burning(t_mlx *mlx)
{
	if (mlx->bonus_burning->bol_g == 0)
		mlx->bonus_burning->bol_g = 1;
	else
		mlx->bonus_burning->bol_g = 0;
}

void		grille_julia(t_mlx *mlx)
{
	if (mlx->bonus_julia->bol_g == 0)
		mlx->bonus_julia->bol_g = 1;
	else
		mlx->bonus_julia->bol_g = 0;
}

void		grille_mandel(t_mlx *mlx)
{
	if (mlx->bonus_mandel->bol_g == 0)
		mlx->bonus_mandel->bol_g = 1;
	else
		mlx->bonus_mandel->bol_g = 0;
}
