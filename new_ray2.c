#define mapWidth 24
#define mapHeight 24
#include "cub.h"

	char txt_rgb[8] = "0x00FF00";
int worldMap[mapWidth][mapHeight] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

// struct s_txtr
// {
// 	void *img;
// 	char *data;
// 	int width;
// 	int height;
// };
// typedef struct s_txtr t_txtr;

// struct s_info
// {
// 	t_txtr txtr[6];
// 	double posx;
// 	double posy;
// 	double mvspeed;
// 	double dirx;
// 	double diry;
// 	double planex;
// 	double planey;
// 	double camerax;
// 	double raydirx;
// 	double raydiry;
// 	double sidedistx;
// 	double sidedisty;
// 	double deltadistx;
// 	double deltadisty;
// 	double perpwalldist;
// 	int stepx;
// 	int stepy;
// 	int side;
// 	int hit;
// 	int mapx;
// 	int mapy;
// 	int lineHeight;
// 	int drawstart;
// 	int drawend;
// 	int x;
// 	double olddirx;
// 	double oldplanex;
// 	double savedir;
// 	int *dataimg;
// 	void *tximg;
// 	int color; //color tmp pour les murs, sol, plafond
// 	int texnum;
// 	double wallx;
// 	int tex_x;
// 	int tex_y;
// 	int txwidth;
// 	int txheight;
// 	double step;
// 	double texpos;
// 	int hex;
// 	int infotxtr;
// };
// typedef struct s_info t_info;

void	chose_color(t_info *infos) 
{
	if (infos->side == 0) //EW
	{
		if (infos->raydirx > 0)
			infos->infotxtr = 0; //0
		else
			infos->infotxtr = 1; //1
	}
	else if (infos->side == 1) //NS
	{
		if (infos->raydiry < 0)
			infos->infotxtr = 2; //2
		else
			infos->infotxtr = 3; //3
	}
}

void	drawsky(t_mlx *mlx, t_info *infos, t_cub *cub)
{
	int j = 0;
	while (j < infos->drawstart)
	{
		mlx->img.data[infos->x + j * infos->RESX] = 256 * 256 * cub->parse.ceiling_rgb[0] + 256 * cub->parse.ceiling_rgb[1] + cub->parse.ceiling_rgb[2];
		//mlx->img.data[infos->x + j * infos->RESX] = (int)0x00FF00;
		j++;
	}
}

void	setdrawp(t_mlx *mlx, t_info *infos)
{
	infos->drawstart = -infos->lineHeight / 2 + infos->RESY / 2;
	if (infos->drawstart < 0)
		infos->drawstart = 0;
	infos->drawend = infos->lineHeight / 2 + infos->RESY / 2;
	if (infos->drawend >= infos->RESY)
		infos->drawend = infos->RESY - 1;
	infos->texnum = worldMap[infos->mapx][infos->mapy] - 1;
	if (infos->side == 0)
		infos->wallx = infos->posy + infos->perpwalldist * infos->raydiry;
	else
		infos->wallx = infos->posx + infos->perpwalldist * infos->raydirx;
	infos->wallx -= floor(infos->wallx);
	infos->tex_x = (int)(infos->wallx * (double)infos->txtr[0].width);
	if (infos->side == 0 && infos->raydirx > 0)
		infos->tex_x = infos->txtr[0].width - infos->tex_x - 1;
	if (infos->side == 1 && infos->raydiry < 0)
		infos->tex_x = infos->txtr[0].width - infos->tex_x - 1;
	infos->step = 1.0 * infos->txtr[0].height / infos->lineHeight;
	infos->texpos = (infos->drawstart - infos->RESY / 2 + infos->lineHeight / 2) * infos->step;
}

void	drawwall(t_mlx *mlx, t_info *infos)
{
	while (infos->drawstart < infos->drawend)
	{
		infos->tex_y = (int)infos->texpos & (infos->txtr[infos->infotxtr].height - 1);
		infos->texpos += infos->step;
		infos->dataimg = (int *)mlx_get_data_addr(infos->txtr[infos->infotxtr].img, &mlx->img.bpp, &mlx->img.size_l, &mlx->img.endian);
		infos->hex = infos->dataimg[infos->tex_y * infos->txtr[infos->infotxtr].width + infos->tex_x];
		mlx->img.data[infos->x + (infos->drawend * infos->RESX)] = infos->hex;
		infos->drawend--;
	}
}

