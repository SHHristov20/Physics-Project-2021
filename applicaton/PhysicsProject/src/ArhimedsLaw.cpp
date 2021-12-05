#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

/// <summary>
/// Calculator
/// </summary>
void arhimedsLawCalculator() {
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
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   m   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   p   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   /   |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
/// <summary>
/// Calculator Design
/// </summary>
void arhimedsLawCalculatorDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Arhimed's law Calculator       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, S, Enter)   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   F   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |   m   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |   p   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   B   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   /   |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
/// <summary>
/// Title
/// </summary>
void arhimedsLawTitle()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t     _             _       _                          _   _           _                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t    / \\     _ __  | |__   (_)  _ __ ___     ___    __| | ( )  ___    | |   __ _  __      __" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t   / _ \\   | '__| | '_ \\  | | | '_ ` _ \\   / _ \\  / _` | |/  / __|   | |  / _` | \\ \\ /\\ / /" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t  / ___ \\  | |    | | | | | | | | | | | | |  __/ | (_| |     \\__ \\   | | | (_| |  \\ V  V / " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t /_/   \\_\\ |_|    |_| |_| |_| |_| |_| |_|  \\___|  \\__,_|     |___/   |_|  \\__,_|   \\_/\\_/  " << std::endl << std::endl << std::endl << std::endl;;
}
/// <summary>
/// Finding repulsive force
/// </summary>
void repulsiveForce()
{
	float p = 0, V = 0, g = 10;
	system("cls");
	arhimedsLawTitle();
	arhimedsLawCalculator();

	gotoXY(100, 11);
	std::cout << "Density(p) = ";
	std::cin >> p;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Density(p) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> p;
	}

	gotoXY(100, 12);
	std::cout << "Volume(V) = ";
	std::cin >> V;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Density(p) = " << p;
		gotoXY(100, 12);
		std::cout << "Volume(V) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> V;
	}

	gotoXY(100, 13);
	std::cout << "Repulsive force(Fa) = " << float(p * V * g) << "N";
	Sleep(3000);
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
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
void volume()
{
	float p = 0, F = 0, g = 10;
	system("cls");
	arhimedsLawTitle();
	arhimedsLawCalculator();

	gotoXY(100, 11);
	std::cout << "Density(p) = ";
	std::cin >> p;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Density(p) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> p;
	}

	gotoXY(100, 12);
	std::cout << "Repulsive force(Fa) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Density(p) = " << p;
		gotoXY(100, 12);
		std::cout << "Repulsive force(Fa) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> p;
	}

	gotoXY(100, 13);
	std::cout << "Volume(V) = " << float(F / p / 10) << "kg/m3";
	Sleep(3000);
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
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
/// Finding density
/// </summary>
void Density()
{
	float V = 0, F = 0, g = 10;
	system("cls");
	arhimedsLawTitle();
	arhimedsLawCalculator();

	gotoXY(100, 11);
	std::cout << "Repulsive force(Fa) = ";
	std::cin >> F;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Repulsive force(Fa) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> F;
	}

	gotoXY(100, 12);
	std::cout << "Volume(V) = ";
	std::cin >> V;

	if (!std::cin)
	{
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		arhimedsLawTitle();
		arhimedsLawCalculator();

		gotoXY(100, 11);
		std::cout << "Repulsive force(Fa) = " << F;
		gotoXY(100, 12);
		std::cout << "Volume(V) = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> V;
	}

	gotoXY(100, 13);
	std::cout << "Density(p) = " << float(F / V / 10) << "m3";
	Sleep(3000);
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	arhimedsLawTitle();
	arhimedsLawCalculator();
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
void arhimedsLawMenu(bool one, bool two, bool three, bool four, bool five) {
	arhimedsLawTitle();


	if (one)
	{
		arhimedsLawCalculatorDesign();
		gotoXY(128, 18);
		std::cout << "± ";
	}

	if (two)
	{
		arhimedsLawCalculatorDesign();
		gotoXY(128, 21);
		std::cout << "± ";
	}
	if (three)
	{
		arhimedsLawCalculatorDesign();
		gotoXY(128, 24);
		std::cout << "± ";
	}

	if (four)
	{
		arhimedsLawCalculatorDesign();
		gotoXY(128, 27);
		std::cout << "± ";
	}
	if (five)
	{
		arhimedsLawCalculatorDesign();
		gotoXY(128, 30);
		std::cout << "± ";
	}
	
	start:
	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			arhimedsLawMenu(false, true, false, false, false);
		}
		if (two)
		{
			arhimedsLawMenu(false, false, true, false, false);
		}
		if (three)
		{
			arhimedsLawMenu(false, false, false, true, false);
		}

		if (four)
		{
			arhimedsLawMenu(false, false, false, false, true);
		}
		if (five)
		{
			arhimedsLawMenu(true, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			arhimedsLawMenu(false, false, false, false, true);
		}
		if (two)
		{
			arhimedsLawMenu(true, false, false, false, false);
		}
		if (three)
		{
			arhimedsLawMenu(false, true, false, false, false);
		}
		if (four)
		{
			arhimedsLawMenu(false, false, true, false, false);
		}
		if (five)
		{
			arhimedsLawMenu(false, false, false, true, false);
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
	else
	{
		goto start;
	}
}

/// <summary>
/// Start the calculator
/// </summary>
void startArhimedsLawCalc()
{
	arhimedsLawMenu(true, false, false, false, false);
}