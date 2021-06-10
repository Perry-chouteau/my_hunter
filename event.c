/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-perry.chouteau
** File description:
** event.c
*/

#include "includes/hunter.h"
#include <stdio.h>

void move_rect(sfIntRect *rect, nb_t nb)
{
    rect->left = rect->left + nb.offset;
    if (rect->left >= nb.mx_v)
        rect->left = 0;
}

void move_rect2(sfIntRect *rect, int offset, int max_value)
{
        rect->left = 0;
}

game_t check_event2(sfEvent event, game_t my_struct)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(my_struct.window);
    if (event.type == sfEvtMouseMoved) {
        my_struct.xy.crxy.x = event.mouseMove.x -25;
        my_struct.xy.crxy.y = event.mouseMove.y - 25;
        sfSprite_setPosition(my_struct.sprt.crs, my_struct.xy.crxy);
    }
    return my_struct;
}

game_t check_event3(sfEvent event, game_t my_struct)
{
    if (event.type == sfEvtMouseButtonPressed) {
        my_struct.mouse.x = event.mouseButton.x;
        my_struct.mouse.y = event.mouseButton.y;
        my_struct.nb.count_glob += 1;
        move_rect(&my_struct.nb.rect, my_struct.nb);
        if (my_struct.mouse.x >= my_struct.xy.trxy.x + 67   \
        && my_struct.mouse.x <= my_struct.xy.trxy.x + 134   \
        && my_struct.mouse.y >= my_struct.xy.trxy.y &&  \
        my_struct.mouse.y <= my_struct.xy.trxy.y + 80) {
            my_struct.nb.count += 1;
            my_struct.xy.trxy.x = (rand() % 1480 + 20);
            my_struct.nb.b = rand() % 2;
        }
    }
    if (event.type == sfEvtMouseButtonReleased)
        move_rect2(&my_struct.nb.rect, my_struct.nb.offset, my_struct.nb.mx_v);
    return my_struct;
}