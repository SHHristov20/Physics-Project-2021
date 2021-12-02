#include <iostream>
#include "calculatorsMenu.h"
#include "front-end.h"
#include <conio.h>
#include <Windows.h>
#include "decreasingAccCalc.h"
#include "increasingAccCalc.h"
#include "freeFallCalc.h"
#include "workAndPowerCalc.h"
#include "hydrostaticPressureCalc.h"
#include "pressure.h"
#include "ArhimedsLaw.h"
#include "convertUnits.h"
void printTitle() {
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t\t\t   ____      _            _       _                 " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__/ __|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |__| (_| | | (__| |_| | | (_| | || (_) | |  \\__ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|  |___/" << std::endl << std::endl << std::endl << std::endl;
}

void design() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t   _______________________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  ___________________________________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  Welcome to our Physics calculator!       | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  Choose yours and press ENTER!            | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  (Navigate using W, A, S, D)              | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |___________________________________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Increasing   |       |   Hydrostatic   | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |   Acceleration  |       |    Pressure     | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Decreasing   |       |     Pressure    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |   Acceleration  |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |	   Free       |       |     Arhimed's   | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Fall       |       |       law       | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Work       |       |     Convert     | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Power      |       |      Units      | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________        __________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Formulas     |       |       Back      | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |_______________________________________________|" << std::endl;
}

void enteredChoice() {
	std::cout << " _______________________________________________" << std::endl;
	std::cout << "|  ___________________________________________  |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |___________________________________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    Increasing   |       |   Hydrostatic   | |" << std::endl;
	std::cout << "| |   Acceleration  |       |    Pressure     | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    Decreasing   |       |     Pressure    | |" << std::endl;
	std::cout << "| |   Acceleration  |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |	 Free       |       |     Arhimed's   | |" << std::endl;
	std::cout << "| |      Fall       |       |       law       | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |      Work       |       |     Convert     | |" << std::endl;
	std::cout << "| |      Power      |       |      Units      | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________ |" << std::endl;
	std::cout << "| |    Formulas     |       |       Back      | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|_______________________________________________|" << std::endl;
}
void activeChoise(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine, bool ten)
{

	printTitle();
	if (one)
	{
		design();
		gotoXY(99, 19);
		std::cout << "�����";
	}
	if (two)
	{
		design();
		gotoXY(99, 24);
		std::cout << "�����";
	}
	if (three)
	{
		design();
		gotoXY(99, 29);
		std::cout << "�����";
	}
	if (four)
	{
		design();
		gotoXY(99, 34);
		std::cout << "�����";
	}
	if (five)
	{
		design();
		gotoXY(99, 39);
		std::cout << "�����";
	}
	if (six)
	{
		design();
		gotoXY(125, 19);
		std::cout << "�����";
	}
	if (seven)
	{
		design();
		gotoXY(125, 24);
		std::cout << "�����";
	}
	if (eight)
	{
		design();
		gotoXY(125, 29);
		std::cout << "�����";
	}
	if (nine)
	{
		design();
		gotoXY(125, 34);
		std::cout << "�����";
	}
	if (ten) {
		design();
		gotoXY(125, 39);
		std::cout << "�����";
	}

	const char option = _getch();

	if (option == 'w' or option == 'W')
	{
		if (one)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			system("cls");
			activeChoise(true, false, false, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			activeChoise(false, true, false, false, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			activeChoise(false, false, true, false, false, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			activeChoise(false, false, false, true, false, false, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			activeChoise(false, false, false, false, true, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			activeChoise(false, false, false, false, false, true, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, true, false, false, false);
		}
		if (nine)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, true, false, false);
		}
		if (ten)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, true, false);
		}
	}

	if (option == 's' or option == 'S')
	{
		if (one)
		{
			system("cls");
			activeChoise(false, true, false, false, false, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			activeChoise(false, false, true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			activeChoise(false, false, false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			activeChoise(false, false, false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			activeChoise(false, false, false, false, false, true, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, true, false, false, false);
		}
		if (seven)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, true, false, false);
		}
		if (eight)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, true, false);
		}
		if (nine)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, false, true);
		}
		if (ten)
		{
			system("cls");
			activeChoise(true, false, false, false, false, false, false, false, false, false);
		}
	}

	if (option == 'a' or option == 'A' or option == 'd' or option == 'D')
	{
		if (one)
		{
			system("cls");
			activeChoise(false, false, false, false, false, true, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, true, false, false, false);
		}
		if (three)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, true, false, false);
		}
		if (four)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, true, false);
		}
		if (five)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, false, true);
		}
		if (six)
		{
			system("cls");
			activeChoise(true, false, false, false, false, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			activeChoise(false, true, false, false, false, false, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			activeChoise(false, false, true, false, false, false, false, false, false, false);
		}
		if (nine)
		{
			system("cls");
			activeChoise(false, false, false, true, false, false, false, false, false, false);
		}
		if (ten)
		{
			system("cls");
			activeChoise(false, false, false, false, true, false, false, false, false, false);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Increasing Acceleration Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator1();
		}
		if (two)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Decreasing Acceleration Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator2();
		}
		if (three)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Free Fall Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator3();
		}
		if (four)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Work and Power Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator4();
		}
		if (six)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Hydrostatic Pressure Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator5();
		}
		if (seven)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Pressure Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator6();
		}
		if (eight)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Arhimed's law Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator7();
		}
		if (nine)
		{
			system("cls");
			enteredChoice();
			gotoXY(4, 2);
			std::cout << "Loading";
			gotoXY(4, 3);
			std::cout << "Conversion of units Calculator...";

			Sleep(3000);
			system("cls");
			startCalculator8();
		}
		if (ten)
		{
			system("cls");
			active(true, false, false);
		}
	}
}
void printCalculatorsMenu()
{
	activeChoise(true, false, false, false, false, false, false, false, false, false);
}