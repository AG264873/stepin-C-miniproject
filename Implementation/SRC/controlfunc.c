#include "../function.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define SNAKE_ARRAY_SIZE 310

//Linux Libraries
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

//Linux Constants
//Controls (arrow keys for Manjaro)
#define UP_ARROW  'A'
#define LEFT_ARROW  'D'
#define RIGHT_ARROW  'C'
#define DOWN_ARROW 'B'
#define ENTER_KEY 10

/*const char SNAKE_HEAD = '@';
const char SNAKE_BODY = '*';
const char WALL = '|';
const char CEIL = '-';
const char FOOD = 'X';
const char BLANK = ' ';*/

//This function checks if a key has pressed, then checks if its any of the arrow keys/ p/esc key. It changes direction acording to the key pressed.
int checkKeysPressed(int direction)
{
int pressed;

if(kbhit()) //If a key has been pressed
{
    pressed=getch();
    if (direction != pressed)
    {
        if(pressed == DOWN_ARROW && direction != UP_ARROW)
            direction = pressed;
        else if (pressed == UP_ARROW && direction != DOWN_ARROW)
            direction = pressed;
        else if (pressed == LEFT_ARROW && direction != RIGHT_ARROW)
            direction = pressed;
        else if (pressed == RIGHT_ARROW && direction != LEFT_ARROW)
            direction = pressed;
    }
}
return(direction);
}
