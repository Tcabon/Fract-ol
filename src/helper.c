#include "fractol.h"

static void	helper_julia2(t_mlx *mlx)
{
	mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
		, 25, 350, 0x00FF00, "H : Afficher / enlever la fenetre d aide.");
	mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 400, 0x00FF00, "L : Bloque la rotation de la fractale.");
	mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 450, 0x00FF00, "ECHAP : Quitte le programme.");
	mlx->bonus_julia->help = 1;
}

static void	helper_mandel2(t_mlx *mlx)
{
	mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
		, 25, 300, 0x00FF00, "H : Afficher / enlever la fenetre d aide.");
	mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
		, 25, 350, 0x00FF00, "ECHAP : Quitte le programme.");
	mlx->bonus_mandel->help = 1;
}

void		helper_burning(t_mlx *mlx)
{
	if (mlx->bonus_burning->help == 0)
	{
		mlx->bonus_burning->win_help = mlx_new_window(mlx->mlx_ptr
			, 800, 600, "Help burning ship");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 200, 15, 0x00FF00, "Fractale burning ship");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 50, 0x00FF00,
			"Utiliser les fleches pour vous deplacer dans la fenetre.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 100, 0x00FF00, "Clic gauche / molette avant : Zoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 150, 0x00FF00, "Clic droit / molette arriere : Dezoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 200, 0x00FF00, "C : Changer le jeu de couleur.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 250, 0x00FF00,
			"G : Fait apparaitre une croix pour voir ou on zoom / dezoom.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 300, 0x00FF00, "H : Afficher / enlever la fenetre d aide.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_burning->win_help
			, 25, 350, 0x00FF00, "ECHAP : Quitte le programme.");
		mlx->bonus_burning->help = 1;
	}
	mlx_key_hook(mlx->bonus_burning->win_help, key_burning_help, mlx);
}

void		helper_julia(t_mlx *mlx)
{
	if (mlx->bonus_julia->help == 0)
	{
		mlx->bonus_julia->win_help = mlx_new_window(mlx->mlx_ptr
			, 800, 600, "Help Julia");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 200, 15, 0x00FF00, "Ensemble de Julia");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 50, 0x00FF00,
			"Utiliser les fleches pour vous deplacer dans la fenetre.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 100, 0x00FF00,
			"Bouger la souris pour parcourir l ensemble de Julia.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 150, 0x00FF00, "Clic gauche / molette avant : Zoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 200, 0x00FF00, "Clic droit / molette arriere  : Dezoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 250, 0x00FF00, "C : Changer le jeu de couleur.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_julia->win_help
			, 25, 300, 0x00FF00,
			"G : Fait apparaitre une croix pour voir ou on zoom / dezoom.");
		helper_julia2(mlx);
	}
	mlx_key_hook(mlx->bonus_julia->win_help, key_julia_help, mlx);
}

void		helper_mandel(t_mlx *mlx)
{
	if (mlx->bonus_mandel->help == 0)
	{
		mlx->bonus_mandel->win_help = mlx_new_window(mlx->mlx_ptr
			, 800, 600, "Help Mandelbrot");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 200, 15, 0x00FF00, "Ensemble de Mandelbrot");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 25, 50, 0x00FF00,
			"Utiliser les fleches pour vous deplacer dans la fenetre.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 25, 100, 0x00FF00,
			"Clic gauche / molette avant : Zoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 25, 150, 0x00FF00, "Clic droit / molette arriere  : Dezoom");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 25, 200, 0x00FF00, "C : Changer le jeu de couleur.");
		mlx_string_put(mlx->mlx_ptr, mlx->bonus_mandel->win_help
			, 25, 250, 0x00FF00,
			"G : Fait apparaitre une croix pour voir ou on zoom / dezoom.");
		helper_mandel2(mlx);
	}
	mlx_key_hook(mlx->bonus_mandel->win_help, key_mandel_help, mlx);
}
