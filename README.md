# The Maze

**The Maze** is an immersive 3D maze game utilizing ray casting technology to transform a 2D map into a fully navigable 3D world. Developed in C and leveraging the SDL2 library, the game offers a compelling graphical experience.

### About SDL2

Simple DirectMedia Layer (SDL2) is a cross-platform library designed to provide developers with low-level access to audio, keyboard, mouse, joystick, and graphics hardware through OpenGL and Direct3D. SDL2 is widely used in video playback software, emulators, and popular games, including those from Valve’s award-winning lineup and numerous Humble Bundle offerings.

## Prerequisites

- Ubuntu 24.04
- gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0

## Installation

Clone the repository using:

```sh
git clone https://github.com/Azubuikeleo13/The-Maze-Project.git
```

## Compilation

```sh
$ gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm -o maze `sdl2-config --cflags` `sdl2-config --libs`;
```

## Play the game

- Execute ./maze or type make run in the terminal.
- Navigate using the up and down arrow keys or 'w' and 's' for moving forward and backward.
- Turn the camera using the right and left arrow keys or 'd' and 'a'.

## Author

- **Hafeez Abdulmaleek**
  https://github.com/John-Maleek
  jmzoran01@gmail.com
