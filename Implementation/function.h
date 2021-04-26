#include<stdbool.h>



#ifndef __FUNCTION_H__
#define ___FUNCTION_H__
#define SNAKE_ARRAY_SIZE 310

/*******************************************FUNCTION PROTOTYPE**********************************************************/
//function prototypes to be used

/**
 * @brief Some functions carried out are void 
 * @brief all variables are global
 * 
 */

void gotoxy(int x,int y);							

/**
 * @brief Use to co-ordinates x and y
 * 
 */
int kbhit(void);							

/**
 * @brief Use to kbhit
 * 
 */
char getch();	

/**
 * @brief use to hold the screen
 * 
 */
void clrscr();

/**
 * @brief use to clear screen
 * 
 */
char waitForAnyKey(void);	

/**
 * @brief use for waiting
 * 
 */
int checkKeysPressed(int direction);						


/**
 * @brief function checks if a key has pressed, then checks if its any of the arrow keys/ p/esc key. It changes direction acording to the key pressed.
 *
 */
int collisionSnake (int x, int y, int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength, int detect);							
/**
 * @brief Cycles around checking if the x y coordinates ='s the snake coordinates as one of this parts
 * @brief One thing to note, a snake of length 4 cannot collide with itself, therefore there is no need to call this function when the snakes length is <= 4
 * 
 */
int generateFood(int foodXY[], int width, int height, int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength);

/**
 * @brief Checks if the snake collided with itself
 * 
 */
void moveSnakeArray(int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength, int direction);


/**
 * @brief Generates food & Makes sure the food doesn't appear on top of the snake <- This sometimes causes a lag issue!!! Not too much of a problem tho
 * 
 */
void move(int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength, int direction);


/**
 * @brief because we don't actually know the new snakes head x y,
 * @brief we have to check the direction and add or take from it depending on the direction.
 */
int eatFood(int snakeXY[][SNAKE_ARRAY_SIZE], int foodXY[]);

/**
 * @brief get food
 *
 */

int collisionDetection(int snakeXY[][SNAKE_ARRAY_SIZE], int consoleWidth, int consoleHeight, int snakeLength );

/**
 * @brief Need to Clean this up a bit
 * @brief Checks if the snake collided wit the wall or it's self 
 * @brief If the snake collided with the wall, there's no point in checking if it collided with itself.
 *
 */

void refreshInfoBar(int score, int speed);


/**
 * @brief refereshing the Information Bar
 *
 */



void gameOverScreen(void);

/**
 * @brief Game over screen
 *
 */


void startGame( int snakeXY[][SNAKE_ARRAY_SIZE], int foodXY[], int consoleWidth, int consoleHeight, int snakeLength, int direction, int score, int speed);

/**
 * @brief  starting the game
 *
 */


void loadEnviroment(int consoleWidth, int consoleHeight);

/**
 * @brief loading the Enviromnet
 *
 */



void loadSnake(int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength);

/**
 * @brief loading length
 *
 */


void prepairSnakeArray(int snakeXY[][SNAKE_ARRAY_SIZE], int snakeLength);

/**
 * @brief Enviromnet setting 
 *
 */


void loadGame(void);


/**
 * @brief Two Dimensional Array, the first array is for the X coordinates and the second array for the Y coordinates
 * @brief DO NOT CHANGE THIS TO RIGHT ARROW, THE GAME WILL INSTANTLY BE OVER IF YOU DO!!! <- Unless the prepareSnakeArray function is changed to take into account the direction....
 * @brief Stores the location of the food
 * @brief Window Width * Height - at some point find a way to get the actual dimensions of the console... <- Also somethings that display don't take this dimensions into account.. need to fix this...
 *
 */

#endif
