#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>
#include <sstream>
#include "login.h"
#include "pageDesign.h"
using namespace std;


bool checkCredentials(const std::string& username, const std::string& password) {
    std::ifstream file("accounts.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open credentials file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        size_t delimiterPos = line.find(':');
        if (delimiterPos != std::string::npos) {
            std::string fileUsername = line.substr(0, delimiterPos);
            std::string filePassword = line.substr(delimiterPos + 1);

            if (fileUsername == username && filePassword == password) {
                return true;
            }
        }
    }

    return false;
}

bool login() {
    string username, password = "";
    char ch;
    clrscr();
    setColor(15, 2);
    printCentered("                                              ", 1);
    printCentered("                    LOGIN                     ", 2);
    printCentered("                                              ", 3);
    setColor(0, 7);
    printCentered("                                              ", 4);
    printCentered("          USERNAME:                           ", 5);
    printCentered("          PASSWORD:                           ", 6);
    printCentered("                                              ", 7);
    setColor(15, 2);
    printCentered("                                              ", 8);
    printCentered("                                              ", 9);
    printCentered("                                              ", 10);
    setColor(0, 7);
    gotoxy(57, 5);
    cin >> username;
    gotoxy(57, 6);
    while (true) {
        ch = _getch();
        if (ch == 13) break; // Enter key pressed
        if (ch == 8) { // Backspace key pressed
            if (password.length() > 0) {
                password.pop_back();
                cout << "\b \b"; // Erase the last star
            }
        }
        else {
            password.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;
   
    setColor(7, 0);

    if (checkCredentials(username, password) == true) {
        setColor(15, 2);
        printCentered("LOGIN SUCCESSFUL!", 9);
        setColor(7, 0);
        (void)_getch();
        return true;
     
    }
    else {
        return false;
    }
}

void registerUser() {
    string username, password = "";
    char ch;
    clrscr();
    setColor(15, 2);
    printCentered("                                              ", 1);
    printCentered("                   REGISTER                   ", 2);
    printCentered("                                              ", 3);
    setColor(0, 7);
    printCentered("                                              ", 4);
    printCentered("          USERNAME:                           ", 5);
    printCentered("          PASSWORD:                           ", 6);
    printCentered("                                              ", 7);
    setColor(15, 2);
    printCentered("                                              ", 8);
    printCentered("                                              ", 9);
    printCentered("                                              ", 10);
    setColor(0, 7);
    gotoxy(57, 5);
    cin >> username;
    gotoxy(57, 6);
    while (true) {
        ch = _getch();
        if (ch == 13) break; // Enter key pressed
        if (ch == 8) { // Backspace key pressed
            if (password.length() > 0) {
                password.pop_back();
                cout << "\b \b"; // Erase the last star
            }
        }
        else {
            password.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;

    setColor(7, 0);

    std::ofstream file("accounts.txt", std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Failed to open credentials file for writing." << std::endl;
        return;
    }

    file << username << ":" << password << std::endl;
    file.close();

    printCentered("REGISTRATION SUCCESSFUL! PROCEED TO LOGIN...", 9);
    (void)_getch();
}