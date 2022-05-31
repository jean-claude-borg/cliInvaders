#include "Screen.h"
#include <iostream>

Screen::Screen(int width, int height) {
    m_width = width;
    m_height = height;
    m_currentFrame = 0;
}

void Screen::setWidth(int width) {
    m_width = width;
}

void Screen::setHeight(int height) {
    m_height = height;
}

int Screen::width() {
    return m_width;
}

int Screen::height() {
    return m_height;
}

int Screen::currentFrame() {
    return m_currentFrame;
}

void Screen::updateScreen(Player player) {

    system("clear");
    for (int row = 0; row < m_height; row++)
    {
        for(int column = 0; column < m_width; column++)
        {
            if(column >= player.x() && column < player.x() + player.width()
               && row >= player.y() && row < player.y() + player.height())
            {
                std::cout << "/";
            }
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    m_currentFrame++;
}