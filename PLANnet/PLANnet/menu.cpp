#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>
#include <sstream>
#include "login.h"
#include "pageDesign.h"
#include "menu.h"
using namespace std;

void home() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                                       HOME                                            ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("                                      VISION                                           ", 5);
    printCentered(" PLAN.net envisions a harmonious University where communities thrive alongside nature, ", 6);
    printCentered("         fostering resilience and sustainability for future generations.               ", 7);
    printCentered("                                                                                       ", 8);
    printCentered("                                                                                       ", 9);
    printCentered("                                     MISSION                                           ", 10);
    printCentered(" Our mission is to empower individuals and communities through accessible information  ", 11);
    printCentered("       and collaborative initiatives, driving meaningful action for environmental      ", 12);
    printCentered("                  conservation and a greener, more sustainable future.                 ", 13);
    printCentered("                                                                                       ", 14);
    setColor(15, 2);
    printCentered("                                                                                       ", 15);
    printCentered("                           PRESS ANY KEY TO RETURN TO MENU!                            ", 16);
    printCentered("                                                                                       ", 17);
    setColor(7, 0);
}

void event1() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                             Environmental Awareness Week                              ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("              Date: August 14-20, 2024                                                 ", 5);
    printCentered("              Description:                                                             ", 6);
    printCentered("              A week-long series of activities including seminars, workshops, and      ", 7);
    printCentered("              exhibits focused on raising awareness about environmental issues         ", 8);
    printCentered("              and promoting sustainable practices.                                     ", 9);
    printCentered("                                                                                       ", 10);
    printCentered("              Day 1: Opening Ceremony and Keynote Speech on Climate Change             ", 11);
    printCentered("              Day 2: Workshop on Sustainable Living Practices                          ", 12);
    printCentered("              Day 3: Tree Planting Activity at the PUP-T Campus                        ", 13);
    printCentered("              Day 4: Seminar on Waste Management and Recycling                         ", 14);
    printCentered("              Day 5:  Environmental Film Screening and Discussion                      ", 15);
    printCentered("              Day 6: Clean-up Drive at Local Beaches and Parks                         ", 16);
    printCentered("              Day 7: Closing Ceremony and Awarding of Eco-friendly Initiatives         ", 17);
    printCentered("                                                                                       ", 18);
    setColor(15, 2);
    printCentered("                                                                                       ", 19);
    printCentered("                               PRESS ANY KEY TO GO BACK!                               ", 20);
    printCentered("                                                                                       ", 21);
    setColor(7, 0);
}

void event2() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                              Green Innovation Challenge                               ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("              Date: September 15-17, 2024                                              ", 5);
    printCentered("              Description:                                                             ", 6);
    printCentered("              A competition where students and local community members can present     ", 7);
    printCentered("              their innovative solutions to environmental problems.                    ", 8);
    printCentered("                                                                                       ", 9);
    printCentered("              Day 1: Presentation of Projects and Prototypes                           ", 10);
    printCentered("              Day 2: Workshop on Developing Green Technologies                         ", 11);
    printCentered("              Day 3: Judging and Awarding Ceremony                                     ", 12);
    printCentered("                                                                                       ", 13);
    setColor(15, 2);
    printCentered("                                                                                       ", 14);
    printCentered("                               PRESS ANY KEY TO GO BACK!                               ", 15);
    printCentered("                                                                                       ", 16);
    setColor(7, 0);
}

void bataller() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                                CHRISTIAN R. BATALLER                                  ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("                                      DEVELOPER                                        ", 5);
    printCentered("                     Age: 20 years old                                                 ", 6);
    printCentered("                     Email address: christianbataller788@gmail.com                     ", 7);
    printCentered("                                                                                       ", 8);
    setColor(15, 2);
    printCentered("                                                                                       ", 9);
    printCentered("                                PRESS ANY KEY TO GO BACK!                              ", 10);
    printCentered("                                                                                       ", 11);
    setColor(7, 0);
}

void gonot() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                                 JEDI DUNCAN S. GONOT                                  ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("                                      DEVELOPER                                        ", 5);
    printCentered("                     Age: 19 years old                                                 ", 6);
    printCentered("                     Email address: jediduncan4@gmail.com                              ", 7);
    printCentered("                                                                                       ", 8);
    setColor(15, 2);
    printCentered("                                                                                       ", 9);
    printCentered("                                PRESS ANY KEY TO GO BACK!                              ", 10);
    printCentered("                                                                                       ", 11);
    setColor(7, 0);
}

void reduta() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                               PAUL BENIDICT L. REDUTA                                 ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("                                      DEVELOPER                                        ", 5);
    printCentered("                     Age: 18 years old                                                 ", 6);
    printCentered("                     Email address: paulbenidictr@gmail.com                            ", 7);
    printCentered("                                                                                       ", 8);
    setColor(15, 2);
    printCentered("                                                                                       ", 9);
    printCentered("                                PRESS ANY KEY TO GO BACK!                              ", 10);
    printCentered("                                                                                       ", 11);
    setColor(7, 0);
}

void sario() {
    clrscr();
    setColor(15, 2);
    printCentered("                                                                                       ", 1);
    printCentered("                                   GERALD B. SARIO                                     ", 2);
    printCentered("                                                                                       ", 3);
    setColor(0, 7);
    printCentered("                                                                                       ", 4);
    printCentered("                                      DEVELOPER                                        ", 5);
    printCentered("                     Age: 19 years old                                                 ", 6);
    printCentered("                     Email address: sariogrld02@gmail.com                              ", 7);
    printCentered("                                                                                       ", 8);
    setColor(15, 2);
    printCentered("                                                                                       ", 9);
    printCentered("                                PRESS ANY KEY TO GO BACK!                              ", 10);
    printCentered("                                                                                       ", 11);
    setColor(7, 0);
}
