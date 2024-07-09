#pragma once
void clrscr();
void setColor(int textColor, int backgroundColor);
void gotoxy(int x, int y);
int getConsoleWidth();
void printCentered(const std::string& text, int y);
void printLeft(const std::string& text, int y);