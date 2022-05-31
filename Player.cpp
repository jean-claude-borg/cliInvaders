#include "Player.h"

Player::Player(int x, int y, int width, int height) {
    m_x = x;
    m_y = y;
    m_width = width;
    m_height = height;
    m_direction = RIGHT;
}

int Player::x() {
    return m_x;
}

int Player::y() {
    return m_y;
}

int Player::width() {
    return m_width;
}

int Player::height() {
    return m_height;
}

void Player::setX(int x) {
    m_x = x;
}

void Player::setY(int y) {
    m_y = y;
}

void Player::setWidth(int width) {
    m_width = width;
}

void Player::setHeight(int height){
    m_height = height;
}

void Player::update() {
    if(m_direction == LEFT)
        m_x--;
    else if(m_direction == RIGHT)
        m_x++;
}