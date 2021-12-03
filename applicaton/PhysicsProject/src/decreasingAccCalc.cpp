#include "decreasingAccCalc.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"
#include "front-end.h"

void calcTitle1() {
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}
void printCalc1() {
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
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |  t0   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |  s-Br |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   B   |   V0  |   a   | |   V   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void acceleration1()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 12);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXY(100, 13);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(100, 14);
	std::cout << "Acceleration(a) = " << float((v0 - v) / t) << "m/s" << char(253);
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void displacement1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 12);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(100, 13);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 14);
	std::cout << "Displacement(s) = " << v0 * t - ((a * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void fSpeed1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 12);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(100, 13);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 14);
	std::cout << "Final Speed(v) = " << v0 - (a * t);
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void time1()
{
	float v = 0, a = 0, v0 = 0;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 12);
	std::cout << "Initial sppeed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 13);
	std::cout << "Final Speed(v) = ";
	std::cin >> v;

	gotoXY(100, 14);
	std::cout << "Time(t) = " << (v0 - v) / a;
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void stopTime()
{
	float t0, v0, a;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 13);
	std::cout << "Breaking distance(s) = " << v0 / a;
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void brakingDistance() {
	float v0, a, s;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 13);
	std::cout << "Distance(s) = " << pow(v0, 2) / (2 * a);
	Sleep(3000);
	system("cls");


	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void initialSpeed() {
	float v, v0, a, t;
	system("cls");
	calcTitle1();
	printCalc1();

	gotoXY(100, 11);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	gotoXY(100, 13);
	std::cout << "Time(t) = ";
	std::cin >> t;

	gotoXY(100, 14);
	std::cout << "Initial speed(v0) = " << v - (a * t);
	Sleep(3000);
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle1();
	printCalc1();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "� ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
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
		if (eight)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator2() {
	menu(true, false, false, false, false, false, false, false);
}