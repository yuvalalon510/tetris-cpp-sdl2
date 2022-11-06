#pragma once
#include "defines.hpp"

namespace Graphics {
    bool init();
    void cleanup();
    void preRender();
    void drawBlock(int shape, int x, int y);
    void updateScore(int score);
    void renderScore();
    void present();
}