#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc6() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  N  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  m2 |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  Pa |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void calcTitle6()
{
	system("cls");
	std::cout << std::endl << "\t  ____                                                  " << std::endl;
	std::cout << "\t |  _ \\   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << "\t | |_) | | '__|  / _ \\ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "\t |  __/  | |    |  __/ \\__ \\ \\__ \\ | |_| | | |    |  __/" << std::endl;
	std::cout << "\t |_|     |_|     \\___| |___/ |___/  \\__,_| |_|     \\___|" << std::endl << std::endl << std::endl << std::endl;;
}
void Pressure()
{
	float S = 0, F = 0;
	system("cls");
	printCalc6();

	gotoXY(3, 2);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoXY(3, 3);
	std::cout << "Area(S) = ";
	std::cin >> S;

	gotoXY(3, 4);
	std::cout << "Pressure(P) = " << float(F/S) << "Pa";
	Sleep(3000);
	system("cls");

	printCalc6();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void Area()
{
	float P = 0, F = 0;
	system("cls");
	printCalc6();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Force(F) = ";
	std::cin >> F;


	gotoXY(3, 4);
	std::cout << "Area(S) = " << float(F/P) <<"m2";
	Sleep(3000);
	system("cls");

	printCalc6();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void Force()
{
	float S = 0, P = 0;
	system("cls");
	printCalc6();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Area(S) = ";
	std::cin >> S;

	gotoXY(3, 4);
	std::cout << "Force(F) = " << float(P*S) << "N";
	Sleep(3000);
	system("cls");

	printCalc6();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void calcMenu6(bool one, bool two, bool three, bool four) {
	calcTitle6();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Pressure" << std::endl;
	}
	else
	{
		std::cout << "   Pressure" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Area" << std::endl;
	}
	else
	{
		std::cout << "   Area" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Force" << std::endl;
	}
	else
	{
		std::cout << "   Force" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Back" << std::endl;
	}
	else
	{
		std::cout << "   Back" << std::endl;
	}

	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			calcMenu6(false, true, false, false);
		}
		if (two)
		{
			calcMenu6(false, false, true, false);
		}
		if (three)
		{
			calcMenu6(false, false, false, true);
		}

		if (four)
		{
			calcMenu6(true, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu6(false, false, false, true);
		}
		if (two)
		{
			calcMenu6(true, false, false, false);
		}
		if (three)
		{
			calcMenu6(false, true, false, false);
		}
		if (four)
		{
			calcMenu6(false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			Pressure();
		}
		if (two)
		{
			system("cls");
			Area();
		}
		if (three)
		{
			system("cls");
			Force();
		}
		if (four)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator6()
{
	calcMenu6(true, false, false, false);
}