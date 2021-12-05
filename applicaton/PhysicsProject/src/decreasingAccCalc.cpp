#include "decreasingAccCalc.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"
#include "front-end.h"

/// <summary>
/// Title
/// </summary>
void decreasingAccCalcTitle() {
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}
/// <summary>
/// Calculator
/// </summary>
void decreasingAccCalc() {
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
/// <summary>
/// Calculator Design
/// </summary>
void calcDesign1() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our Decreasing      |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Acceleration Calculator        |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
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
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |  s-BR |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   B   |   V0  |   a   | |   V   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
/// <summary>
/// Finding acceleration
/// </summary>
void acceleration1()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
	std::cout << "Acceleration(a) = " << float((v0 - v) / t) << "m/s" << char(253);
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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
/// <summary>
/// Finding displacement
/// </summary>
void displacement1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
	std::cout << "Displacement(s) = " << v0 * t - ((a * pow(t, 2)) / 2);
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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
/// <summary>
/// Finding final speed
/// </summary>
void fSpeed1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

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
	std::cout << "Final Speed(v) = " << v0 - (a * t);
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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
/// <summary>
/// Finding time
/// </summary>
void time1()
{
	float v = 0, a = 0, v0 = 0;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Acceleration(a) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 12);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Acceleration(a) = " << a;

		gotoXY(100, 12);
		std::cout << "Initial speed(v0) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 13);
	std::cout << "Final Speed(v) = ";
	std::cin >> v;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Acceleration(a) = " << a;

		gotoXY(100, 12);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 13);
		std::cout << "Final speed(v) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v;
	}

	gotoXY(100, 14);
	std::cout << "Time(t) = " << (v0 - v) / a;
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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

/// <summary>
/// Finding breaking time
/// </summary>
void stopTime()
{
	float t0, v0, a;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Acceleration(a) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 13);
	std::cout << "Breaking distance(s) = " << v0 / a;
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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
/// <summary>
/// Finding the braking distance
/// </summary>
void brakingDistance() {
	float v0, a, s;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v0;
	}

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Initial speed(v0) = " << v0;

		gotoXY(100, 12);
		std::cout << "Acceleration(a) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 13);
	std::cout << "Distance(s) = " << pow(v0, 2) / (2 * a);
	Sleep(3000);
	system("cls");


	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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

/// <summary>
/// Finding the initial speed
/// </summary>
void initialSpeed() {
	float v, v0, a, t;
	system("cls");
	decreasingAccCalcTitle();
	decreasingAccCalc();

	gotoXY(100, 11);
	std::cout << "Final speed(v) = ";
	std::cin >> v;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Final speed(v) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> v;
	}

	gotoXY(100, 12);
	std::cout << "Acceleration(a) = ";
	std::cin >> a;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Final speed(v) = " << v;

		gotoXY(100, 12);
		std::cout << "Acceleration(a) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
	}

	gotoXY(100, 13);
	std::cout << "Time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		decreasingAccCalcTitle();
		decreasingAccCalc();

		gotoXY(100, 11);
		std::cout << "Final speed(v) = " << v;

		gotoXY(100, 12);
		std::cout << "Acceleration(a) = " << a;

		gotoXY(100, 13);
		std::cout << "Time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 14);
	std::cout << "Initial speed(v0) = " << v - (a * t);
	Sleep(3000);
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	decreasingAccCalcTitle();
	decreasingAccCalc();
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

/// <summary>
/// Menu
/// </summary>
/// <param name="one"></param>
/// <param name="two"></param>
/// <param name="three"></param>
/// <param name="four"></param>
/// <param name="five"></param>
/// <param name="six"></param>
/// <param name="seven"></param>
/// <param name="eight"></param>
void decreasingAccCalcMenu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight) {
	decreasingAccCalcTitle();

	if (one)
	{
		calcDesign1();
		gotoXY(128, 18);
		std::cout << "± ";
	}

	if (two)
	{
		calcDesign1();
		gotoXY(128, 21);
		std::cout << "± ";
	}

	if (three)
	{
		calcDesign1();
		gotoXY(128, 24);
		std::cout << "± ";
	}

	if (four)
	{
		calcDesign1();
		gotoXY(128, 27);
		std::cout << "± ";
	}

	if (five)
	{
		calcDesign1();
		gotoXY(128, 30);
		std::cout << "± ";
	}
	if (six)
	{
		calcDesign1();
		gotoXY(118, 30);
		std::cout << "± ";
	}
	if (seven)
	{
		calcDesign1();
		gotoXY(110, 30);
		std::cout << "± ";
	}
	if (eight)
	{
		calcDesign1();
		gotoXY(102, 30);
		std::cout << "± ";
	}


	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			decreasingAccCalcMenu(false, true, false, false, false, false, false, false);
		}
		if (two)
		{
			decreasingAccCalcMenu(false, false, true, false, false, false, false, false);
		}
		if (three)
		{
			decreasingAccCalcMenu(false, false, false, true, false, false, false, false);
		}

		if (four)
		{
			decreasingAccCalcMenu(false, false, false, false, true, false, false, false);
		}
		if (five)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (six)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (seven)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (eight)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			decreasingAccCalcMenu(false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			decreasingAccCalcMenu(false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			decreasingAccCalcMenu(false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			decreasingAccCalcMenu(false, false, false, true, false, false, false, false);
		}
		if (six)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (seven)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (eight)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
	}
	if (option == 'a' or option == 'A')
	{
		if (one)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (two)
		{
			decreasingAccCalcMenu(false, true, false, false, false, false, false, false);
		}
		if (three)
		{
			decreasingAccCalcMenu(false, false , true, false, false, false, false, false);
		}
		if (four)
		{
			decreasingAccCalcMenu(false, false, false, true, false, false, false, false);
		}
		if (five)
		{
			decreasingAccCalcMenu(false, false, false, false, false, true, false, false);
		}
		if (six)
		{
			decreasingAccCalcMenu(false, false, false, false, false, false, true, false);
		}
		if (seven)
		{
			decreasingAccCalcMenu(false, false, false, false, false, false, false, true);
		}
		if (eight)
		{
			decreasingAccCalcMenu(false, false, false, false, true, false, false, false);
		}
	}

	if (option == 'd' or option == 'D')
	{
		if (one)
		{
			decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
		}
		if (two)
		{
			decreasingAccCalcMenu(false, true, false, false, false, false, false, false);
		}
		if (three)
		{
			decreasingAccCalcMenu(false, false, true, false, false, false, false, false);
		}
		if (four)
		{
			decreasingAccCalcMenu(false, false, false, true, false, false, false, false);
		}
		if (five)
		{
			decreasingAccCalcMenu(false, false, false, false, true, false, false, false);
		}
		if (six)
		{
			decreasingAccCalcMenu(false, false, false, false, true, false, false, false);
		}
		if (seven)
		{
			decreasingAccCalcMenu(true, false, false, false, false, true, false, false);
		}
		if (eight)
		{
			decreasingAccCalcMenu(false, false, false, false, false, false, true, false);
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

/// <summary>
/// Start the calculator
/// </summary>
void startDecreasingAccCalc() {
	decreasingAccCalcMenu(true, false, false, false, false, false, false, false);
}