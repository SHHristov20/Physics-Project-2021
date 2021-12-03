#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc6() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   S   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void calcDesign6() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Pressure Calculator            |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)    |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   S   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   P   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void calcTitle6()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t\t\t  ____                                                  " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  _ \\   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |_) | | '__|  / _ \\ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |  __/  | |    |  __/ \\__ \\ \\__ \\ | |_| | | |    |  __/" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t |_|     |_|     \\___| |___/ |___/  \\__,_| |_|     \\___|" << std::endl << std::endl << std::endl << std::endl;;
}
void Pressure()
{
	float S = 0, F = 0;
	system("cls");
	calcTitle6();
	printCalc6();

	gotoXY(100, 11);
	std::cout << "Force(F) = ";
	std::cin >> F;

	gotoXY(100, 12);
	std::cout << "Area(S) = ";
	std::cin >> S;

	gotoXY(100, 13);
	std::cout << "Pressure(P) = " << float(F / S) << "Pa";
	Sleep(3000);
	system("cls");

	calcTitle6();
	printCalc6();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle6();
	printCalc6();
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
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void Area()
{
	float P = 0, F = 0;
	system("cls");
	calcTitle6();
	printCalc6();

	gotoXY(100, 11);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(100, 12);
	std::cout << "Force(F) = ";
	std::cin >> F;


	gotoXY(100, 13);
	std::cout << "Area(S) = " << float(F / P) << "m2";
	Sleep(3000);
	system("cls");

	calcTitle6();
	printCalc6();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle6();
	printCalc6();
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
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}
void Force()
{
	float S = 0, P = 0;
	system("cls");
	calcTitle6();
	printCalc6();

	gotoXY(100, 11);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(100, 12);
	std::cout << "Area(S) = ";
	std::cin >> S;

	gotoXY(100, 13);
	std::cout << "Force(F) = " << float(P * S) << "N";
	Sleep(3000);
	system("cls");

	calcTitle6();
	printCalc6();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle6();
	printCalc6();
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
	Sleep(3000);
	system("cls");
	printCalculatorsMenu();
}

void calcMenu6(bool one, bool two, bool three, bool four) {
	calcTitle6();


	if (one)
	{
		calcDesign6();
		gotoXY(128, 18);
		std::cout << "± ";
	}

	if (two)
	{
		calcDesign6();
		gotoXY(128, 21);
		std::cout << "± ";
	}
	if (three)
	{
		calcDesign6();
		gotoXY(128, 24);
		std::cout << "± ";
	}

	if (four)
	{
		calcDesign6();
		gotoXY(128, 27);
		std::cout << "± ";
	}

	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			calcMenu6(false, true, false, false);
		}
		if (two)
		{
			calcMenu6(false, false, true, false);
		}
		if (three)
		{
			calcMenu6(false, false, false, true);
		}

		if (four)
		{
			calcMenu6(true, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu6(false, false, false, true);
		}
		if (two)
		{
			calcMenu6(true, false, false, false);
		}
		if (three)
		{
			calcMenu6(false, true, false, false);
		}
		if (four)
		{
			calcMenu6(false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			Pressure();
		}
		if (two)
		{
			system("cls");
			Area();
		}
		if (three)
		{
			system("cls");
			Force();
		}
		if (four)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator6()
{
	calcMenu6(true, false, false, false);
}