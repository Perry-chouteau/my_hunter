/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init
*/

#include "includes/hunter.h"
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stddef.h>

void to_destruct(game_t to_destruct)
{
    sfTexture_destroy(to_destruct.txr.bgt);
    sfTexture_destroy(to_destruct.txr.trt);
    sfTexture_destroy(to_destruct.txr.crt);
    sfTexture_destroy(to_destruct.txr.m16t);
    sfSprite_destroy(to_destruct.sprt.bgs);
    sfSprite_destroy(to_destruct.sprt.trs);
    sfSprite_destroy(to_destruct.sprt.crs);
    sfSprite_destroy(to_destruct.sprt.m16s);
    sfRenderWindow_destroy(to_destruct.window);
    sfMusic_destroy(to_destruct.wrfc);
    return ;
}