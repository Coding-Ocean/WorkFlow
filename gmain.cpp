#include"framework.h"
#include"window.h"
#include"graphic.h"
#include"input.h"
void gmain() {
    initialize("Game", 1920, 1080, FULLSCREEN);
    int img = loadImage("dump.png");
    float x = 1920;
    float y = 1080 - 256;
    float vx = -10;
    while (msgProc()) {
        getInput();
        x += vx;
        if (x < -400) { x = 1920; }
        clearTarget(COLOR(0.25f,0.5f,1.0f));
        drawImage(img, x, y);
        present();
    }
}
