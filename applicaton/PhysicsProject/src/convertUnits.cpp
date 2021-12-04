#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void unitConverter() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |   m3  |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |  cm3  |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |  min  |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |   s   |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   /   |       | kg/m3 | | g/cm3 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}
void unitConverterTitle()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t   ____                                         _       _   _           _   _         " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t  / ___|   ___    _ __   __   __   ___   _ __  | |_    | | | |  _ __   (_) | |_   ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t | |      / _ \\  | '_ \\  \\ \\ / /  / _ \\ | '__| | __|   | | | | | '_ \\  | | | __| / __|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t | |___  | (_) | | | | |  \\ V /  |  __/ | |    | |_    | |_| | | | | | | | | |_  \\__ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t  \\____|  \\___/  |_| |_|   \\_/    \\___| |_|     \\__|    \\___/  |_| |_| |_|  \\__| |___/" << std::endl << std::endl << std::endl << std::endl;;
}
void unitConverterDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t _______________________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  ___________________________________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our Unit Convertor!           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |  Choose yours and press ENTER!            | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, A, S, D)              | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |___________________________________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |   km/h to m/s   |       |  kg/m3 to g/cm3 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |   m/s to km/h   |       |  g/cm3 to kg/m3 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |    seconds to   |       |    m3 to cm3    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |     minutes     |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  _________________         _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |    minutes to   |       |    cm3 to m3    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |     seconds     |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                 |       |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |_________________|       |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|               _________________               |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|              |       Back      |              |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|              |                 |              |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|              |                 |              |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|              |_________________|              |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|_______________________________________________|" << std::endl;
}

void kmhToMs()
{
	float kmh = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "km/h = ";
	std::cin >> kmh;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "km/h = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> kmh;
	}

	gotoXY(100, 12);
	std::cout << kmh << "km/h = " << kmh/3.6 <<"m/s";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();

	unitConverterTitle();
	unitConverter();
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

void msToKmh()
{
	float ms = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "m/s = ";
	std::cin >> ms;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "m/s = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> ms;
	}

	gotoXY(100, 12);
	std::cout << ms << "m/s = " << ms * 3.6 << "km/h";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	
	unitConverterTitle();
	unitConverter();
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

void secToMin()
{
	float s = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "s = ";
	std::cin >> s;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "s = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> s;
	}

	gotoXY(100, 12);
	std::cout << s << "s = " << s / 60 << "min";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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

void minToSec()
{
	float min = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "min = ";
	std::cin >> min;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "min = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> min;
	}

	gotoXY(100, 12);
	std::cout << min << "min = " << min * 60 << "s";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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

void kgm3ToGcm3()
{
	float kgm = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "kg/m3 = ";
	std::cin >> kgm;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "kg/m3 = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> kgm;
	}

	gotoXY(100, 12);
	std::cout << kgm << "kg/m3 = " << kgm * 1000 << "g/cm3";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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
void gcm3ToKgm3()
{
	float gcm = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "g/cm3 = ";
	std::cin >> gcm;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "g/cm = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> gcm;
	}

	gotoXY(100, 12);
	std::cout << gcm << "g/cm3 = " << gcm / 1000 << "kg/m3";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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

void m3toCm3()
{
	float m3 = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "m3 = ";
	std::cin >> m3;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "m3 = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> m3;
	}

	gotoXY(100, 12);
	std::cout << m3 << "m3 = " << m3 * 1000000 << "cm3";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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

