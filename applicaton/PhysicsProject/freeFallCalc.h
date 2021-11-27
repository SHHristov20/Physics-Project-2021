#pragma once
#include <iostream>
#include <conio.h>
#include <cmath>

void printCalc2() {
	std::cout << " ______________________________" << std::endl;
	std::cout << "|  _________________________   |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |                         |  |" << std::endl;
	std::cout << "| |_________________________|  |" << std::endl;
	std::cout << "|  _____ _____ _____   _____   |" << std::endl;
	std::cout << "| |  7  |  8  |  9  | |  t  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  4  |  5  |  6  | |  V  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  1  |  2  |  3  | |  t  |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  .  |  0  |  =  | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "| |  /  |     |     | |     |  |" << std::endl;
	std::cout << "| |_____|_____|_____| |_____|  |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
}

void calculatorTitle() {
	system("cls");
	std::cout << "  _____                           _____          _   _ " << std::endl;
	std::cout << " | ___ |  _ __    ___    ___     | ___|   __ _  | | | |" << std::endl;
	std::cout << " | |_    | '__|  / _ \\  / _ \\    | |_    / _` | | | | |" << std::endl;
	std::cout << " |  _|   | |    |  __/ |  __/    |  _|  | (_| | | | | |" << std::endl;
	std::cout << " |_|     |_|     \\___|  \\___|    |_|     \\__,_| |_| |_|" << std::endl;
}

void gotoXy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void finalSpeed() {

}
void street() {

}