void	draw(t_mlx *mlx, t_info *infos, t_cub *cub)
{
	// int infos->color;
	int k;

	chose_color(infos);
	setdrawp(mlx, infos);
	drawsky(mlx, infos, cub);
	k = infos->drawend;
	drawwall(mlx, infos);

	//drawfloor
	while (k < infos->RESY)
	{
		mlx->img.data[infos->x + k * infos->RESX] = 256 * 256 * cub->parse.floor_rgb[0] +  256 * cub->parse.floor_rgb[1] + cub->parse.floor_rgb[2];
		//mlx->img.data[infos->x + k * infos->RESX] = 256 * 256 * 15 +  256 * 56 + 15;
		k++;
	}
}

void raydirxy(t_info *infos, t_cub *cub)
{
	infos->mapx = (int)infos->posx;
	infos->mapy = (int)infos->posy;
	infos->camerax = 2 * infos->x / (double)infos->RESX - 1;
	infos->raydirx = infos->dirx + infos->planex * infos->camerax;
	infos->raydiry = infos->diry + infos->planey * infos->camerax;
	infos->deltadistx = (infos->raydiry == 0) ? 0 : ((infos->raydirx == 0) ? 1 : fabs(1 / infos->raydirx));
	infos->deltadisty = (infos->raydirx == 0) ? 0 : ((infos->raydiry == 0) ? 1 : fabs(1 / infos->raydiry));
}

void sidedistxy(t_info *infos, t_cub *cub)
{
	infos->hit = 0;
	if (infos->raydirx < 0)
	{
		infos->stepx = -1;
		infos->sidedistx = (infos->posx - infos->mapx) * infos->deltadistx;
	}
	else
	{
		infos->stepx = 1;
		infos->sidedistx = (infos->mapx + 1.0 - infos->posx) * infos->deltadistx;
	}
	if (infos->raydiry < 0)
	{
		infos->stepy = -1;
		infos->sidedisty = (infos->posy - infos->mapy) * infos->deltadisty;
	}
	else
	{
		infos->stepy = 1;
		infos->sidedisty = (infos->mapy + 1.0 - infos->posy) * infos->deltadisty;
	}
}

void dda(t_info *infos, t_cub *cub)
{
	while (infos->hit == 0)
	{
		if (infos->sidedistx < infos->sidedisty)
		{
			infos->sidedistx += infos->deltadistx;
			infos->mapx += infos->stepx;
			infos->side = 0;
		}
		else
		{
			infos->sidedisty += infos->deltadisty;
			infos->mapy += infos->stepy;
			infos->side = 1;
		}
		if (worldMap[infos->mapx][infos->mapy] > 0)
			infos->hit = 1;
	}
	if (infos->side == 0)
		infos->perpwalldist = (infos->mapx - infos->posx + (1 - infos->stepx) / 2) / infos->raydirx;
	else
		infos->perpwalldist = (infos->mapy - infos->posy + (1 - infos->stepy) / 2) / infos->raydiry;
	infos->lineHeight = (int)(infos->RESY / infos->perpwalldist);
}

void all(t_info *infos, t_mlx *mlx, t_cub *cub)
{
	infos->x = 0;
	while (infos->x < infos->RESX)
	{
		raydirxy(infos, cub);
		sidedistxy(infos, cub);
		dda(infos, cub);
		draw(mlx, infos, cub);
		infos->x++;
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win, mlx->img.img_ptr, 0, 0);
}

void initializeValues(t_mlx *mlx, t_info *infos, t_cub *cub)
{

	infos->posx = cub->parse.pos[0], infos->posy = cub->parse.pos[1];
	infos->dirx = 0, infos->diry = 1;
	infos->planex = 0.66, infos->planey = 0;

	/*printf("Direction : %c\n", cub->parse.side);
	if(cub->parse.side == 'W')
	{
		infos->dirx = -1, infos->diry = 0;
	}*/

	if (infos->diry == 0)
	{
		if (infos->dirx < 0)
			infos->savedir = 1;
		else if (infos->dirx > 0)
			infos->savedir = -1;
	}
	else if (infos->dirx == 0)
	{
		if (infos->diry < 0)
			infos->savedir = -1;
		else if (infos->diry > 0)
			infos->savedir = 1;
	}
	infos->mvspeed = 0.1;
}

