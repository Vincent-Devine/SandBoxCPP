#include "Enemy.h"

Enemy::Enemy(int id): id(id)
{
    printf("Enemy %d created (this=%p)\n", id, this);
}

Enemy::Enemy(const Enemy& copy)
{
    this->id = copy.id;
    this->spriteId = copy.spriteId;
    printf("Enemy %d created from copy (ctor) (copy=%p, this=%p)\n", id, &copy, this);
}

Enemy::~Enemy()
{
    printf("Enemy %d destroyed (this=%p)\n", id, this);
}

Enemy& Enemy::operator=(const Enemy& copy)
{
    this->id = copy.id;
    this->spriteId = copy.spriteId;
    printf("Enemy %d created from copy (operator=) (copy=%p, this=%p)\n", id, &copy, this);
    return *this;
}

void Enemy::Draw()
{
    printf("Enemy %d displayed (%p)\n", id, this);
}