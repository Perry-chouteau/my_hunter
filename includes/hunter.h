/*
** EPITECH PROJECT, 2020
** hunter.h
** File description:
** hunter
*/

#ifndef HUNTER_H
#define HUNTER_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    sfVector2f bgxy;
    sfVector2f trxy;
    sfVector2f crxy;
    sfVector2f m16xy;
} pos_t;

typedef struct
{
    sfTexture *bgt;
    sfTexture *trt;
    sfTexture *crt;
    sfTexture *m16t;
} txr_t;

typedef struct
{
    sfSprite *bgs;
    sfSprite *trs;
    sfSprite *crs;
    sfSprite *m16s;
} spr_t;

typedef struct
{
    bool b;
    int count;
    int count_glob;
    sfIntRect rect;
    int offset;
    int mx_v;
} nb_t;

typedef struct
{
    sfRenderWindow *window;
    sfMusic *wrfc;
    sfEvent event;
    pos_t xy;
    txr_t txr;
    spr_t sprt;
    nb_t nb;
    sfMouseButtonEvent mouse;
} game_t;

void describe(void);
sfRenderWindow *create_Window(void);
spr_t mk_sprite(txr_t txr, spr_t sprt);
game_t check_event(sfEvent event, game_t h_pos);
game_t check_event2(sfEvent event, game_t my_struct);
game_t check_event3(sfEvent event, game_t my_struct);
void mk_music(sfMusic *wrfc);
game_t init(void);
game_t init2(void);
void to_destruct(game_t to_destruct);
void image_position(spr_t sprt, pos_t xy);
game_t change_pos(game_t );
void draw_image(sfRenderWindow *window, game_t hunter);
game_t set_all(game_t hunter, sfEvent event);

#endif