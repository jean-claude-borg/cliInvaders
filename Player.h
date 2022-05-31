//
// Created by jean on 31/05/22.
//

#ifndef CLIINVADERS_PLAYER_H
#define CLIINVADERS_PLAYER_H
enum e_direction{LEFT,RIGHT,UP,DOWN};

class Player{
private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;

public:
    Player(int x, int y, int width, int height);

    e_direction m_direction;

    int x();
    int y();
    int width();
    int height();

    void setX(int x);
    void setY(int y);
    void setWidth(int width);
    void setHeight(int height);

    void update();
};

#endif //CLIINVADERS_PLAYER_H
