#include "decreasingAccCalc.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
void printCalc1() {
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
	std::cout << "| |  4  |  5  |  6  | |  s  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  t0 |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |s-BR |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |  V0 |  a  | |  V  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void acceleration1()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 3);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXY(3, 4);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 5);
	std::cout << "Acceleration(a) = " << float((v0 - v) / t) << "m/s" << char(253);
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void displacement1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 3);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 4);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 5);
	std::cout << "Displacement(s) = " << v0 * t - ((a * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void fSpeed1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 3);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 4);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 5);
	std::cout << "Final Speed(v) = " << v0 - (a * t);
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void time1()
{
	float v = 0, a = 0, v0 = 0;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 3);
	std::cout << "Initial sppeed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 4);
	std::cout << "Final Speed(v) = ";
	std::cin >> v;

	gotoXY(3, 5);
	std::cout << "Time(t) = " << (v0 - v) / a;
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void stopTime()
{
	float t0, v0, a;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 3);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 4);
	std::cout << "Time(t0) = " << v0 / a;
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void brakingDistance() {
	float v0, a, s;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(3, 3);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 4);
	std::cout << "Distance(s) = " << pow(v0, 2) / (2 * a);
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void initialSpeed() {
	float v, v0, a, t;
	system("cls");
	printCalc1();

	gotoXY(3, 2);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXY(3, 3);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(3, 4);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(3, 5);
	std::cout << "Initial speed(v0) = " << v - (a * t);
	Sleep(3000);
	system("cls");

	printCalc1();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	gotoXY(3, 20);
	return;
}
void calcTitle1() {
	system("cls");
	std::cout << std::endl << "\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}
void menu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight) {
	calcTitle1();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Acceleration" << std::endl;
	}
	else
	{
		std::cout << "   Acceleration" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Displacement" << std::endl;
	}
	else
	{
		std::cout << "   Displacement" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Final speed" << std::endl;
	}
	else
	{
		std::cout << "   Final speed" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Time" << std::endl;
	}
	else
	{
		std::cout << "   Time" << std::endl;
	}

	if (five)
	{
		std::cout << "-> " << "Stop time" << std::endl;
	}
	else
	{
		std::cout << "   Stop time" << std::endl;
	}
	if (six)
	{
		std::cout << "-> " << "Braking Distance" << std::endl;
	}
	else
	{
		std::cout << "   Braking Distance" << std::endl;
	}
	if (seven)
	{
		std::cout << "-> " << "Initial Speed" << std::endl;
	}
	else
	{
		std::cout << "   Initial Speed" << std::endl;
	}
	if (eight)
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
			menu(false, true, false, false, false, false, false, false);
		}
		if (two)
		{
			menu(false, false, true, false, false, false, false, false);
		}
		if (three)
		{
			menu(false, false, false, true, false, false, false, false);
		}

		if (four)
		{
			menu(false, false, false, false, true, false, false, false);
		}
		if (five)
		{
			menu(false, false, false, false, false, true, false, false);
		}
		if (six)
		{
			menu(false, false, false, false, false, false, true, false);
		}
		if (seven)
		{
			menu(false, false, false, false, false, false, false, true);
		}
		if (eight)
		{
			menu(true, false, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			menu(false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			menu(true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			menu(false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			menu(false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			menu(false, false, false, true, false, false, false, false);
		}
		if (six)
		{
			menu(false, false, false, false, true, false, false, false);
		}
		if (seven)
		{
			menu(false, false, false, false, false, true, false, false);
		}
		if (eight)
		{
			menu(false, false, false, false, false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			acceleration1();
		}
		if (two)
		{
			system("cls");
			displacement1();
		}
		if (three)
		{
			system("cls");
			fSpeed1();
		}
		if (four)
		{
			system("cls");
			time1();
		}
		if (five)
		{
			system("cls");
			stopTime();
		}
		if (six)
		{
			system("cls");
			brakingDistance();
		}
		if (seven)
		{
			system("cls");
			initialSpeed();
		}
	}
}
void startCalculator2() {
	menu(true, false, false, false, false, false, false, false);
}