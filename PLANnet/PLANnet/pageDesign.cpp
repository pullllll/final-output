#include <iostream>
#include <windows.h>
#include "pageDesign.h"

using namespace std;

void clrscr() {
    system("cls");
}

void setColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

void gotoxy(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(hConsole, position);
}

int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    return 80; // Default width if unable to get console info
}

void printCentered(const std::string& text, int y) {
    int consoleWidth = getConsoleWidth();
    int textLength = text.length();
    int x = (consoleWidth - textLength) / 2;
    gotoxy(x, y);
    std::cout << text;
}

void printLeft(const std::string& text, int y) {
    int consoleWidth = getConsoleWidth();
    int textLength = text.length();
    int x = ((consoleWidth - textLength) / 2) - 5;
    gotoxy(x, y);
    std::cout << text;
}

