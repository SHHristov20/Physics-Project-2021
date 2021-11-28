#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc5() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | | Px  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  p  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  g  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |  h  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void calcTitle5()
{
	system("cls");
	std::cout << " _   _               _                        _             _     _            ____                                                  " << std::endl;
	std::cout << "| | | |  _   _    __| |  _ __    ___    ___  | |_    __ _  | |_  (_)   ___    |  _ \   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << " | |_| | | | | |  / _` | | '__|  / _ \  / __| | __|  / _` | | __| | |  / __|   | |_) | | '__|  / _ \ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "|  _  | | |_| | | (_| | | |    | (_) | \__ \ | |_  | (_| | | |_  | | | (__    |  __/  | |    |  __/ \__ \ \__ \ | |_| | | |    |  __/" << std::endl;
	std::cout << " |_| |_|  \__, |  \__,_| |_|     \___/  |___/  \__|  \__,_|  \__| |_|  \___|   |_|     |_|     \___| |___/ |___/  \__,_| |_|     \___|" << std::endl;
	std::cout << "          |___/                                                                                                                       " << std::endl << std::endl << std::endl << std::endl;
}
void pressure()
{
		float P, p, g = 10, h;
		system("cls");
		printCalc5();

		gotoXY(3, 2);
		std::cout << "Density(p) = ";
		std::cin >> p;

		gotoXY(3, 3);
		std::cout << "Height(h) = ";
		std::cin >> h;

		gotoXY(3, 4);
		std::cout << "Pressure(P) = " << float(p * g * h) << "Pa";
		Sleep(3000);
		system("cls");

		printCalc5();
		gotoXY(3, 2);
		std::cout << "Press any key to";

		gotoXY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void depthPressure()
{
	float P, Pa, p, g = 10, h;
	system("cls");
	printCalc5();

	gotoXY(3, 2);
	std::cout << "Pressure(Pa) = ";
	std::cin >> Pa;

	gotoXY(3, 3);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 4);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(3, 5);
	std::cout << "Depth pressure(P) = " << float(Pa + p * g * h);
	Sleep(3000);
	system("cls");

	printCalc5();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void height()
{
	float P, p, g = 10, h;
	system("cls");
	printCalc5();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 4);
	std::cout << "Height(h) = " << float((p * g) / P) << "cm";
	Sleep(3000);
	system("cls");

	printCalc5();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void density()
{
	float P, p, g = 10, h;
	system("cls");
	printCalc5();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(3, 4);
	std::cout << "Density(p) = " << float((h * g) / P) << "Pa";
	Sleep(3000);
	system("cls");

	printCalc5();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void calcMenu5(bool one, bool two, bool three, bool four, bool five) {
	calcTitle5();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Pressure" << std::endl;
	}
	else
	{
		std::cout << "   Pressure" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Depth pressure" << std::endl;
	}
	else
	{
		std::cout << "   Depth pressure" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Height" << std::endl;
	}
	else
	{
		std::cout << "   Height" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Density" << std::endl;
	}
	else
	{
		std::cout << "   Density" << std::endl;
	}

	if (five)
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
			calcMenu5(false, true, false, false, false);
		}
		if (two)
		{
			calcMenu5(false, false, true, false, false);
		}
		if (three)
		{
			calcMenu5(false, false, false, true, false);
		}

		if (four)
		{
			calcMenu5(false, false, false, false, true);
		}
		if (five)
		{
			calcMenu5(true, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu5(false, false, false, false, true);
		}
		if (two)
		{
			calcMenu5(true, false, false, false, false);
		}
		if (three)
		{
			calcMenu5(false, true, false, false, false);
		}
		if (four)
		{
			calcMenu5(false, false, true, false, false);
		}
		if (five)
		{
			calcMenu5(false, false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			pressure();
		}
		if (two)
		{
			system("cls");
			depthPressure();
		}
		if (three)
		{
			system("cls");
			height();
		}
		if (four)
		{
			system("cls");
			density();
		}
		if (five)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator5()
{
	calcMenu5(true, false, false, false, false);
}