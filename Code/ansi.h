#ifndef _ansi_h_
#define _ansi_h_

#define ESC 0x1B

#define UP		'A'
#define DOWN	'B'
#define FORWARD	'C'
#define BACK	'D'

// Public
void fgcolor(unsigned char foreground);
void bgcolor(unsigned char background);
void color(unsigned char foreground, unsigned char background);
void resetbgcolor();
void clrscr();
void clreol();
void gotoxy(unsigned char x, unsigned char y);
void underline(char on);
void blink(char on);
void reverse(char on);
unsigned char strlen(char* string);
void drawTopBot(unsigned char x, unsigned char y, unsigned char width, unsigned char left, unsigned char right, unsigned char side);
void drawSides(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2, unsigned char side);
void saveCursor();
void getSavedCursor();
void moveCursor(char dir, unsigned char n);

// Private
void graphicCommand(char command);

#endif