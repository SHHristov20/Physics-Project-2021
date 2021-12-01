#include <iostream>
#include "front-end.h"
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"
#include "Game2.h"
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void tittleScreen()
{
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "\t\t\t\t" << " __        __       _                                   " << std::endl;
	std::cout << "\t\t\t\t" << " \\ \\      / / ___  | |   ___    ___    _ __ ___     ___ " << std::endl;
	std::cout << "\t\t\t\t" << "  \\ \\ /\\ / / / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\" << std::endl;
	std::cout << "\t\t\t\t" << "   \\ V  V / |  __/ | | | (__  | (_) | | | | | | | |  __/" << std::endl;
	std::cout << "\t\t\t\t" << "    \\_/\\_/   \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|" << std::endl;

	Sleep(3000);
	system("cls");
}

void Menu()
{
	std::cout << std::endl << std::endl;
	std::cout << "\t\t\t\t\t" << "      __  __                        " << std::endl;
	std::cout << "\t\t\t\t\t" << "     |  \\/  |   ___   _ __    _   _ " << std::endl;
	std::cout << "\t\t\t\t\t" << "     | |\\/| |  / _ \\ | '_ \\  | | | |" << std::endl;
	std::cout << "\t\t\t\t\t" << "     | |  | | |  __/ | | | | | |_| |" << std::endl;
	std::cout << "\t\t\t\t\t" << "     |_|  |_|  \\___| |_| |_|  \\__,_|" << std::endl;

}
void active(bool first, bool second, bool third)
{
	Menu(); printf("\n\n\n\n\n");
	if (first)
	{
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±    Calculators    ± ±      Option 2      ± ±      Option 3      ±" << std::endl;
		std::cout << "\t\t\t" << "   ±    ±±±±±±±±±±±    ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}

	if (second)
	{
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±    Calculators    ± ±      Option 2      ± ±      Option 3      ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±      ±±±±±±±±      ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}
	if (third)
	{
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±    Calculators    ± ±      Option 2      ± ±      Option 3      ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±      ±±±±±±±±      ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}
	const char ch = _getch();

	if (ch == 'd' || ch == 'D')
	{
		if (first)
		{
			system("cls");
			active(false, true, false);
		}
		if (second)
		{
			system("cls");
			active(false, false, true);
		}
		if (third)
		{
			system("cls");
			active(true, false, false);
		}
	}

	if (ch == 'a' || ch == 'A')
	{
		if (first)
		{
			system("cls");
			active(false, false, true);
		}
		if (second)
		{
			system("cls");
			active(true, false, false);
		}
		if (third)
		{
			system("cls");
			active(false, true, false);
		}
	}
	if (ch == 13)
	{
		if (first)
		{
			system("cls");
			printCalculatorsMenu();
		}
		if (second)
		{
			system("cls");
			startGame2();
		}
	}
}

void start()
{
	tittleScreen();
	active(true, false, false);
}