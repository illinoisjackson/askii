#ifndef _CONFIG_H
#define _CONFIG_H

// sprites
#define CHAR_PLAYER_LEFT '/'
#define CHAR_PLAYER_DOWN '|'
#define CHAR_PLAYER_RIGHT '\\'
#define CHAR_PLAYER_GAMEOVER 'X'
#define CHAR_TREE 'A'

// colours
#define COLOUR_PLAYER_ID 1
#define COLOUR_PLAYER COLOR_BLUE
#define COLOUR_TREE_ID 2
#define COLOUR_TREE COLOR_GREEN
#define COLOUR_SCORE_ID 3
#define COLOUR_SCORE_FG COLOR_WHITE
#define COLOUR_SCORE_BG COLOR_RED
#define COLOUR_WINDOW_ID 4
#define COLOUR_WINDOW_FG COLOR_WHITE
#define COLOUR_WINDOW_BG COLOR_RED

// limits
#define SPAWN_INTERVAL 4
#define SPEED_INIT 10
#define SPEED_MAX 70
#define SPEED_INTERVAL 100
#define SPEED_INCREASE 2

// keys
#define KEY_QUIT 'q'
#define KEY_PAUSE 'p'
#define _KEY_LEFT KEY_LEFT
#define _KEY_DOWN KEY_DOWN
#define _KEY_RIGHT KEY_RIGHT

// geometry
#define WIN_GAMEOVER_W 15
#define WIN_GAMEOVER_H 5
#define WIN_GAMEOVER_X ((termw / 2) - (WIN_GAMEOVER_W / 2))
#define WIN_GAMEOVER_Y ((termh / 2) - (WIN_GAMEOVER_H / 2))

// text
#define GAMEOVER_TEXT_1 "OUCH!"
#define GAMEOVER_TEXT_2 "YOU MADE IT"

#endif
