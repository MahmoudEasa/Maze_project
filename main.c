#include "maze.h"

/**
 * main - The main function
 *
 * Return: 0
 */

int main(void)
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);

	/**
	 * C will always be awesome
	 * This is an infinite loop
	 */

	while ("C is awesome")
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		if (poll_events() == 1)
			break;
		/**
		 * Draw some stuff here
		 */
		draw_stuff(instance);
		SDL_RenderPresent(instance.renderer);
	}

	return (0);
}

/**
 * draw_stuff - Draw some stuff
 * @instance: instance
 */

void draw_stuff(SDL_Instance instance)
{
	SDL_SetRenderDrawColor(instance.renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderDrawLine(instance.renderer, 10, 10, 100, 100);
}

/**
 * poll_events - retrieve events on each frame
 *
 * Return: 0 or 1
 */

int poll_events()
{
	SDL_Event event;
	SDL_KeyboardEvent key;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				return (1);
			case SDL_KEYDOWN:
				key = event.key;
				/* If 'ESCQPE' is pressed */
				if (key.keysym.scancode == 0x29)
					return (1);
				break;
		}
	}

	return (0);
}

