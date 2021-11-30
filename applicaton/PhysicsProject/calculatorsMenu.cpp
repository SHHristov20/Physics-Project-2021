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
void printTitle() {
	std::cout << std::endl << "\t\t\t\t   ____      _            _       _                 " << std::endl;
	std::cout << "\t\t\t\t  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ ___ " << std::endl;
	std::cout << "\t\t\t\t | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__/ __|" << std::endl;
	std::cout << "\t\t\t\t | |__| (_| | | (__| |_| | | (_| | || (_) | |  \\__ \\" << std::endl;
	std::cout << "\t\t\t\t  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|  |___/" << std::endl << std::endl << std::endl << std::endl;
}

void design() {
	std::cout << " _______________________________________________" << std::endl;
	std::cout << "|  ___________________________________________  |" << std::endl;
	std::cout << "| |  Welcome to our Physics calculator!       | |" << std::endl;
	std::cout << "| |  Choose yours and press ENTER!            | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |  (Navigate using W, A, S, D)              | |" << std::endl;
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
	std::cout << "|  _________________        __________________  |" << std::endl;
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
		gotoXY(9, 19);
		std::cout << "±±±±±";
	}
	if (two)
	{
		design();
		gotoXY(9, 24);
		std::cout << "±±±±±";
	}
	if (three)
	{
		design();
		gotoXY(9, 29);
		std::cout << "±±±±±";
	}
	if (four)
	{
		design();
		gotoXY(9, 34);
		std::cout << "±±±±±";
	}
	if (five)
	{
		design();
		gotoXY(9, 39);
		std::cout << "±±±±±";
	}
	if (six)
	{
		design();
		gotoXY(35, 19);
		std::cout << "±±±±±";
	}
	if (seven)
	{
		design();
		gotoXY(35, 24);
		std::cout << "±±±±±";
	}
	if (eight)
	{
		design();
		gotoXY(35, 29);
		std::cout << "±±±±±";
	}
	if (nine)
	{
		design();
		gotoXY(35, 34);
		std::cout << "±±±±±";
	}
	if (ten) {
		design();
		gotoXY(35, 39);
		std::cout << "±±±±±";
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
			startCalculator1();
		}
		if (two)
		{
			system("cls");
			startCalculator2();
		}
		if (three)
		{
			system("cls");
			startCalculator3();
		}
		if (four)
		{
			system("cls");
			startCalculator4();
		}
		if (five)
		{
			system("cls");
			startCalculator5();
		}
		if (six)
		{
			system("cls");
			startCalculator6();
		}
		if (seven)
		{
			system("cls");
			startCalculator7();
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