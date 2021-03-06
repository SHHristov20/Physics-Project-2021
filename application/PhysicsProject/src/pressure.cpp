#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

/// <summary>
/// Calculator
/// </summary>
void pressureCalc() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   S   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}

/// <summary>
/// Calculator design
/// </summary>
void pressureCalcDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Pressure Calculator            |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   S   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}

/// <summary>
/// Title
/// </summary>
void pressureCalcTitle()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t\t\t  ____                                                  " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  _ \\   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |_) | | '__|  / _ \\ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  __/  | |    |  __/ \\__ \\ \\__ \\ | |_| | | |    |  __/" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |_|     |_|     \\___| |___/ |___/  \\__,_| |_|     \\___|" << std::endl << std::endl << std::endl << std::endl;;
}

/// <summary>
/// Finding the pressure
/// </summary>
void Pressure()
{
	float S = 0, F = 0;
	system("cls");
	pressureCalcTitle();
	pressureCalc();

	gotoXY(100, 11);
	std::cout << "Force(F) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Force(F) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> F;
	}

	gotoXY(100, 12);
	std::cout << "Area(S) = ";
	std::cin >> S;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Force(F) = " << F;

		gotoXY(100, 12);
		std::cout << "Area(S) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> S;
	}

	gotoXY(100, 13);
	std::cout << "Pressure(P) = " << float(F / S) << "Pa";
	Sleep(3000);
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << char(219) << " ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Finding the area
/// </summary>
void Area()
{
	float P = 0, F = 0;
	system("cls");
	pressureCalcTitle();
	pressureCalc();

	gotoXY(100, 11);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Pressure(P) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> P;
	}

	gotoXY(100, 12);
	std::cout << "Force(F) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Pressure(P) = " << P;

		gotoXY(100, 12);
		std::cout << "Force(F) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> F;
	}

	gotoXY(100, 13);
	std::cout << "Area(S) = " << float(F / P) << "m^2";
	Sleep(3000);
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << char(219) << " ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Finding the force
/// </summary>
void Force()
{
	float S = 0, P = 0;
	system("cls");
	pressureCalcTitle();
	pressureCalc();

	gotoXY(100, 11);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Pressure(P) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> P;
	}

	gotoXY(100, 12);
	std::cout << "Area(S) = ";
	std::cin >> S;

	if (!std::cin)
	{
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		pressureCalcTitle();
		pressureCalc();

		gotoXY(100, 11);
		std::cout << "Pressure(P) = " << P;

		gotoXY(100, 12);
		std::cout << "Area(S) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> S;
	}

	gotoXY(100, 13);
	std::cout << "Force(F) = " << float(P * S) << "N";
	Sleep(3000);
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	pressureCalcTitle();
	pressureCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << char(219) << " ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}


/// <summary>
/// Menu
/// </summary>
/// <param name="one"></param>
/// <param name="two"></param>
/// <param name="three"></param>
/// <param name="four"></param>
void pressureCalcMenu(bool one, bool two, bool three, bool four) {
	pressureCalcTitle();


	if (one)
	{
		pressureCalcDesign();
		gotoXY(128, 18);
		std::cout << char(219) << " ";
	}

	if (two)
	{
		pressureCalcDesign();
		gotoXY(128, 21);
		std::cout << char(219) << " ";
	}
	if (three)
	{
		pressureCalcDesign();
		gotoXY(128, 24);
		std::cout << char(219) << " ";
	}

	if (four)
	{
		pressureCalcDesign();
		gotoXY(128, 27);
		std::cout << char(219) << " ";
	}
	start:
	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			pressureCalcMenu(false, true, false, false);
		}
		if (two)
		{
			pressureCalcMenu(false, false, true, false);
		}
		if (three)
		{
			pressureCalcMenu(false, false, false, true);
		}

		if (four)
		{
			pressureCalcMenu(true, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			pressureCalcMenu(false, false, false, true);
		}
		if (two)
		{
			pressureCalcMenu(true, false, false, false);
		}
		if (three)
		{
			pressureCalcMenu(false, true, false, false);
		}
		if (four)
		{
			pressureCalcMenu(false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			Force();
		}
		if (two)
		{
			system("cls");
			Area();
		}
		if (three)
		{
			system("cls");
			Pressure();
		}
		if (four)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
	else
	{
		goto start;
	}
}

/// <summary>
/// Start the pressure calculator
/// </summary>
void startPressureCalc()
{
	pressureCalcMenu(true, false, false, false);
}