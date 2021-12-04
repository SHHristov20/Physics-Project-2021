#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "calculatorsMenu.h"
#include "workAndPowerCalc.h"
#include "front-end.h"

void workAndPowerCalcTitle()
{
	system("cls");
	std::cout << std::endl << "" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t __        __                 _                            _     ____                                   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t \\ \\      / /   ___    _ __  | | __     __ _   _ __     __| |   |  _ \\    ___   __      __   ___   _ __ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t  \\ \\ /\\ / /   / _ \\  | '__| | |/ /    / _` | | '_ \\   / _` |   | |_) |  / _ \\  \\ \\ /\\ / /  / _ \\ | '__|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t   \\ V  V /   | (_) | | |    |   <    | (_| | | | | | | (_| |   |  __/  | (_) |  \\ V  V /  |  __/ | |   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t    \\_/\\_/     \\___/  |_|    |_|\\_\\    \\__,_| |_| |_|  \\__,_|   |_|      \\___/    \\_/\\_/    \\___| |_|  " << std::endl << std::endl << std::endl << std::endl;
}
void workAndPowerCalc()
{
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   A   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |   B   |   t   | |   A   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void workAndPowerCalcDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Work and Power Calculator      |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   A   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |   B   |   t   | |   A   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void work()
{
	float A, F, s;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Force(F) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Force(F) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> F;
	}

	gotoXY(100, 13);
	std::cout << "Displacement(s) = ";
	std::cin >> s;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Force(F) = " << F;

		gotoXY(100, 13);
		std::cout << "Displacement(s) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> s;
	}

	gotoXY(100, 14);
	std::cout << "Work(A) = " << float(F * s) << "J";
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void force()
{
	float A, F, s;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Work(A) = ";
	std::cin >> A;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> A;
	}

	gotoXY(100, 13);
	std::cout << "Displacement(s) = ";
	std::cin >> s;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = " << A;

		gotoXY(100, 13);
		std::cout << "Displacement(s) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> s;
	}

	gotoXY(100, 14);
	std::cout << "Force(F) = " << float(s / A);
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void displacementByWork()
{
	float A, F, s;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Work(A) = ";
	std::cin >> A;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> A;
	}

	gotoXY(100, 13);
	std::cout << "Force(F) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = " << A;

		gotoXY(100, 13);
		std::cout << "Force(F) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> F;
	}

	gotoXY(100, 14);
	std::cout << "Displacement(s) = " << float(F / A) << "m/s";
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void power()
{
	float P, A, t;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Work(A) = ";
	std::cin >> A;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> A;
	}

	gotoXY(100, 13);
	std::cout << "time(t) = ";
	std::cin >> t;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = " << A;

		gotoXY(100, 13);
		std::cout << "time(t) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}

	gotoXY(100, 14);
	std::cout << "Power(P) = " << float(A / t) << "W";
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void findWorkByPower()
{
	float A, P, t;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Time(t) = ";
	std::cin >> t;


	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Time(t) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> t;
	}
	gotoXY(100, 13);
	std::cout << "Force(P) = ";
	std::cin >> P;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Time(t) = " << t;

		gotoXY(100, 13);
		std::cout << "Force(P) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> P;
	}

	gotoXY(100, 14);
	std::cout << "Work(A) = " << float(P / t) << "J";
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void findTimeByPower()
{
	float A, P, t;
	system("cls");
	workAndPowerCalcTitle();
	workAndPowerCalc();

	gotoXY(100, 12);
	std::cout << "Work(A) = ";
	std::cin >> A;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> A;
	}

	gotoXY(100, 13);
	std::cout << "Power(P) = ";
	std::cin >> P;

	if (!std::cin)
	{
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		workAndPowerCalcTitle();
		workAndPowerCalc();

		gotoXY(100, 12);
		std::cout << "Work(A) = " << A;

		gotoXY(100, 13);
		std::cout << "Power(P) = ";

		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> P;
	}

	gotoXY(100, 14);
	std::cout << "Time(t) = " << float(A / P) << "s";
	Sleep(3000);
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	workAndPowerCalcTitle();
	workAndPowerCalc();
	gotoXY(100, 12);
	std::cout << "Redirecting";

	gotoXY(100, 13);
	std::cout << "to calculators menu...";

	gotoXY(100, 15);
	for (int i = 0; i < 13; i++)
	{
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "100%";
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void workAndPowerCalcMenu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven) {
	workAndPowerCalcTitle();

	if (one)
	{
		workAndPowerCalcDesign();
		gotoXY(128, 19);
		std::cout << "± ";
	}
	if (two)
	{
		workAndPowerCalcDesign();
		gotoXY(128, 22);
		std::cout << "± ";
	}
	if (three)
	{
		workAndPowerCalcDesign();
		gotoXY(128, 25);
		std::cout << "± ";
	}

	if (four)
	{
		workAndPowerCalcDesign();
		gotoXY(128, 28);
		std::cout << "± ";
	}
	if (five)
	{
		workAndPowerCalcDesign();
		gotoXY(128, 31);
		std::cout << "± ";
	}
	if (six)
	{
		workAndPowerCalcDesign();
		gotoXY(118, 31);
		std::cout << "± ";
	}
	if (seven)
	{
		workAndPowerCalcDesign();
		gotoXY(110, 31);
		std::cout << "± ";
	}

	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			workAndPowerCalcMenu(false, true, false, false, false, false, false);
		}
		if (two)
		{
			workAndPowerCalcMenu(false, false, true, false, false, false, false);
		}
		if (three)
		{
			workAndPowerCalcMenu(false, false, false, true, false, false, false);
		}

		if (four)
		{
			workAndPowerCalcMenu(false, false, false, false, true, false, false);
		}
		if (five)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (six)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (seven)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			workAndPowerCalcMenu(false, false, false, false, false, false, true);
		}
		if (two)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (three)
		{
			workAndPowerCalcMenu(false, true, false, false, false, false, false);
		}
		if (four)
		{
			workAndPowerCalcMenu(false, false, true, false, false, false, false);
		}
		if (five)
		{
			workAndPowerCalcMenu(false, false, false, true, false, false, false);
		}
		if (six)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (seven)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
	}
	if (option == 'd' || option == 'D')
	{
		if (one)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (two)
		{
			workAndPowerCalcMenu(false, true, false, false, false, false, false);
		}
		if (three)
		{
			workAndPowerCalcMenu(false, false, true, false, false, false, false);
		}
		if (four)
		{
			workAndPowerCalcMenu(false, false, false, true, false, false, false);
		}
		if (five)
		{
			workAndPowerCalcMenu(false, false, false, false, false, false, true);
		}
		if (six)
		{
			workAndPowerCalcMenu(false, false, false, false, true, false, false);
		}
		if (seven)
		{
			workAndPowerCalcMenu(false, false, false, false, false, true, false);
		}
	}

	if (option == 'a' || option == 'A')
	{
		if (one)
		{
			workAndPowerCalcMenu(true, false, false, false, false, false, false);
		}
		if (two)
		{
			workAndPowerCalcMenu(false, true, false, false, false, false, false);
		}
		if (three)
		{
			workAndPowerCalcMenu(false, false, true, false, false, false, false);
		}
		if (four)
		{
			workAndPowerCalcMenu(false, false, false, true, false, false, false);
		}
		if (five)
		{
			workAndPowerCalcMenu(false, false, false, false, false, true, false);
		}
		if (six)
		{
			workAndPowerCalcMenu(false, false, false, false, false, false, true);
		}
		if (seven)
		{
			workAndPowerCalcMenu(false, false, false, false, true, false, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			work();
		}
		if (two)
		{
			system("cls");
			force();
		}
		if (three)
		{
			system("cls");
			displacementByWork();
		}
		if (four)
		{
			system("cls");
			power();
		}
		if (five)
		{
			system("cls");
			findWorkByPower();
		}
		if (six)
		{
			system("cls");
			findTimeByPower();
		}
		if (seven)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startWorkAndPowerCalc() {
	workAndPowerCalcMenu(true, false, false, false, false, false, false);
}