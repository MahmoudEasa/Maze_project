#include <SDL2/SDL.h>
/* #include "maze.h" */

/**
 * main - The main function
 * argc: Argument count
 * argv: All arguments
 *
 * Return: 0
 */

int main(void)
{
	const int SCREEN_WIDTH = 1260, SCREEN_HEIGHT = 720;
	SDL_Window *window;
	SDL_Renderer *renderer;

	if(SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
		return (1);
	}
	/* Create window */
	window = SDL_CreateWindow("SDL2 \\o/", SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
			SCREEN_HEIGHT, 0);
	if (!window)
	{
		fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	/* Create a new Renderer instance linked to the Window */
	renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (!renderer)
	{
		SDL_DestroyWindow(window);
		fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	return (0);
}

