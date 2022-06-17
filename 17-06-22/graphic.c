// g++ 01_hello_SDL.cpp -w -lSDL2 -o 01_hello_SDL
#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <stdlib.h>

int init();
int loadMedia();
void close();

// VARIABLES GLOBALES
SDL_Window *gWindow = NULL;
SDL_Surface *gScreenSurface = NULL;
SDL_Surface *gHelloWorld = NULL;

int main() {
  if (!init()) {
    printf("Error al inicializar!\n");
  } else {
    if (!loadMedia()) {
      printf("Error al cargar datos!\n");
    } else {
      int quit = 0;
      SDL_Event e;
      while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
          if (e.type == SDL_QUIT) {
            quit = 1;
          }
        }
        SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

        SDL_UpdateWindowSurface(gWindow);
      }
    }
  }
  close();
  return 0;
}

int init() {
  int success = 1;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL no pudo inicializarse! SDL_Error: %s\n", SDL_GetError());
    success = 0;
  } else {
    gWindow =
        SDL_CreateWindow("Tutorial", SDL_WINDOWPOS_UNDEFINED,
                         SDL_WINDOWPOS_UNDEFINED, 640, 640, SDL_WINDOW_SHOWN);
    if (gWindow == NULL) {
      printf("No se pudo crear la ventana! SDL_Error: %s\n", SDL_GetError());
      success = 0;
    } else {
      gScreenSurface = SDL_GetWindowSurface(gWindow);
    }
  }
}

int loadMedia() {
  int success = 1;
  // gHelloWorld = SDL_LoadBMP("imagen");
  return success;
}

void close() {
  SDL_FreeSurface(gHelloWorld);
  gHelloWorld = NULL;

  SDL_DestroyWindow(gWindow);
  gWindow = NULL;

  SDL_Quit();
}
