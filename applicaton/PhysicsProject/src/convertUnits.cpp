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
void calcDesign8() {
	std::cout << " _______________________________________________" << std::endl;
	std::cout << "|  ___________________________________________  |" << std::endl;
	std::cout << "| |  Welcome to our Physics calculator!       | |" << std::endl;
	std::cout << "| |  Choose yours and press ENTER!            | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |  (Navigate using W, A, S, D)              | |" << std::endl;
	std::cout << "| |___________________________________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |   km/h to m/s   |       |  kg/m3 to g/cm3 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |   m/s to km/h   |       |  g/cm3 to kg/m3 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    seconds to   |       |    m3 to cm3    | |" << std::endl;
	std::cout << "| |     minutes     |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    minutes to   |       |    cm3 to m3    | |" << std::endl;
	std::cout << "| |     seconds     |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|               _________________               |" << std::endl;
	std::cout << "|              |       Back      |              |" << std::endl;
	std::cout << "|              |                 |              |" << std::endl;
	std::cout << "|              |                 |              |" << std::endl;
	std::cout << "|              |_________________|              |" << std::endl;
	std::cout << "|_______________________________________________|" << std::endl;
}

void enteredChoice8() {
	std::cout << " _______________________________________________" << std::endl;
	std::cout << "|  ___________________________________________  |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |                                           | |" << std::endl;
	std::cout << "| |___________________________________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |   km/h to m/s   |       |  kg/m3 to g/cm3 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |   m/s to km/h   |       |  g/cm3 to kg/m3 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    seconds to   |       |    m3 to cm3    | |" << std::endl;
	std::cout << "| |     minutes     |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|  _________________         _________________  |" << std::endl;
	std::cout << "| |    minutes to   |       |    cm3 to m3    | |" << std::endl;
	std::cout << "| |     seconds     |       |                 | |" << std::endl;
	std::cout << "| |                 |       |                 | |" << std::endl;
	std::cout << "| |_________________|       |_________________| |" << std::endl;
	std::cout << "|               _________________               |" << std::endl;
	std::cout << "|              |       Back      |              |" << std::endl;
	std::cout << "|              |                 |              |" << std::endl;
	std::cout << "|              |                 |              |" << std::endl;
	std::cout << "|              |_________________|              |" << std::endl;
	std::cout << "|_______________________________________________|" << std::endl;
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


void calcMenu8(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine)
{
	calcTitle8();
	if (one)
	{
		calcDesign8();
		gotoXY(9, 19);
		std::cout << "±±±±±";
	}
	if (two)
	{
		calcDesign8();
		gotoXY(9, 24);
		std::cout << "±±±±±";
	}
	if (three)
	{
		calcDesign8();
		gotoXY(9, 29);
		std::cout << "±±±±±";
	}
	if (four)
	{
		calcDesign8();
		gotoXY(9, 34);
		std::cout << "±±±±±";
	}
	if (five)
	{
		calcDesign8();
		gotoXY(35, 19);
		std::cout << "±±±±±";
	}
	if (six)
	{
		calcDesign8();
		gotoXY(35, 24);
		std::cout << "±±±±±";
	}
	if (seven)
	{
		calcDesign8();
		gotoXY(35, 29);
		std::cout << "±±±±±";
	}
	if (eight)
	{
		calcDesign8();
		gotoXY(35, 34);
		std::cout << "±±±±±";
	}
	if (nine)
	{
		calcDesign8();
		gotoXY(22, 39);
		std::cout << "±±±±±";
	}

	const char option = _getch();

	if (option == 'w' or option == 'W')
	{
		if (one)
		{
			system("cls");
			calcMenu8(false, false, false, true, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			calcMenu8(true, false, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			calcMenu8(false, true, false, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			calcMenu8(false, false, true, false, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}
		if (six)
		{
			system("cls");
			calcMenu8(false, false, false, false, true, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, true, false, false, false);
		}
		if (eight)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, true, false, false);
		}
		if (nine)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}
	}

	if (option == 's' or option == 'S')
	{
		if (one)
		{
			system("cls");
			calcMenu8(false, true, false, false, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			calcMenu8(false, false, true, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			calcMenu8(false, false, false, true, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, false, true);
		}
		if (five)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, true, false, false, false);
		}
		if (six)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, true, false, false);
		}
		if (seven)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}
		if (eight)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, false, true);
		}
		if (nine)
		{
			system("cls");
			calcMenu8(true, false, false, false, false, false, false, false, false);
		}
	}

	if (option == 'a' or option == 'A' or option == 'd' or option == 'D')
	{
		if (one)
		{
			system("cls");
			calcMenu8(false, false, false, false, true, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, true, false, false, false);
		}
		if (three)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, true, false, false);
		}
		if (four)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, true, false);
		}
		if (five)
		{
			system("cls");
			calcMenu8(true, false, false, false, false, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			calcMenu8(false, true, false, false, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			calcMenu8(false, false, true, false, false, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			calcMenu8(false, false, false, true, false, false, false, false, false);
		}
		if (nine)
		{
			system("cls");
			calcMenu8(false, false, false, false, false, false, false, false, true);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert1();
		}
		if (two)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert2();
		}
		if (three)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert3();
		}
		if (four)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert4();
		}
		if (five)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert5();
		}
		if (six)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert6();
		}
		if (seven)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
			system("cls");
			convert7();
		}
		if (eight)
		{
			system("cls");
			enteredChoice8();
			gotoXY(4, 2);
			std::cout << "Loading...";

			Sleep(3000);
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