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

//Linux Functions - These functions emulate some functions from the windows only conio header file
void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}


int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
}

char getch()
{
    char c;
    system("stty raw");
    c= getchar();
    system("stty sane");
    return(c);
}

void clrscr()
{
    system("clear");
    return;
}
//End linux Functions
