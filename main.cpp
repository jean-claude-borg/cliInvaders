#include <iostream>
#include "Screen.h"
#include "Player.h"
#include<cstring>
#include<cstdio>
#include <chrono>
#include<thread>

void playerInput(Player player);

int main() {
    system("clear");
    std::cout << "\e[?25l" << std::endl;

    Screen screen(150, 40);
    Player player(50, 10, 10, 2);

    std::thread thread_object(playerInput, player);
    auto previousTime = std::chrono::system_clock::now().time_since_epoch().count();

    while(true)
    {
        auto currentTime = std::chrono::system_clock::now().time_since_epoch().count();
        //time is in nanoseconds, so it is converted to seconds first
        //the following will update once per second
        if((currentTime/1000000000 - previousTime/1000000000) >= 1)
        {
            //playerInput(player);
            player.update();
            screen.updateScreen(player);
            previousTime = currentTime;
        }
    }
}

void playerInput(Player* player)
{
    player->m_direction = LEFT;
    while(true) {
        int input = getchar();
        if (input == 97) {
            player->m_direction = LEFT;
        } else if (input == 100) {
            player->m_direction = RIGHT;
        }
    }
}