#pragma once

#include <iostream>
#include <conio.h>
#include <cmath>
#include "calculatorsMenu.h"

void acceleration()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Final speed(v) = ";
	std::cin >> v;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << std::endl << "Acceleration(a) = " << float((v - v0) / t) << "m/s" << char(253);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}

void displacement()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Displacement(s) = " << v0 * t + ((a * pow(t, 2)) / 2);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void fSpeed()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Final Speed(v) = " << v0 + (a * t);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void time()
{
	float v = 0, a = 0;
	system("cls");
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << "Final Speed(v) = ";
	std::cin >> v;
	std::cout << std::endl << "Time(t) = " << v / a;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}

void calcTitle() {
	system("cls");
	std::cout << std::endl << "\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}
void menu(bool one, bool two, bool three, bool four, bool five) {
	calcTitle();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Acceleration" << std::endl;
	}
	else
	{
		std::cout << "   Acceleration" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Displacement" << std::endl;
	}
	else
	{
		std::cout << "   Displacement" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Final speed" << std::endl;
	}
	else
	{
		std::cout << "   Final speed" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Time" << std::endl;
	}
	else
	{
		std::cout << "   Time" << std::endl;
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
			menu(false, true, false, false, false);
		}
		if (two)
		{
			menu(false, false, true, false, false);
		}
		if (three)
		{
			menu(false, false, false, true, false);
		}

		if (four)
		{
			menu(false, false, false, false, true);
		}
		if (five)
		{
			menu(true, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			menu(false, false, false, false, true);
		}
		if (two)
		{
			menu(true, false, false, false, false);
		}
		if (three)
		{
			menu(false, true, false, false, false);
		}
		if (four)
		{
			menu(false, false, true, false, false);
		}
		if (five)
		{
			menu(false, false, false, true, false);
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
	}
}

void startCalculator1() {
	menu(true, false, false, false, false);
}




