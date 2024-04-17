#include "main.h"

/**
 * SDL_KEYDOWN_FUNC - process input when a key pressed
 * @event: union that contains structures for all event types
*/
void SDL_KEYDOWN_FUNC(SDL_Event event)
{
	switch (event.key.keysym.sym)
    {
        case SDLK_ESCAPE:
            GameRunning = false;
            break;
        case SDLK_UP:
        case SDLK_w:
            player.walkDirection = +1;
            break;
        case SDLK_DOWN:
        case SDLK_s:
            player.walkDirection = -1;
            break;
        case SDLK_RIGHT:
        case SDLK_d:
            player.turnDirection = +1;
            break;
        case SDLK_LEFT:
        case SDLK_a:
            player.turnDirection = -1;
            break;
        default:
            break;
    }
}

/**
 * SDL_KEYUP_FUNC - process input when a key is up
 * @event: union that contains structures for all event types
*/
void SDL_KEYUP_FUNC(SDL_Event event)
{
	switch (event.key.keysym.sym)
    {
        case SDLK_UP:
        case SDLK_DOWN:
        case SDLK_w:
        case SDLK_s:
            player.walkDirection = 0;
            break;
        case SDLK_RIGHT:
        case SDLK_LEFT:
        case SDLK_a:
        case SDLK_d:
            player.turnDirection = 0;
            break;
        default:
            break;
    }
}

/**
 * handleUserInput - function processes input from the keyboard event
 *
*/
void handleUserInput(void)
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                GameRunning = false;
                break;
            case SDL_KEYDOWN:
                SDL_KEYDOWN_FUNC(event);
                break;
            case SDL_KEYUP:
                SDL_KEYUP_FUNC(event);
                break;
            default:
                break;
        }
    }
}