void cm3ToM3()
{
	float cm3 = 0;
	system("cls");
	unitConverterTitle();
	unitConverter();

	gotoXY(100, 11);
	std::cout << "cm3 = ";
	std::cin >> cm3;

	if (!std::cin)
	{
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "Invalid number or symbol!";
		Sleep(2000);
		system("cls");
		unitConverterTitle();
		unitConverter();

		gotoXY(100, 11);
		std::cout << "cm3 = ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> cm3;
	}

	gotoXY(100, 12);
	std::cout << cm3 << "cm3 = " << cm3 / 1000000 << "m3";
	Sleep(3000);
	system("cls");

	unitConverterTitle();
	unitConverter();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	unitConverterTitle();
	unitConverter();
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


void unitConvertorMenu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine)
{
	unitConverterTitle();
	if (one)
	{
		unitConverterDesign();
		gotoXY(97, 19);
		std::cout << "±±±±±";
	}
	if (two)
	{
		unitConverterDesign();
		gotoXY(97, 24);
		std::cout << "±±±±±";
	}
	if (three)
	{
		unitConverterDesign();
		gotoXY(97, 29);
		std::cout << "±±±±±";
	}
	if (four)
	{
		unitConverterDesign();
		gotoXY(97, 34);
		std::cout << "±±±±±";
	}
	if (five)
	{
		unitConverterDesign();
		gotoXY(123, 19);
		std::cout << "±±±±±";
	}
	if (six)
	{
		unitConverterDesign();
		gotoXY(123, 24);
		std::cout << "±±±±±";
	}
	if (seven)
	{
		unitConverterDesign();
		gotoXY(123, 29);
		std::cout << "±±±±±";
	}
	if (eight)
	{
		unitConverterDesign();
		gotoXY(123, 34);
		std::cout << "±±±±±";
	}
	if (nine)
	{
		unitConverterDesign();
		gotoXY(110, 39);
		std::cout << "±±±±±";
	}

	const char option = _getch();

	if (option == 'w' or option == 'W')
	{
		if (one)
		{
			system("cls");
			unitConvertorMenu(false, false, false, true, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			unitConvertorMenu(true, false, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			unitConvertorMenu(false, true, false, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			unitConvertorMenu(false, false, true, false, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, true, false);
		}
		if (six)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, true, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, true, false, false, false);
		}
		if (eight)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, true, false, false);
		}
		if (nine)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, true, false);
		}
	}

	if (option == 's' or option == 'S')
	{
		if (one)
		{
			system("cls");
			unitConvertorMenu(false, true, false, false, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			unitConvertorMenu(false, false, true, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			unitConvertorMenu(false, false, false, true, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, false, true);
		}
		if (five)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, true, false, false, false);
		}
		if (six)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, true, false, false);
		}
		if (seven)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, true, false);
		}
		if (eight)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, false, true);
		}
		if (nine)
		{
			system("cls");
			unitConvertorMenu(true, false, false, false, false, false, false, false, false);
		}
	}

	if (option == 'a' or option == 'A' or option == 'd' or option == 'D')
	{
		if (one)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, true, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, true, false, false, false);
		}
		if (three)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, true, false, false);
		}
		if (four)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, true, false);
		}
		if (five)
		{
			system("cls");
			unitConvertorMenu(true, false, false, false, false, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			unitConvertorMenu(false, true, false, false, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			unitConvertorMenu(false, false, true, false, false, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			unitConvertorMenu(false, false, false, true, false, false, false, false, false);
		}
		if (nine)
		{
			system("cls");
			unitConvertorMenu(false, false, false, false, false, false, false, false, true);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			system("cls");
			kmhToMs();
		}
		if (two)
		{
			system("cls");
			msToKmh();
		}
		if (three)
		{
			system("cls");
			secToMin();
		}
		if (four)
		{
			system("cls");
			minToSec();
		}
		if (five)
		{
			system("cls");
			kgm3ToGcm3();
		}
		if (six)
		{
			system("cls");
			gcm3ToKgm3();
		}
		if (seven)
		{
			system("cls");
			m3toCm3();
		}
		if (eight)
		{
			system("cls");
			cm3ToM3();
		}
		if (nine)
		{
			system("cls");
			printCalculatorsMenu();
		}

	}
}

void startUnitConverter()
{
	unitConvertorMenu(true, false, false, false, false, false, false, false, false);
}