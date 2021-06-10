/*
** EPITECH PROJECT, 2020
** windows
** File description:
** windows
*/

#include "includes/hunter.h"
#include <stdio.h>

sfRenderWindow *create_Window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1502, 844, 32};

    window = sfRenderWindow_create(video_mode, "Aim_bot", sfDefaultStyle, NULL);
    return (window);
}

game_t check_event(sfEvent event, game_t my_struct)
{
    my_struct = check_event2(event, my_struct);
    my_struct = check_event3(event, my_struct);
    return my_struct;
}

spr_t mk_sprite(txr_t txr, spr_t sprt)
{
    sfSprite_setTexture(sprt.bgs, txr.bgt, sfTrue);
    sfSprite_setTexture(sprt.trs, txr.trt, sfTrue);
    sfSprite_setTexture(sprt.crs, txr.crt, sfTrue);
    sfSprite_setTexture(sprt.m16s, txr.m16t, sfTrue);
    return sprt;
}

void mk_music(sfMusic *wrfc)
{
    sfMusic_setLoop(wrfc, sfTrue);
    sfMusic_play(wrfc);
}
