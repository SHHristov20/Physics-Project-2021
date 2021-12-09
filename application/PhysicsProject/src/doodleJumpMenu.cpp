#include <iostream>
#include "doodleJumpMenu.h"
#include "front-end.h"
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
void printStatus()
{
    //First Line
    std::cout << char(218);
    for (int i = 0; i < 25; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(191) << std::endl;

    //Second Line
    std::cout << char(179) << "  " << char(201);
    for (int i = 0; i < 19; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(187) << "  " << char(179) << char(177) << std::endl;

    //Third Line  <-- Score
    for (int i = 0; i < 4; i++)
    {
        std::cout << char(179) << "  " << char(186);
        std::cout << "                   ";
        std::cout << char(186) << "  " << char(179) << char(177) << std::endl;
    }

    //Forth Line
    std::cout << char(179) << "  " << char(200) << char(203);
    for (int i = 0; i < 18; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(188) << "  " << char(179) << char(177) << std::endl;

    //Fifth Line
    std::cout << char(198) << char(209) << char(205) << char(205) << char(202);
    for (int i = 0; i < 18; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(205) << char(205) << char(209) << char(181) << char(177) << std::endl;

    //Sixth Line <-- Game Status
    std::cout << char(179) << char(179) << "  " << char(179) << char(179) << char(177) << std::endl;

    //Seventh Line
    std::cout << char(179) << char(192);
    for (int i = 0; i < 23; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(217) << char(179) << char(177) << std::endl;

    //Eighth Line
    std::cout << char(192);
    for (int i = 0; i < 25; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(217) << char(177) << std::endl;

    //Nineth Line
    for (int i = 0; i < 28; i++)
    {
        std::cout << char(177);
    }
}
void printScore()
{
    //First Line
    std::cout << char(218);
    for (int i = 0; i < 25; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(191) << std::endl;

    //Second Line
    std::cout << char(179) << "  " << char(201);
    for (int i = 0; i < 19; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(187) << "  " << char(179) << char(177) << std::endl;

    //Third Line  <-- Score
    std::cout << char(179) << "  " << char(186);
    std::cout << "                   ";
    std::cout << char(186) << "  " << char(179) << char(177) << std::endl;

    //Forth Line
    std::cout << char(179) << "  " << char(200) << char(203);
    for (int i = 0; i < 18; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(188) << "  " << char(179) << char(177) << std::endl;

    //Fifth Line
    std::cout << char(198) << char(209) << char(205) << char(205) << char(202);
    for (int i = 0; i < 18; i++)
    {
        std::cout << char(205);
    }
    std::cout << char(205) << char(205) << char(209) << char(181) << char(177) << std::endl;

    //Sixth Line <-- Game Status
    std::cout << char(179) << char(179) << " Status: In game       " << char(179) << char(179) << char(177) << std::endl;

    //Seventh Line
    std::cout << char(179) << char(192);
    for (int i = 0; i < 23; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(217) << char(179) << char(177) << std::endl;

    //Eighth Line
    std::cout << char(192);
    for (int i = 0; i < 25; i++)
    {
        std::cout << char(196);
    }
    std::cout << char(217) << char(177) << std::endl;

    //Nineth Line
    for (int i = 0; i < 28; i++)
    {
        std::cout << char(177);
    }
}
void controls(bool one, bool two) {
    system("cls");
    printStatus();
    gotoXY(4, 2);
    std::cout << "|-> RIGHT|";

    gotoXY(4, 3);
    std::cout << "|<- LEFT|";

    gotoXY(2, 8);
    std::cout << "Status: In controls";

    gotoXY(25, 8);
    std::cout << char(179) << char(179) << char(177);
    if (one)
    {
        gotoXY(4, 4);

        std::cout << "-> Back";

        gotoXY(4, 5);

        std::cout << "Exit";
    }

    if (two)
    {
        gotoXY(4, 4);

        std::cout << "Back";

        gotoXY(4, 5);

        std::cout << "-> Exit";
    }

    const char option = _getch();

    if (option == 's' or option == 'S' or option == 'w' or option == 'W')
    {
        if (one)
        {
            controls(false, true);
        }
        if (two)
        {
            controls(true, false);
        }
    }

    if (option == 13)
    {
        if (one)
        {
            system("cls");
            homeMenu(true, false, false);
        }
        if (two)
        {
            gotoXY(1, 20);
            exit(1);
        }
    }
}
void DMenu(bool one, bool two, bool three, bool four)
{
    printStatus();
    if (one)
    {
        system("cls");
        printStatus();
        gotoXY(4, 2);
        std::cout << "-> Start";

        gotoXY(4, 3);
        std::cout << "Controls";

        gotoXY(4, 4);

        std::cout << "Back";

        gotoXY(4, 5);

        std::cout << "Exit";

        gotoXY(2, 8);

        std::cout << "Status: In Menus";

        gotoXY(25, 8);
        std::cout << char(179) << char(179) << char(177);
    }
    if (two)
    {
        system("cls");
        printStatus();
        gotoXY(4, 2);
        std::cout << "Start";

        gotoXY(4, 3);
        std::cout << "-> Controls";

        gotoXY(4, 4);

        std::cout << "Back";

        gotoXY(4, 5);

        std::cout << "Exit";

        gotoXY(2, 8);

        std::cout << "Status: In Menus";

        gotoXY(25, 8);
        std::cout << char(179) << char(179) << char(177);
    }
    if (three)
    {
        system("cls");
        printStatus();
        gotoXY(4, 2);
        std::cout << "Start";

        gotoXY(4, 3);
        std::cout << "Controls";

        gotoXY(4, 4);

        std::cout << "-> Back";

        gotoXY(4, 5);

        std::cout << "Exit";

        gotoXY(2, 8);

        std::cout << "Status: In Menus";

        gotoXY(25, 8);
        std::cout << char(179) << char(179) << char(177);
    }
    if (four)
    {
        system("cls");
        printStatus();
        gotoXY(4, 2);
        std::cout << "Start";

        gotoXY(4, 3);
        std::cout << "Controls";

        gotoXY(4, 4);

        std::cout << "Back";

        gotoXY(4, 5);

        std::cout << "-> Exit";

        gotoXY(2, 8);

        std::cout << "Status: In Menus";

        gotoXY(25, 8);
        std::cout << char(179) << char(179) << char(177);
    }
    const char option = _getch();

    if (option == 's' or option == 'S')
    {
        if (one)
        {
            system("cls");
            DMenu(false, true, false, false);
        }
        if (two)
        {
            system("cls");
            DMenu(false, false, true, false);
        }
        if (three)
        {
            system("cls");
            DMenu(false, false, false, true);
        }
        if (four)
        {
            system("cls");
            DMenu(true, false, false, false);
        }
    }

    if (option == 'w' or option == 'W')
    {
        if (one)
        {
            system("cls");
            DMenu(false, false, false, true);
        }
        if (two)
        {
            system("cls");
            DMenu(true, false, false, false);
        }
        if (three)
        {
            system("cls");
            DMenu(false, true, false, false);
        }
        if (four)
        {
            system("cls");
            DMenu(false, false, true, false);
        }
    }

    if (option == 13)
    {
        if (one)
        {
            system("cls");
            printScore();
            startGame2();
        }
        if (two)
        {
            system("cls");
            controls(true, false);
        }
        if (three)
        {
            system("cls");
            homeMenu(true, false, false);
        }
        if (four)
        {
            gotoXY(1, 20);
            exit(1);
        }
    }
}

void startMenu() {
    DMenu(true, false, false, false);
}