#pragma once
#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "freeFallCalc.h"
#include "calculatorsMenu.h"
#include "front-end.h"

/// <summary>
/// Calculator
/// </summary>
void freeFallCalc() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   t   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   V   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   S   |  |" << std::endl;
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
/// Calculator Design
/// </summary>
void freeFallCalcDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Free fall Calculator           |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   t   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   V   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   S   |  |" << std::endl;
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
void freeFallCalcTitle() {
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t\t\t  _____                           ____           _   _ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  ___|  _ __    ___    ___     | ___|   __ _  | | | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |_    | '__|  / _ \\  / _ \\    | |_    / _` | | | | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  _|   | |    |  __/ |  __/    |  _|  | (_| | | | | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |_|     |_|     \\___|  \\___|    |_|     \\__,_| |_| |_|" << std::endl << std::endl << std::endl << std::endl;
}

/// <summary>
/// Finding the final speed
/// </summary>
void finalSpeed() {
	float v, g = 10, t;
	system("cls");
	freeFallCalcTitle();
	freeFallCalc();

	gotoXY(100, 11);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 12);
	std::cout << "Final speed(v) = " << float(g * t) << "m/s";
	Sleep(3000);
	system("cls");

	freeFallCalcTitle();
	freeFallCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	freeFallCalcTitle();
	freeFallCalc();
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
/// Finding the displacement
/// </summary>
void street() {
	float s, g = 10, t;
	system("cls");
	freeFallCalcTitle();
	freeFallCalc();

	gotoXY(100, 11);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 12);
	std::cout << "Street(s) = " << float((g * pow(t, 2)) / 2) << "m";
	Sleep(3000);
	system("cls");

	freeFallCalcTitle();
	freeFallCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	freeFallCalcTitle();
	freeFallCalc();
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
/// Finding the time
/// </summary>
void time3() {
	float v, g = 10, t;
	system("cls");
	freeFallCalcTitle();
	freeFallCalc();

	gotoXY(100, 11);
	std::cout << "Final speed(v) = ";
	std::cin >> v;
	
	if (!std::cin)
	{
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		freeFallCalcTitle();
		freeFallCalc();

		gotoXY(100, 11);
		std::cout << "Final speed(v) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v;
	}

	gotoXY(100, 12);
	std::cout << "Time(t) = " << float(g / v) << "s";
	Sleep(3000);
	system("cls");


	freeFallCalcTitle();
	freeFallCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	freeFallCalcTitle();
	freeFallCalc();
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
void freeFallCalcMenu(bool one, bool two, bool three, bool four) {
	freeFallCalcTitle();


	if (one)
	{
		freeFallCalcDesign();
		gotoXY(128, 18);
		std::cout << char(219) << " ";
	}

	if (two)
	{
		freeFallCalcDesign();
		gotoXY(128, 21);
		std::cout << char(219) << " ";
	}
	if (three)
	{
		freeFallCalcDesign();
		gotoXY(128, 24);
		std::cout << char(219) << " ";
	}
	if (four)
	{
		freeFallCalcDesign();
		gotoXY(128, 27);
		std::cout << char(219) << " ";
	}
	start:
	const char option = _getch();

	if (option == 's' || option == 'S')
	{
		if (one)
		{
			freeFallCalcMenu(false, true, false, false);
		}
		if (two)
		{
			freeFallCalcMenu(false, false, true, false);
		}
		if (three)
		{
			freeFallCalcMenu(false, false, false, true);
		}
		if (four)
		{
			freeFallCalcMenu(true, false, false, false);
		}
	}
	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			freeFallCalcMenu(false, false, false, true);
		}
		if (two)
		{
			freeFallCalcMenu(true, false, false, false);
		}
		if (three)
		{
			freeFallCalcMenu(false, true, false, false);
		}
		if (four)
		{
			freeFallCalcMenu(false, false, true, false);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			time3();
		}
		if (two)
		{
			finalSpeed();
		}
		if (three)
		{
			street();
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
/// Start the calculator
/// </summary>
void startFreeFallCalc()
{
	freeFallCalcMenu(true, false, false, false);
}