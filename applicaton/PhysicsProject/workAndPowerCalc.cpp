#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "calculatorsMenu.h"
#include "workAndPowerCalc.h"

void printCalc4()
{
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  A  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  F  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  s  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | | -F  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |  t  | |  P  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void gotoxY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void work()
{
	float A, F, s;
	system("cls");
	printCalc4();

	gotoxY(3, 2);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoxY(3, 3);
	std::cout << "Displacement = ";
	std::cin >> s;

	gotoxY(3, 4);
	std::cout << "Work(a) = " << float(F * s) << "J";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoxY(3, 2);
	std::cout << "Press any key to";

	gotoxY(3, 3);
	std::cout << "Continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void force()
{
	float A, F, s;
	system("cls");
	printCalc4();

	gotoxY(3, 2);
	std::cout << "Work(A) = ";
	std::cin >> A;

	gotoxY(3, 3);
	std::cout << "Displacement(s) = ";
	std::cin >> s;

	gotoxY(3, 4);
	std::cout << "Force(F) = " << float(s / A);
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoxY(3, 2);
	std::cout << "Press any key to";

	gotoxY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void displacementByWork()
{
	float A, F, s;
	system("cls");
	printCalc4();

	gotoxY(3, 2);
	std::cout << "Work(A) = ";
	std::cin >> A;

	gotoxY(3, 3);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoxY(4, 4);
	std::cout << "Displacement(s) = " << float(F / A) << "m/s";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoxY(3, 2);
	std::cout << "Press any key to";

	gotoxY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void power()
{
		float P, A, t;
		system("cls");
		printCalc4();

		gotoxY(3, 2);
		std::cout << "Work(A) = ";
		std::cin >> A;

		gotoxY(3, 3);
		std::cout << "time(t) = ";
		std::cin >> t;

		gotoxY(4, 4);
		std::cout << "Power(P) = " << float(A / t) << "W";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoxY(3, 2);
		std::cout << "Press any key to";

		gotoxY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void findWorkByPower()
{
		float A, P, t;
		system("cls");
		printCalc4();

		gotoxY(3, 2);
		std::cout << "Time(t) = ";
		std::cin >> t;

		gotoxY(3, 3);
		std::cout << "Force(P) = ";
		std::cin >> P;

		gotoxY(4, 4);
		std::cout << "Work(A) = " << float(P / t) << "J";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoxY(3, 2);
		std::cout << "Press any key to";

		gotoxY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void findTimeByPower()
{
		float A, P, t;
		system("cls");
		printCalc4();

		gotoxY(3, 2);
		std::cout << "Work(A) = ";
		std::cin >> A;

		gotoxY(3, 3);
		std::cout << "Power(P) = ";
		std::cin >> P;

		gotoxY(4, 4);
		std::cout << "Time(t) = " << float(A / P) << "s";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoxY(3, 2);
		std::cout << "Press any key to";

		gotoxY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void menu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven) {

	system("cls");
	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Work" << std::endl;
	}
	else
	{
		std::cout << "   Work" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Force" << std::endl;
	}
	else
	{
		std::cout << "   Force" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Displacement" << std::endl;
	}
	else
	{
		std::cout << "   Displacement" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Power" << std::endl;
	}
	else
	{
		std::cout << "   Power" << std::endl;
	}

	if (five)
	{
		std::cout << "-> " << "Work via power" << std::endl;
	}
	else
	{
		std::cout << "   Work via power" << std::endl;
	}
	if (six)
	{
		std::cout << "-> " << "Time via power" << std::endl;
	}
	else
	{
		std::cout << "   Time via power" << std::endl;
	}
	if (seven)
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
			menu(false, true, false, false, false, false, false);
		}
		if (two)
		{
			menu(false, false, true, false, false, false, false);
		}
		if (three)
		{
			menu(false, false, false, true, false, false, false);
		}

		if (four)
		{
			menu(false, false, false, false, true, false, false);
		}
		if (five)
		{
			menu(false, false, false, false, false, true, false);
		}
		if (six)
		{
			menu(false, false, false, false, false, false, true);
		}
		if (seven)
		{
			menu(true, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			menu(false, false, false, false, false, false, true);
		}
		if (two)
		{
			menu(true, false, false, false, false, false, false);
		}
		if (three)
		{
			menu(false, true, false, false, false, false, false);
		}
		if (four)
		{
			menu(false, false, true, false, false, false, false);
		}
		if (five)
		{
			menu(false, false, false, true, false, false, false);
		}
		if (six)
		{
			menu(false, false, false, false, true, false, false);
		}
		if (seven)
		{
			menu(false, false, false, false, false, true, false);
		}
	}

	
}
void startCalculator4() {
	menu(true, false, false, false, false, false, false);
}