#ifndef MAZE_H
#define MAZE_H

/* gcc -Wall -Werror -Wextra -pedantic -I/usr/include/SDL2 *.c */
/* curl https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/graphics_programming/install_SDL2.sh */

#include <stdio.h>
#include <SDL2/SDL.h>

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);
void draw_stuff(SDL_Instance instance);
int poll_events();




#endif /* #ifndef MAZE_H */
