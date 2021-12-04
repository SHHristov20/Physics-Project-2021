#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "calculatorsMenu.h"
#include "front-end.h"

void increasingAccCalc() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   a   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   v   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   t   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void increasingAccCalcDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our Increasing      |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Acceleration Calculator        |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   a   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   v   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   t   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void increasingAccCalcTitle() {
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}
void acceleration()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	increasingAccCalcTitle();
	increasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 12);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Final speed(v) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v;
	}

	gotoXY(100, 13);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Final speed(v) = " << v;

		gotoXY(100, 13);

		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 14);
	std::cout << "Acceleration(a) = " << float((v - v0) / t) << "m/s" << char(253);
	Sleep(3000);
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

void displacement()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	increasingAccCalcTitle();
	increasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 12);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 13);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Time(t) = " << t;

		gotoXY(100, 13);
		std::cout << "Acceleration(a) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 14);
	std::cout << "Displacement(s) = " << v0 * t + ((a * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}
void fSpeed()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	increasingAccCalcTitle();
	increasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = ";;

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 12);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 13);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Time(t) = " << t;

		gotoXY(100, 13);
		std::cout << "Acceleration(a) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 14);
	std::cout << "Final Speed(v) = " << v0 + (a * t);
	Sleep(3000);
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}
void time()
{
	float v = 0, a = 0;
	system("cls");
	increasingAccCalcTitle();
	increasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Acceleration(a) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 12);
	std::cout << "Final Speed(v) = ";
	std::cin >> v;

	if (!std::cin)
	{
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		increasingAccCalcTitle();
		increasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Acceleration(a) = " << a;

		gotoXY(100, 12);
		std::cout << "Final Speed(v) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v;
	}

	gotoXY(100, 13);
	std::cout << "Time(t) = " << v / a;
	Sleep(3000);
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	increasingAccCalcTitle();
	increasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Redirecting";

	gotoXY(100, 12);
	std::cout << "to calculators menu...";

	gotoXY(100, 14);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}
void increasingAccCalcMenu(bool one, bool two, bool three, bool four, bool five) {
	increasingAccCalcTitle();

	if (one)
	{
		increasingAccCalcDesign();
		gotoXY(128, 18);
		std::cout << "± ";
	}

	if (two)
	{
		increasingAccCalcDesign();
		gotoXY(128, 21);
		std::cout << "± ";
	}

	if (three)
	{
		increasingAccCalcDesign();
		gotoXY(128, 24);
		std::cout << "± ";
	}

	if (four)
	{
		increasingAccCalcDesign();
		gotoXY(128, 27);
		std::cout << "± ";
	}

	if (five)
	{
		increasingAccCalcDesign();
		gotoXY(128, 30);
		std::cout << "± ";
	}

	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			increasingAccCalcMenu(false, true, false, false, false);
		}
		if (two)
		{
			increasingAccCalcMenu(false, false, true, false, false);
		}
		if (three)
		{
			increasingAccCalcMenu(false, false, false, true, false);
		}

		if (four)
		{
			increasingAccCalcMenu(false, false, false, false, true);
		}
		if (five)
		{
			increasingAccCalcMenu(true, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			increasingAccCalcMenu(false, false, false, false, true);
		}
		if (two)
		{
			increasingAccCalcMenu(true, false, false, false, false);
		}
		if (three)
		{
			increasingAccCalcMenu(false, true, false, false, false);
		}
		if (four)
		{
			increasingAccCalcMenu(false, false, true, false, false);
		}
		if (five)
		{
			increasingAccCalcMenu(false, false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			acceleration();
		}
		if (two)
		{
			system("cls");
			displacement();
		}
		if (three)
		{
			system("cls");
			fSpeed();
		}
		if (four)
		{
			system("cls");
			time();
		}
		if (five)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}

void startIncreasingAccCalc() {
	increasingAccCalcMenu(true, false, false, false, false);
}