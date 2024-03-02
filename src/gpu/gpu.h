#pragma once
#define GPU_H

#include "../orbit.h"

#ifdef _WIN32
#define SDL_MAIN_HANDLED
#endif

#include <SDL2/SDL.h>


void *gpuThread(void* argvp);

void gpu_init();