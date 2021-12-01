#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc7() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  F  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  m  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  p  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |  g  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |  V  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void calcTitle7()
{
	system("cls");
	std::cout << std::endl << "     _             _       _                          _   _           _                    " << std::endl;
	std::cout << "    / \\     _ __  | |__   (_)  _ __ ___     ___    __| | ( )  ___    | |   __ _  __      __" << std::endl;
	std::cout << "   / _ \\   | '__| | '_ \\  | | | '_ ` _ \\   / _ \\  / _` | |/  / __|   | |  / _` | \\ \\ /\\ / /" << std::endl;
	std::cout << "  / ___ \\  | |    | | | | | | | | | | | | |  __/ | (_| |     \\__ \\   | | | (_| |  \\ V  V / " << std::endl;
	std::cout << " /_/   \\_\\ |_|    |_| |_| |_| |_| |_| |_|  \\___|  \\__,_|     |___/   |_|  \\__,_|   \\_/\\_/  " << std::endl << std::endl << std::endl << std::endl;;
}
void repulsiveForce()
{
	float p = 0, V = 0, g = 10;
	system("cls");
	printCalc7();

	gotoXY(3, 2);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 3);
	std::cout << "Volume(V) = ";
	std::cin >> V;

	gotoXY(3, 4);
	std::cout << "Repulsive force(Fa) = " << float(p * V * g) << "N";
	Sleep(3000);
	system("cls");

	printCalc7();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void volume()
{
	float p = 0, F = 0, g = 10;
	system("cls");
	printCalc7();

	gotoXY(3, 2);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 3);
	std::cout << "Repulsive force(Fa) = ";
	std::cin >> F;


	gotoXY(3, 4);
	std::cout << "Volume(V) = " << float(F / p / 10) << "kg/m3";
	Sleep(3000);
	system("cls");

	printCalc7();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void Density()
{
	float V = 0, F = 0, g = 10;
	system("cls");
	printCalc7();

	gotoXY(3, 2);
	std::cout << "Repulsive force(Fa) = ";
	std::cin >> F;

	gotoXY(3, 3);
	std::cout << "Volume(V) = ";
	std::cin >> V;

	gotoXY(3, 4);
	std::cout << "Density(p) = " << float(F / V / 10) << "m3";
	Sleep(3000);
	system("cls");

	printCalc7();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void calcMenu7(bool one, bool two, bool three, bool four) {
	calcTitle7();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Repulsive Force" << std::endl;
	}
	else
	{
		std::cout << "   Repulsive Force" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Volume" << std::endl;
	}
	else
	{
		std::cout << "   Volume" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Density" << std::endl;
	}
	else
	{
		std::cout << "   Density" << std::endl;
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
			calcMenu7(false, true, false, false);
		}
		if (two)
		{
			calcMenu7(false, false, true, false);
		}
		if (three)
		{
			calcMenu7(false, false, false, true);
		}

		if (four)
		{
			calcMenu7(true, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu7(false, false, false, true);
		}
		if (two)
		{
			calcMenu7(true, false, false, false);
		}
		if (three)
		{
			calcMenu7(false, true, false, false);
		}
		if (four)
		{
			calcMenu7(false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			repulsiveForce();
		}
		if (two)
		{
			system("cls");
			volume();
		}
		if (three)
		{
			system("cls");
			Density();
		}
		if (four)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator7()
{
	calcMenu7(true, false, false, false);
}