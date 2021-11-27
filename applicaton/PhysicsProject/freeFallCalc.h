#pragma once
#include <iostream>
#include <conio.h>
#include <cmath>

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

void gotoXy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void finalSpeed() {
	float v, g = 10, t;
	system("cls");
	printCalc2();

	gotoXy(3, 2);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXy(3, 3);
	std::cout << "Final speed(v) = " << float(g * t) << "m/s";
	Sleep(3000);
	system("cls");

	printCalc2();
	gotoXy(3, 2);
	std::cout << "Press any key to";

	gotoXy(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXy(3, 20);
	return;
}
void street() {
	float s, g = 10, t;
	system("cls");
	printCalc2();

	gotoXy(3, 2);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXy(3, 3);
	std::cout << "Street(s) = " << float((g * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	printCalc2();
	gotoXy(3, 2);
	std::cout << "Press any key to";

	gotoXy(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXy(3, 20);
	return;
}

void time3() {
	float v, g = 10, t;
	system("cls");
	printCalc2();

	gotoXy(3, 2);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXy(3, 3);
	std::cout << "Time(t) = " << float(g / v);
	Sleep(3000);
	system("cls");


	printCalc2();
	gotoXy(3, 2);
	std::cout << "Press any key to";

	gotoXy(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXy(3, 20);
	return;
}
void calcMenu(bool one, bool two, bool three) {
	calculatorTitle();
	
	std::cout << "   Find" << std::endl;

	if (one)
	{
		std::cout << "-> " <<  "Final speed" << std::endl;
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

	const char option = _getch();

	if (option == 's' || option == 'S')
	{
		if (one)
		{
			calcMenu(false, true, false);
		}
		if (two)
		{
			calcMenu(false, false, true);
		}
		if (three)
		{
			calcMenu(true, false, false);
		}
	}
	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu(true, false, false);
		}
		if (two)
		{
			calcMenu(true, false, false);
		}
		if (three)
		{
			calcMenu(false, true, false);
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
	}
}

void startCalculator3()
{
	calcMenu(true, false, false);
}