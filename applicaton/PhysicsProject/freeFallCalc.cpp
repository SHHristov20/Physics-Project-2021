#pragma once
#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "freeFallCalc.h"
#include "calculatorsMenu.h"
#include "front-end.h"
void printCalc2() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  t  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  V  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  S  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}

void calculatorTitle() {
	system("cls");
	std::cout << "  _____                           _____          _   _ " << std::endl;
	std::cout << " | ___ |  _ __    ___    ___     | ___|   __ _  | | | |" << std::endl;
	std::cout << " | |_    | '__|  / _ \\  / _ \\    | |_    / _` | | | | |" << std::endl;
	std::cout << " |  _|   | |    |  __/ |  __/    |  _|  | (_| | | | | |" << std::endl;
	std::cout << " |_|     |_|     \\___|  \\___|    |_|     \\__,_| |_| |_|" << std::endl << std::endl << std::endl << std::endl;
}

void finalSpeed() {
	float v, g = 10, t;
	system("cls");
	printCalc2();

	gotoXY(3, 2);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 3);
	std::cout << "Final speed(v) = " << float(g * t) << "m/s";
	Sleep(3000);
	system("cls");

	printCalc2();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void street() {
	float s, g = 10, t;
	system("cls");
	printCalc2();

	gotoXY(3, 2);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 3);
	std::cout << "Street(s) = " << float((g * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	printCalc2();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void time3() {
	float v, g = 10, t;
	system("cls");
	printCalc2();

	gotoXY(3, 2);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXY(3, 3);
	std::cout << "Time(t) = " << float(g / v);
	Sleep(3000);
	system("cls");


	printCalc2();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void calcMenu(bool one, bool two, bool three, bool four) {
	calculatorTitle();

	std::cout << "   Find" << std::endl;

	if (one)
	{
		std::cout << "-> " << "Final speed" << std::endl;
	}
	else
	{
		std::cout << "   Final speed" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Decreasement" << std::endl;
	}
	else
	{
		std::cout << "   Decreasement" << std::endl;
	}
	if (three)
	{
		std::cout << "-> " << "Time" << std::endl;
	}
	else
	{
		std::cout << "   Time" << std::endl;
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
			calcMenu(false, true, false, false);
		}
		if (two)
		{
			calcMenu(false, false, true, false);
		}
		if (three)
		{
			calcMenu(false, false, false, true);
		}
		if (four)
		{
			calcMenu(true, false, false, false);
		}
	}
	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu(false, false, false, true);
		}
		if (two)
		{
			calcMenu(true, false, false, false);
		}
		if (three)
		{
			calcMenu(false, true, false, false);
		}
		if (four)
		{
			calcMenu(false, false, true, false);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			finalSpeed();
		}
		if (two)
		{
			street();
		}
		if (three)
		{
			time3();
		}
		if (four)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}

void startCalculator3()
{
	calcMenu(true, false, false, false);
}