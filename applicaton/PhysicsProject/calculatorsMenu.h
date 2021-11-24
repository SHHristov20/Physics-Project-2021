#pragma once
#pragma once
#include <iostream>

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
		std::cout << "   Increasing acceleraition" << std::endl;
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
}
void printCalculatorsMenu() {
	activeChoise(true, false, false, false, false, false, false, false, false, false);
}