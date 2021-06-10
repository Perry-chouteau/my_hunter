/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-perry.chouteau
** File description:
** window.c
*/

#include "includes/hunter.h"

void describe(void)
{
    write(1, "DESCRIPTION\n", 12);
    write(1, "my hunter:\nclick on the target", 30);
    return ;
}

game_t set_all(game_t hunter, sfEvent event)
{
    hunter.sprt = mk_sprite(hunter.txr, hunter.sprt);
    mk_music(hunter.wrfc);
    image_position(hunter.sprt, hunter.xy);
    return hunter;
}

int main(void)
{
    game_t hunter = init();
    sfEvent event;

    hunter = init2();
    set_all(hunter, event);
    while (sfRenderWindow_isOpen(hunter.window)) {
        while (sfRenderWindow_pollEvent(hunter.window, &event))
            hunter = check_event(event, hunter);
        hunter = change_pos(hunter);
        draw_image(hunter.window, hunter);
        sfRenderWindow_display(hunter.window);
        sfRenderWindow_clear(hunter.window, sfBlack);
    }
    to_destruct(hunter);
    return 0;
}