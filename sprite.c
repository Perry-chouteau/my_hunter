/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-perry.chouteau
** File description:
** sprite.c
*/

#include "includes/hunter.h"

void image_position(spr_t sprt, pos_t xy)
{
    sfSprite_setPosition(sprt.bgs, xy.bgxy);
    sfSprite_setPosition(sprt.trs, xy.trxy);
    sfSprite_setPosition(sprt.crs, xy.crxy);
    sfSprite_setPosition(sprt.m16s, xy.m16xy);
}

game_t change_pos(game_t trpos)
{
    if (trpos.nb.b == 1) {
        if (trpos.xy.trxy.x < 1300)
            trpos.xy.trxy.x += 10;
        else
            trpos.nb.b = 0;
    }
    else {
        if (trpos.xy.trxy.x > 5)
            trpos.xy.trxy.x -= 10;
        else
            trpos.nb.b = 1;
    }
    sfSprite_setPosition(trpos.sprt.trs, trpos.xy.trxy);
    return trpos;
}

void draw_image(sfRenderWindow *window, game_t hunter)
{
    sfRenderWindow_drawSprite(window, hunter.sprt.bgs, NULL);
    sfRenderWindow_drawSprite(window, hunter.sprt.trs, NULL);
    sfRenderWindow_drawSprite(window, hunter.sprt.crs, NULL);
    sfSprite_setTextureRect(hunter.sprt.m16s, hunter.nb.rect);
    sfRenderWindow_drawSprite(window, hunter.sprt.m16s, NULL);
}