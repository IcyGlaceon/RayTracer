#include <iostream>
#include "Renderer.h"

int main(int, char**)
{
    Renderer renderer; 
    renderer.Initialize(); 
    renderer.CreateWindow(400, 300);
    bool quit = false; 
    while (!quit) 
    { 
        SDL_Event event; 
        SDL_PollEvent(&event); 
        switch (event.type) 
        { 
        case SDL_QUIT:
            quit = true; 
            break; 
        } 
    }
    renderer.Shutdown(); 
    return 0;
}