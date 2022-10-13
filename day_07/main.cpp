#include "Enemy.h"
#include "My_vector.h"

int main()
{
    // push_back()
    printf("PUSH_BACK\n======\n");
    {
        My_vector<Enemy> enemies;

        enemies.push_back({1});
        enemies.push_back({2});
        enemies.push_back({3});
        enemies.push_back({4});
    }
    printf("======\n");
    
    return 0;
}
