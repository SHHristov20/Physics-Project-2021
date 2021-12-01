#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc8() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  m3 |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | | cm3 |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | | min |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |  s  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |g/cm3|kg/m3|     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void calcTitle8()
{
	system("cls");
	std::cout << std::endl << "   ____                                         _       _   _           _   _         " << std::endl;
	std::cout << "  / ___|   ___    _ __   __   __   ___   _ __  | |_    | | | |  _ __   (_) | |_   ___ " << std::endl;
	std::cout << " | |      / _ \\  | '_ \\  \\ \\ / /  / _ \\ | '__| | __|   | | | | | '_ \\  | | | __| / __|" << std::endl;
	std::cout << " | |___  | (_) | | | | |  \\ V /  |  __/ | |    | |_    | |_| | | | | | | | | |_  \\__ \\" << std::endl;
	std::cout << "  \\____|  \\___/  |_| |_|   \\_/    \\___| |_|     \\__|    \\___/  |_| |_| |_|  \\__| |___/" << std::endl << std::endl << std::endl << std::endl;;
}

void convert1()
{
	float kmh = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "km/h = ";
	std::cin >> kmh;
	gotoXY(3, 3);
	std::cout << kmh << "km/h = " << kmh/3.6 <<"m/s";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert2()
{
	float ms = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "m/s = ";
	std::cin >> ms;
	gotoXY(3, 3);
	std::cout << ms << "m/s = " << ms * 3.6 << "km/h";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert3()
{
	float s = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "s = ";
	std::cin >> s;
	gotoXY(3, 3);
	std::cout << s << "s = " << s / 60 << "min";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert4()
{
	float min = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "min = ";
	std::cin >> min;
	gotoXY(3, 3);
	std::cout << min << "min = " << min * 60 << "s";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert5()
{
	float kgm = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "kg/m3 = ";
	std::cin >> kgm;
	gotoXY(3, 3);
	std::cout << kgm << "kg/m3 = " << kgm * 1000 << "g/cm3";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void convert6()
{
	float gcm = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "g/cm3 = ";
	std::cin >> gcm;
	gotoXY(3, 3);
	std::cout << gcm << "g/cm3 = " << gcm / 1000 << "kg/m3";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert7()
{
	float m3 = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "m3 = ";
	std::cin >> m3;
	gotoXY(3, 3);
	std::cout << m3 << "m3 = " << m3 * 1000000 << "cm3";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void convert8()
{
	float cm3 = 0;
	system("cls");
	printCalc8();

	gotoXY(3, 2);
	std::cout << "cm3 = ";
	std::cin >> cm3;
	gotoXY(3, 3);
	std::cout << cm3 << "cm3 = " << cm3 / 1000000 << "m3";
	Sleep(3000);
	system("cls");

	printCalc8();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}

void calcMenu8(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine) {
	calcTitle8();


	std::cout << "   Convert" << std::endl;
	if (one)
	{
		std::cout << "-> " << "km/h to m/s" << std::endl;
	}
	else
	{
		std::cout << "   km/h to m/s" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "m/s to km/h" << std::endl << std::endl;
	}
	else
	{
		std::cout << "   m/s to km/h" << std::endl << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "seconds to minutes" << std::endl;
	}
	else
	{
		std::cout << "   seconds to minutes" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "minutes to seconds" << std::endl << std::endl;
	}
	else
	{
		std::cout << "   minutes to seconds" << std::endl << std::endl;
	}
	if (five)
	{
		std::cout << "-> " << "kg/m3 to g/cm3" << std::endl;
	}
	else
	{
		std::cout << "   kg/m3 to g/cm3" << std::endl;
	}
	if (six)
	{
		std::cout << "-> " << "g/cm3 to kg/m3" << std::endl << std::endl;
	}
	else
	{
		std::cout << "   g/cm3 to kg/m3" << std::endl << std::endl;
	}
	if (seven)
	{
		std::cout << "-> " << "m3 to cm3" << std::endl;
	}
	else
	{
		std::cout << "   m3 to cm3" << std::endl;
	}
	if (eight)
	{
		std::cout << "-> " << "cm3 to m3" << std::endl << std::endl;
	}
	else
	{
		std::cout << "   cm3 to m3" << std::endl << std::endl;
	}
	if (nine)
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
			calcMenu8(false, true, false, false, false, false, false, false, false);
		}
		if (two)
		{
			calcMenu8(false, false, true, false, false, false, false, false, false);
		}
		if (three)
		{
			calcMenu8(false, false, false, true, false, false, false, false, false);
		}

		if (four)
		{
			calcMenu8(false, false, false, false, true, false, false, false, false);
		}
		if (five)
		{
			calcMenu8(false, false, false, false, false, true, false, false, false);
		}
		if (six)
		{
			calcMenu8(false, false, false, false, false, false, true, false, false);
		}
		if (seven)
		{
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}

		if (eight)
		{
			calcMenu8(false, false, false, false, false, false, false, false, true);
		}
		if (nine)
		{
			calcMenu8(true, false, false, false, false, false, false, false, false);
		}
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			calcMenu8(false, false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			calcMenu8(true, false, false, false, false, false, false, false, false);
		}
		if (three)
		{
			calcMenu8(false, true, false, false, false, false, false, false, false);
		}
		if (four)
		{
			calcMenu8(false, false, true, false, false, false, false, false, false);
		}
		if (five)
		{
			calcMenu8(false, false, false, true, false, false, false, false, false);
		}
		if (six)
		{
			calcMenu8(false, false, false, false, true, false, false, false, false);
		}		
		if (seven)
		{
			calcMenu8(false, false, false, false, false, true, false, false, false);
		}
		if (eight)
		{
			calcMenu8(false, false, false, false, false, false, true, false, false);
		}
		if (nine)
		{
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			convert1();
		}
		if (two)
		{
			system("cls");
			convert2();
		}
		if (three)
		{
			system("cls");
			convert3();
		}
		if (four)
		{
			system("cls");
			convert4();
		}
		if (five)
		{
			system("cls");
			convert5();
		}
		if (six)
		{
			system("cls");
			convert6();
		}
		if (seven)
		{
			system("cls");
			convert7();
		}
		if (eight)
		{
			system("cls");
			convert8();
		}
		if (nine)
		{
			system("cls");
			printCalculatorsMenu();
		}
	}
}
void startCalculator8()
{
	calcMenu8(true, false, false, false, false, false, false, false, false);
}