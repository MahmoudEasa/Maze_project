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

	return (0);
}

