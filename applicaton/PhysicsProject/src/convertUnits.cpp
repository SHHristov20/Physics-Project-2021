#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc8() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  Welcome to our Unit Convertor  |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  (Navigate using W, S, Enter)   |  |" << std::endl;
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
void convertorDesign() {
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
void calcTitle8()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t   ____                                         _       _   _           _   _         " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t  / ___|   ___    _ __   __   __   ___   _ __  | |_    | | | |  _ __   (_) | |_   ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t | |      / _ \\  | '_ \\  \\ \\ / /  / _ \\ | '__| | __|   | | | | | '_ \\  | | | __| / __|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t | |___  | (_) | | | | |  \\ V /  |  __/ | |    | |_    | |_| | | | | | | | | |_  \\__ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t  \\____|  \\___/  |_| |_|   \\_/    \\___| |_|     \\__|    \\___/  |_| |_| |_|  \\__| |___/" << std::endl << std::endl << std::endl << std::endl;;
}
void calcDesign8() {
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

void enteredChoice8() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t _______________________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t|  ___________________________________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t| |                                           | |" << std::endl;
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

void convert1()
{
	float kmh = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "km/h = ";
	std::cin >> kmh;

	gotoXY(100, 12);
	std::cout << kmh << "km/h = " << kmh/3.6 <<"m/s";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();

	calcTitle8();
	convertorDesign();
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

void convert2()
{
	float ms = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "m/s = ";
	std::cin >> ms;

	gotoXY(100, 12);
	std::cout << ms << "m/s = " << ms * 3.6 << "km/h";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	
	calcTitle8();
	convertorDesign();
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

void convert3()
{
	float s = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "s = ";
	std::cin >> s;

	gotoXY(100, 12);
	std::cout << s << "s = " << s / 60 << "min";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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

void convert4()
{
	float min = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "min = ";
	std::cin >> min;

	gotoXY(100, 12);
	std::cout << min << "min = " << min * 60 << "s";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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

void convert5()
{
	float kgm = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "kg/m3 = ";
	std::cin >> kgm;

	gotoXY(100, 12);
	std::cout << kgm << "kg/m3 = " << kgm * 1000 << "g/cm3";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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
void convert6()
{
	float gcm = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "g/cm3 = ";
	std::cin >> gcm;

	gotoXY(100, 12);
	std::cout << gcm << "g/cm3 = " << gcm / 1000 << "kg/m3";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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

void convert7()
{
	float m3 = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "m3 = ";
	std::cin >> m3;

	gotoXY(100, 12);
	std::cout << m3 << "m3 = " << m3 * 1000000 << "cm3";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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

void convert8()
{
	float cm3 = 0;
	system("cls");
	calcTitle8();
	convertorDesign();

	gotoXY(100, 11);
	std::cout << "cm3 = ";
	std::cin >> cm3;

	gotoXY(100, 12);
	std::cout << cm3 << "cm3 = " << cm3 / 1000000 << "m3";
	Sleep(3000);
	system("cls");

	calcTitle8();
	convertorDesign();
	gotoXY(100, 11);
	std::cout << "Press any key to continue...";
	_getch();
	system("cls");

	calcTitle8();
	convertorDesign();
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


void calcMenu8(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight, bool nine)
{
	calcTitle8();
	if (one)
	{
		calcDesign8();
		gotoXY(97, 19);
		std::cout << "±±±±±";
	}
	if (two)
	{
		calcDesign8();
		gotoXY(97, 24);
		std::cout << "±±±±±";
	}
	if (three)
	{
		calcDesign8();
		gotoXY(97, 29);
		std::cout << "±±±±±";
	}
	if (four)
	{
		calcDesign8();
		gotoXY(97, 34);
		std::cout << "±±±±±";
	}
	if (five)
	{
		calcDesign8();
		gotoXY(123, 19);
		std::cout << "±±±±±";
	}
	if (six)
	{
		calcDesign8();
		gotoXY(123, 24);
		std::cout << "±±±±±";
	}
	if (seven)
	{
		calcDesign8();
		gotoXY(123, 29);
		std::cout << "±±±±±";
	}
	if (eight)
	{
		calcDesign8();
		gotoXY(123, 34);
		std::cout << "±±±±±";
	}
	if (nine)
	{
		calcDesign8();
		gotoXY(110, 39);
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