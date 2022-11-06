# tetris-cpp-sdl2

My Tetris clone in C++ with SDL2.

![Screenshot](tetris.png)

# Dependencies
  * SDL2
  * SDL2_image
  * SDL2_ttf
 
# Installation (on Linux)
  * Install dependencies
  * Download the source code
  * Compile:
  ```
  g++ *.cpp -lSDL2 -lSDL2_image -lSDL2_ttf -o tetris
  ```
  * Run:
  ```
   ./tetris
  ```
  
# Controls
  * [Left-Arrow]/[Right-Arrow] - Move piece left/right
  * [A]/[D] - Rotate piece anti-clockwise/clockwise
  * [Down-Arrow] - Move piece one row down
  * [Space] - Drop piece
