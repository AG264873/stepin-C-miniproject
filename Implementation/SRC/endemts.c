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
/*
const char SNAKE_HEAD = '@';
const char SNAKE_BODY = '*';
const char WALL = '|';
const char CEIL = '-';
const char FOOD = 'X';
const char BLANK = ' ';*/

//This should be the same on both operating systems
#define EXIT_BUTTON 27 //ESC
#define PAUSE_BUTTON 112 //P

char waitForAnyKey(void)
{
int pressed;

while(!kbhit());

pressed = getch();
return((char)pressed);
}


