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

game_t init(void)
{
    game_t aretourner;

    aretourner.window = create_Window();
    sfRenderWindow_setFramerateLimit(aretourner.window, 32);
    aretourner.wrfc = sfMusic_createFromFile("music/wrfc.ogg");
    aretourner.nb.count = 0;
    aretourner.nb.count_glob = 0;
    aretourner.xy.bgxy.x = 0;
    aretourner.xy.bgxy.y = 0;
    aretourner.txr.bgt = sfTexture_createFromFile("image/bg.png", NULL);
    aretourner.sprt.bgs = sfSprite_create();
    aretourner.xy.trxy.x = 5;
    aretourner.xy.trxy.y = 225;
    aretourner.txr.trt = sfTexture_createFromFile("image/trg_2.png", NULL);
    aretourner.sprt.trs = sfSprite_create();
    aretourner.xy.crxy.x = 702;
    aretourner.xy.crxy.y = 422;
    aretourner.txr.crt = sfTexture_createFromFile("image/cr.png", NULL);
    aretourner.sprt.crs = sfSprite_create();
    return aretourner;
}

game_t init2(void)
{
    game_t aretourner2;

    aretourner2.xy.m16xy.x = 910;
    aretourner2.xy.m16xy.y = 420;
    aretourner2.txr.m16t = sfTexture_createFromFile("image/m16-1.png", NULL);
    aretourner2.sprt.m16s = sfSprite_create();
    sfRenderWindow_setMouseCursorVisible(aretourner2.window, sfFalse);
    aretourner2.nb.offset = 600;
    aretourner2.nb.mx_v = 1200;
    aretourner2.nb.rect.top = 0;
    aretourner2.nb.rect.left = 0;
    aretourner2.nb.rect.height = 427;
    aretourner2.nb.rect.width = 587;
    aretourner2.nb.b = 1;
    return aretourner2;
}