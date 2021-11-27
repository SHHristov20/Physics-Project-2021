#pragma once
#pragma once
#include <iostream>
#include "increasingAccCalc.h"
#include "calculatorsMenu.h"
#include "decreasingAccCalc.h"
#include "freeFallCalc.h"
void printTitle() {
	std::cout << std::endl << "\t\t\t\t   ____      _            _       _                 " << std::endl;
	std::cout << "\t\t\t\t  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ ___ " << std::endl;
	std::cout << "\t\t\t\t | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__/ __|" << std::endl;
	std::cout << "\t\t\t\t | |__| (_| | | (__| |_| | | (_| | || (_) | |  \\__ \\" << std::endl;
	std::cout << "\t\t\t\t  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|  |___/" << std::endl << std::endl << std::endl << std::endl;
}


void activeChoise(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine, bool ten)
{

	printTitle();
	if (one)
	{
		std::cout << "-> " << "Increasing acceleration" << std::endl;
	}
	else
	{
		std::cout << "   Increasing acceleration" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Decreasing acceleration" << std::endl;
	}
	else
	{
		std::cout << "   Decreasing acceleration" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Free fall" << std::endl;
	}
	else
	{
		std::cout << "   Free fall" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Mechanical work and power" << std::endl;
	}
	else
	{
		std::cout << "   Mechanical work and power" << std::endl;
	}

	if (five)
	{
		std::cout << "-> " << "Hydrostatic pressure" << std::endl;
	}
	else
	{
		std::cout << "   Hydrostatic pressure" << std::endl;
	}

	if (six)
	{
		std::cout << "-> " << "Pressure" << std::endl;
	}
	else
	{
		std::cout << "   Pressure" << std::endl;
	}

	if (seven)
	{
		std::cout << "-> " << "Arhimed's law" << std::endl;
	}
	else
	{
		std::cout << "   Arhimed's law" << std::endl;
	}
	if (eight)
	{
		std::cout << "-> " << "Convert units of measurement" << std::endl;
	}
	else
	{
		std::cout << "   Convert units of measurement" << std::endl;
	}
	if (nine)
	{
		std::cout << "-> " << "Formulas" << std::endl;
	}
	else
	{
		std::cout << "   Formulas" << std::endl;
	}

	if (ten)
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
			system("cls");
			activeChoise(false, true, false, false, false, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			activeChoise(false, false, true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			activeChoise(false, false, false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			activeChoise(false, false, false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			activeChoise(false, false, false, false, false, true, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, true, false, false, false);
		}
		if (seven)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, true, false, false);
		}
		if (eight)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, true, false);
		}
		if (nine)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, false, true);
		}
		if (ten)
		{
			system("cls");
			activeChoise(true, false, false, false, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			system("cls");
			activeChoise(true, false, false, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			activeChoise(false, true, false, false, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			activeChoise(false, false, true, false, false, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			activeChoise(false, false, false, true, false, false, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			activeChoise(false, false, false, false, true, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			activeChoise(false, false, false, false, false, true, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, true, false, false, false);
		}
		if (nine)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, true, false, false);
		}
		if (ten)
		{
			system("cls");
			activeChoise(false, false, false, false, false, false, false, false, true, false);
		}
	}
	if (option == 13)
	{
		if(one)
		{
			system("cls");
			startCalculator1();
		}
		if(two)
		{
			system("cls");
			startCalculator2();
		}
		if (three)
		{
			system("cls");
			startCalculator3();
		}
	}
}
void printCalculatorsMenu()
{
	activeChoise(true, false, false, false, false, false, false, false, false, false);
}