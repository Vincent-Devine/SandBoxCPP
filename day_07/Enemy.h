#pragma once

#include <iostream>

class Enemy
{
    private:
        int id = 0;
        int spriteId = 10;

    public:
        Enemy(int id = 0);
        Enemy(const Enemy& copy);
        ~Enemy();

        Enemy& operator=(const Enemy& copy);

        void Draw();
};