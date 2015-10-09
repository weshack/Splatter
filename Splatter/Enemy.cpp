//
//  Enemy.cpp
//  Splatter
//
//  Created by Jacob Lashner on 10/9/15.
//  Copyright © 2015 WesHack. All rights reserved.
//

#include "Enemy.hpp"

void Enemy::HandleEvents(Engine *game, SDL_Event event){}

void Enemy::Init(Engine *game){
    x = 50, y = 50;
    vx = 3;
    vy = 0;
    maxvel = 50;
    ai = Chase;
}

void Enemy::Update(Engine* game){
    int leadAmount = 3;
    

    x += vx * game->getDelta();
    y += vy * game->getDelta();
    
    switch(ai){
        case Chase:
            double tx = target->x + (game->getDelta() * leadAmount) * target->vx;
            double ty = target->y + (game->getDelta() * leadAmount) * target->vy;
            
            double theta = atan2f(tx, ty);
            
            
            
            break;
            
    }

}

void Enemy::Draw(Engine *game){
    SDL_Rect rect = {(int)x,(int)y,20,20};
    
    SDL_SetRenderDrawColor(game->renderer, 0, 0, 255, 255);
    SDL_RenderFillRect(game->renderer, &rect);
}