void	updown(t_mlx *mlx, t_info *infos, int key)
{
		infos->mvspeed *= (key == 115) ? -1 : 1;
		if (worldMap[(int)(infos->posx + infos->dirx * infos->mvspeed)][(int)(infos->posy)] == 0)
			infos->posx += infos->dirx * infos->mvspeed;
		if (worldMap[(int)(infos->posx)][(int)(infos->posy + infos->diry * infos->mvspeed)] == 0)
			infos->posy += infos->diry * infos->mvspeed;
}

void	mv_lr(t_mlx *mlx, t_info *infos, int key)
{
		infos->mvspeed *= -infos->savedir;
		infos->mvspeed *= (key == 100) ? -1 : 1;
		if (worldMap[(int)(infos->posx)][(int)(infos->posy - infos->dirx * infos->mvspeed)] == 0)
			infos->posy -= infos->dirx * infos->mvspeed;
		if (worldMap[(int)(infos->posx + infos->mvspeed * infos->diry)][(int)(infos->posy)] == 0)
			infos->posx += infos->diry * infos->mvspeed;
}

void	cam_lr(t_mlx *mlx, t_info *infos, int key)
{
		double olddirx;
		double oldplanex;
		double angle;
		angle = D_PI / 30 * infos->savedir;
		angle *= (key == 65363) ? -1 : 1;

		olddirx = infos->dirx;
		oldplanex = infos->planex;
		infos->dirx = infos->dirx * cos(angle) - infos->diry * sin(angle);
		infos->diry = olddirx * sin(angle) + infos->diry * cos(angle);
		infos->planex = infos->planex * cos(angle) - infos->planey * sin(angle);
		infos->planey = oldplanex * sin(angle) + infos->planey * cos(angle);
}

int keypressed(int key, void *p)
{
	void **recup;
	t_info *infos;
	t_mlx *mlx;
	t_cub *cub;
	
	recup = (void **)p;
	infos = recup[0];
	mlx = recup[1];
	cub = recup[2];
	if (key == 65307)
		exit(0);
	infos->mvspeed = 0.3;
	if (key == 122 || key == 115) //up & down
	{
		updown(mlx, infos, key);	
		all(((t_info *)recup[0]), ((t_mlx *)recup[1]), ((t_cub *)recup[2]));
	}
	else if (key == 113 || key == 100) //left & right
	{
		mv_lr(mlx, infos, key);
		all(((t_info *)recup[0]), ((t_mlx *)recup[1]), ((t_cub *)recup[2]));
	}
	else if (key == 65361 || key == 65363) //camera left & right
	{
		cam_lr(mlx, infos, key);
		all(((t_info *)recup[0]), ((t_mlx *)recup[1]), ((t_cub *)recup[2]));
	}
	return (1);
}

int		raycasting(t_mlx *mlx, t_info *infos, t_cub *cub)
{
	/*FIN VIA PARSING*/
	infos->txtr[0].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "north.xpm", &infos->txtr[0].width, &infos->txtr[0].height); //north.xpm
	infos->txtr[1].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "south.xpm", &infos->txtr[1].width, &infos->txtr[1].height); //south.xpm
	infos->txtr[2].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "west.xpm", &infos->txtr[2].width, &infos->txtr[2].height); //weast.xpm
	infos->txtr[3].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "east.xpm", &infos->txtr[3].width, &infos->txtr[3].height); //east.xpm

	infos->txtr[4].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "floor.xpm", &infos->txtr[4].width, &infos->txtr[4].height); //floor.xpm
	infos->txtr[5].img = mlx_xpm_file_to_image(mlx->mlx_ptr, "ceiling.xpm", &infos->txtr[5].width, &infos->txtr[5].height); //ceiling.xpm

	//infos->tximg = mlx_xpm_file_to_image(mlx->mlx_ptr, "bricks.xpm", &infos->txwidth, &infos->txheight);
	mlx->img.img_ptr = mlx_new_image(mlx->mlx_ptr, infos->RESX, infos->RESY);
	mlx->img.data = (int *)mlx_get_data_addr(mlx->img.img_ptr, &mlx->img.bpp, &mlx->img.size_l, &mlx->img.endian);
	
	initializeValues(mlx, infos, cub);
	
	all(infos, mlx, cub);
	return (1);
}
