#ifndef FRACTOL_H
# define FRACTOL_H
# define FALSE 0
# define TRUE 1
# define HEIGHT 720
# define WIDTH 1024
# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define L_CLIC 3
# define R_CLIC 2
# define SCROLL_UP 4
# define SCROLL_DOWN 5
# define ZOOM 122
# define C 8
# define G 5
# define L 37
# define H 4
# define ECHAP 53

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <time.h>
# include <mlx.h>
# include "../minilibx_macos/mlx.h"

typedef struct		s_zoom
{
	double			cx;
	double			cy;
	double			hx;
	double			hy;
}					t_zoom;

typedef	struct		s_limit
{
	double			xmin;
	double			xmax;
	double			ymin;
	double			ymax;
	double			coeffx;
	double			coeffy;
	int				iter;
}					t_limit;

typedef struct		s_bonus
{
	int				color;
	int				bol_g;
	int				locked;
	int				help;
	void			*win_help;
}					t_bonus;

typedef struct		s_point
{
	double			cr;
	double			ci;
	double			zr;
	double			zi;
	double			x;
	double			y;
}					t_point;

typedef struct		s_mlx
{
	int				bpp;
	int				endian;
	int				sizeline;
	void			*mlx_ptr;
	void			*win_mandel;
	void			*win_julia;
	void			*win_burning;
	void			*img_mandel;
	void			*img_julia;
	void			*img_burning;
	char			*data_mandel;
	char			*data_julia;
	char			*data_burning;
	t_bonus			*bonus_burning;
	t_bonus			*bonus_julia;
	t_bonus			*bonus_mandel;
	t_limit			*limit_burning;
	t_limit			*limit_julia;
	t_limit			*limit_mandel;
	t_point			*point_burning;
	t_point			*point_julia;
	t_point			*point_mandel;
	t_zoom			*zoom_burning;
	t_zoom			*zoom_julia;
	t_zoom			*zoom_mandel;
}					t_mlx;

typedef struct		s_bolerr
{
	int				mand;
	int				jul;
	int				bur;
	int				other;
	int				ret;
}					t_boller;

void				burning_while_calc(t_mlx *mlx);
void				close_prog(t_mlx *mlx);
int					expose_burning(t_mlx *mlx);
int					expose_julia(t_mlx *mlx);
int					expose_mandel(t_mlx *mlx);
void				ft_arg_error(void);
void				ft_burning_hub(t_mlx *mlx);
void				ft_check_bol(char *str, t_boller *bol);
int					ft_check_error(int argc, char **argv);
void				ft_init(char **argv);
void				ft_julia_hub(t_mlx *mlx);
void				ft_mandel_hub(t_mlx *mlx);
void				give_c_burning_value(t_mlx *mlx);
void				give_c_julia_value(t_mlx *mlx);
void				give_c_mandel_value(t_mlx *mlx);
void				grille_burning(t_mlx *mlx);
void				grille_julia(t_mlx *mlx);
void				grille_mandel(t_mlx *mlx);
void				helper_burning(t_mlx *mlx);
void				helper_julia(t_mlx *mlx);
void				helper_mandel(t_mlx *mlx);
void				init_struct_bonus(t_mlx *mlx);
void				init_struct_limit(t_mlx *mlx);
void				init_struct_point(t_mlx *mlx);
void				init_struct_zoom(t_mlx *mlx);
void				julia_while_calc(t_mlx *mlx);
int					key_burning(int keycode, t_mlx *mlx);
int					key_burning_help(int keycode, t_mlx *mlx);
int					key_julia(int keycode, t_mlx *mlx);
int					key_julia_help(int keycode, t_mlx *mlx);
int					key_mandel(int keycode, t_mlx *mlx);
int					key_mandel_help(int keycode, t_mlx *mlx);
void				left_click_burning(t_mlx *mlx, int x, int y);
void				left_click_julia(t_mlx *mlx, int x, int y);
void				left_click_mandel(t_mlx *mlx, int x, int y);
void				mandel_while_calc(t_mlx *mlx);
void				mlx_put_pixel_image_burning(int x, int y,
					unsigned long img_color, t_mlx mlx);
void				mlx_put_pixel_image_julia(int x, int y,
					unsigned long img_color, t_mlx mlx);
void				mlx_put_pixel_image_mandel(int x, int y,
					unsigned long img_color, t_mlx mlx);
int					motion_julia(int x, int y, t_mlx *mlx);
int					mouse_burning(int button, int x, int y, t_mlx *mlx);
int					mouse_julia(int button, int x, int y, t_mlx *mlx);
int					mouse_mandel(int button, int x, int y, t_mlx *mlx);
void				mouv_down_burning(t_mlx *mlx);
void				mouv_left_burning(t_mlx *mlx);
void				mouv_right_burning(t_mlx *mlx);
void				mouv_up_burning(t_mlx *mlx);
void				mouv_down_julia(t_mlx *mlx);
void				mouv_left_julia(t_mlx *mlx);
void				mouv_right_julia(t_mlx *mlx);
void				mouv_up_julia(t_mlx *mlx);
void				mouv_down_mandel(t_mlx *mlx);
void				mouv_left_mandel(t_mlx *mlx);
void				mouv_right_mandel(t_mlx *mlx);
void				mouv_up_mandel(t_mlx *mlx);
void				right_click_burning(t_mlx *mlx, int x, int y);
void				right_click_julia(t_mlx *mlx, int x, int y);
void				right_click_mandel(t_mlx *mlx, int x, int y);
void				reinit_julia(t_mlx *mlx);
void				reinit_mandel(t_mlx *mlx);
void				reinit_burning(t_mlx *mlx);
void				switch_color_burning(t_mlx *mlx, int i);
void				switch_color_value_burning(t_mlx *mlx);
void				switch_color_julia(t_mlx *mlx, int i);
void				switch_color_value_julia(t_mlx *mlx);
void				switch_color_mandel(t_mlx *mlx, int i);
void				switch_color_value_mandel(t_mlx *mlx);

#endif
