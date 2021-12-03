#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc5() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |  Px   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   h   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   p   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void calcDesign3()
{
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| | Welcome to our                  |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| | Hydrostatic Pressure Calculator |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| | (Navigate using W, A, S, D)     |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |  Px   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   h   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   p   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void calcTitle5()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t  _   _               _                        _             _     _            ____                                                  " << std::endl;
	std::cout << "\t\t\t\t\t\t\t | | | |  _   _    __| |  _ __    ___    ___  | |_    __ _  | |_  (_)   ___    |  _ \\   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t | |_| | | | | |  / _` | | '__|  / _ \\  / __| | __|  / _` | | __| | |  / __|   | |_) | | '__|  / _ \\ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t |  _  | | |_| | | (_| | | |    | (_) | \\__ \\ | |_  | (_| | | |_  | | | (__    |  __/  | |    |  __/ \\__ \\ \\__ \\ | |_| | | |    |  __/" << std::endl;
	std::cout << "\t\t\t\t\t\t\t |_| |_|  \\__, |  \\__,_| |_|     \\___/  |___/  \\__|  \\__,_|  \\__| |_|  \\___|   |_|     |_|     \\___| |___/ |___/  \\__,_| |_|     \\___|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t          |___/                                                                                                                       " << std::endl << std::endl << std::endl << std::endl;
}
void pressure()
{
	float P, p, g = 10, h;
	system("cls");
	calcTitle5();
	printCalc5();

	gotoXY(100, 12);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(100, 13);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(100, 14);
	std::cout << "Pressure(P) = " << float(p * g * h) << "Pa";
	Sleep(3000);
	system("cls");

	calcTitle5();
	printCalc5();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle5();
	printCalc5();
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
void depthPressure()
{
	float P, Pa, p, g = 10, h;
	system("cls");
	calcTitle5();
	printCalc5();

	gotoXY(100, 12);
	std::cout << "Pressure(Pa) = ";
	std::cin >> Pa;

	gotoXY(100, 13);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(100, 14);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(100, 15);
	std::cout << "Depth pressure(P) = " << float(Pa + p * g * h);
	Sleep(3000);
	system("cls");

	calcTitle5();
	printCalc5();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle5();
	printCalc5();
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
void height()
{
	float P, p, g = 10, h;
	system("cls");
	calcTitle5();
	printCalc5();

	gotoXY(100, 12);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(100, 13);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(100, 14);
	std::cout << "Height(h) = " << float((p * g) / P) << "cm";
	Sleep(3000);
	system("cls");

	calcTitle5();
	printCalc5();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle5();
	printCalc5();
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
void density()
{
	float P, p, g = 10, h;
	system("cls");
	calcTitle5();
	printCalc5();

	gotoXY(100, 12);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(100, 13);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(100, 14);
	std::cout << "Density(p) = " << float((h * g) / P) << "Pa";
	Sleep(3000);
	system("cls");

	calcTitle5();
	printCalc5();
	gotoXY(100, 12);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle5();
	printCalc5();
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
void calcMenu5(bool one, bool two, bool three, bool four, bool five) {
	calcTitle5();


	if (one)
	{
		calcDesign3();
		gotoXY(128, 19);
		std::cout << "± ";
	}
	if (two)
	{
		calcDesign3();
		gotoXY(128, 22);
		std::cout << "± ";
	}

	if (three)
	{
		calcDesign3();
		gotoXY(128, 25);
		std::cout << "± ";
	}

	if (four)
	{
		calcDesign3();
		gotoXY(128, 28);
		std::cout << "± ";
	}

	if (five)
	{
		calcDesign3();
		gotoXY(128, 31);
		std::cout << "± ";
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