//
// Created by jean on 31/05/22.
//

#ifndef CLIINVADERS_SCREEN_H
#define CLIINVADERS_SCREEN_H

#include "Player.h"

class Screen{
private:
    int m_width;
    int m_height;
    //frame counter is incremented when the screen is updated
    int m_currentFrame;

public:
    Screen(int width, int height);

    void setWidth(int width);
    int width();

    void setHeight(int height);
    int height();

    int currentFrame();

    void updateScreen(Player player);
};



#endif //CLIINVADERS_SCREEN_H
