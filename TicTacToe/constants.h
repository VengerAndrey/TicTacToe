#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <ctime>

using namespace std;

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

COORD grid = { 1, 4 };
COORD info = { 1, 0 };

const int FIELD_SIZE = 3;

const int cols = 39;
const int lines = 30;
short w = (cols - 2 - 4) / FIELD_SIZE;
short h = (lines - 1 - grid.Y) / FIELD_SIZE;

const bool player_turn = false;

const int IMAGE_HEIGHT = 7;
const int IMAGE_WIDTH = 13;

string X_IMAGE[IMAGE_HEIGHT] =       { "*           *" ,
							"  *       *  " ,
							"    *   *    " ,
							"      *      " ,
							"    *   *    " ,
							"  *       *  " ,
							"*           *" }; 
string O_IMAGE[IMAGE_HEIGHT] =       { " *********** " ,
							"*           *" ,
							"*           *" ,
							"*           *" ,
							"*           *" ,
							"*           *" ,
							" *********** " };
string EMPTY_IMAGE[IMAGE_HEIGHT] =   { "             " ,
							"             " ,
							"             " ,
							"             " ,
							"             " ,
							"             " ,
							"             " };

const int FIELD_HEIGHT = FIELD_SIZE * (IMAGE_HEIGHT + 1) + 1;
const int FIELD_WIDTH = FIELD_SIZE * (IMAGE_WIDTH + 1) + 1;

enum colors { FULL_WHITE = 255, WHITE = 7, RED = 12, BLUE = 9, GREEN = 10, YELLOW = 14, FULL_YELLOW = 238 };
enum scores { PLAYER_SCORE = -100, COMP_SCORE = 100, DRAW_SCORE = 0 };
enum signs { EMPTY_SIGN = -1, O_SIGN = 0, X_SIGN = 1, HINT = 2 };
enum states { PLAYER_WON = 1, COMP_WON = 2, DRAW_STATE = 3, NOT_END = 4 };
enum turns { PLAYER_TURN = true, COMP_TURN = false };
enum difficulties { EASY = 1, MID = 2, HARD = 3 };