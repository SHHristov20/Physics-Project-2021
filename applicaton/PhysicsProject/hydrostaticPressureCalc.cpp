#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

void printCalc4() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | | Px  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  p  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  g  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |  h  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}
void calcTtitle4()
{
	system("cls");
	std::cout << " _   _               _                        _             _     _            ____                                                  " << std::endl;
	std::cout << "| | | |  _   _    __| |  _ __    ___    ___  | |_    __ _  | |_  (_)   ___    |  _ \   _ __    ___   ___   ___   _   _   _ __    ___ " << std::endl;
	std::cout << " | |_| | | | | |  / _` | | '__|  / _ \  / __| | __|  / _` | | __| | |  / __|   | |_) | | '__|  / _ \ / __| / __| | | | | | '__|  / _ \\" << std::endl;
	std::cout << "|  _  | | |_| | | (_| | | |    | (_) | \__ \ | |_  | (_| | | |_  | | | (__    |  __/  | |    |  __/ \__ \ \__ \ | |_| | | |    |  __/" << std::endl;
	std::cout << " |_| |_|  \__, |  \__,_| |_|     \___/  |___/  \__|  \__,_|  \__| |_|  \___|   |_|     |_|     \___| |___/ |___/  \__,_| |_|     \___|" << std::endl;
	std::cout << "          |___/                                                                                                                       " << std::endl << std::endl << std::endl << std::endl;
}
void pressure()
{
		float P, p, g = 10, h;
		system("cls");
		printCalc4();

		gotoXY(3, 2);
		std::cout << "Density(p) = ";
		std::cin >> p;

		gotoXY(3, 3);
		std::cout << "Height(h) = ";
		std::cin >> h;

		gotoXY(3, 4);
		std::cout << "Pressure(P) = " << float(p * g * h) << "Pa";
		Sleep(3000);
		system("cls");

		printCalc4();
		gotoXY(3, 2);
		std::cout << "Press any key to";

		gotoXY(3, 3);
		std::cout << "continue...";
		_getch();

		system("cls");
		printCalculatorsMenu();
}
void depthPressure()
{
	float P, Pa, p, g = 10, h;
	system("cls");
	printCalc4();

	gotoXY(3, 2);
	std::cout << "Pressure(Pa) = ";
	std::cin >> Pa;

	gotoXY(3, 3);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 4);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(3, 5);
	std::cout << "Depth pressure(P) = " << float(Pa + p * g * h);
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void height()
{
	float P, p, g = 10, h;
	system("cls");
	printCalc4();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Density(p) = ";
	std::cin >> p;

	gotoXY(3, 4);
	std::cout << "Height(h) = " << float((p * g) / P) << "cm";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}
void density()
{
	float P, p, g = 10, h;
	system("cls");
	printCalc4();

	gotoXY(3, 2);
	std::cout << "Pressure(P) = ";
	std::cin >> P;

	gotoXY(3, 3);
	std::cout << "Height(h) = ";
	std::cin >> h;

	gotoXY(3, 4);
	std::cout << "Density(p) = " << float((h * g) / P) << "Pa";
	Sleep(3000);
	system("cls");

	printCalc4();
	gotoXY(3, 2);
	std::cout << "Press any key to";

	gotoXY(3, 3);
	std::cout << "continue...";
	_getch();

	system("cls");
	printCalculatorsMenu();
}