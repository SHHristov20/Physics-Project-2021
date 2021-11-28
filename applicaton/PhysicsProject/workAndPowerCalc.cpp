#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include "calculatorsMenu.h"
#include "workAndPowerCalc.h"
#include "front-end.h"

void calcTitle2()
{
	system("cls");
	std::cout << "\\ \\      / /   ___    _ __  | | __     __ _   _ __     __| |   |  _ \\    ___   __      __   ___   _ __ " << std::endl;
	std::cout << "  \\ \\ /\\ / /   / _ \\  | '__| | |/ /    / _` | | '_ \\   / _` |   | |_) |  / _ \\  \\ \\ /\\ / /  / _ \\ | '__|" << std::endl;
	std::cout << "  \\ V  V /   | (_) | | |    |   <    | (_| | | | | | | (_| |   |  __/  | (_) |  \\ V  V /  |  __/ | |   " << std::endl;
	std::cout << "   \\_/\\_/     \\___/  |_|    |_|\\_\\    \\__,_| |_| |_|  \\__,_|   |_|      \\___/    \\_/\\_/    \\___| |_|   " << std::endl << std::endl << std::endl << std::endl;
}
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
void work()
{
	float A, F, s;
	system("cls");
	printCalc4();

	gotoXY(3, 2);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoXY(3, 3);
	std::cout << "Displacement = ";
	std::cin >> s;

	gotoXY(3, 4);
	std::cout << "Work(a) = " << float(F * s) << "J";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
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

	gotoXY(3, 2);
	std::cout << "Work(A) = ";
	std::cin >> A;

	gotoXY(3, 3);
	std::cout << "Displacement(s) = ";
	std::cin >> s;

	gotoXY(3, 4);
	std::cout << "Force(F) = " << float(s / A);
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
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

	gotoXY(3, 2);
	std::cout << "Work(A) = ";
	std::cin >> A;

	gotoXY(3, 3);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoXY(4, 4);
	std::cout << "Displacement(s) = " << float(F / A) << "m/s";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
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

		gotoXY(3, 2);
		std::cout << "Work(A) = ";
		std::cin >> A;

		gotoXY(3, 3);
		std::cout << "time(t) = ";
		std::cin >> t;

		gotoXY(4, 4);
		std::cout << "Power(P) = " << float(A / t) << "W";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoXY(3, 2);
		std::cout << "Press any key to";

		gotoXY(3, 3);
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

		gotoXY(3, 2);
		std::cout << "Time(t) = ";
		std::cin >> t;

		gotoXY(3, 3);
		std::cout << "Force(P) = ";
		std::cin >> P;

		gotoXY(4, 4);
		std::cout << "Work(A) = " << float(P / t) << "J";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoXY(3, 2);
		std::cout << "Press any key to";

		gotoXY(3, 3);
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

		gotoXY(3, 2);
		std::cout << "Work(A) = ";
		std::cin >> A;

		gotoXY(3, 3);
		std::cout << "Power(P) = ";
		std::cin >> P;

		gotoXY(4, 4);
		std::cout << "Time(t) = " << float(A / P) << "s";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoXY(3, 2);
		std::cout << "Press any key to";

		gotoXY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void menu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven) {
	calcTitle2();
	
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
void startCalculator4() {
	menu(true, false, false, false, false, false, false);
}