#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"


void tittleScreen()
{
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "\t" << "`8.`888b                 ,8'  8 888888888888  8 8888             ,o888888o.         ,o888888o.              ,8.       ,8.           8 888888888888 " << std::endl;
	std::cout << "\t" << " `8.`888b               ,8'   8 8888          8 8888            8888     `88.    . 8888     `88.           ,888.     ,888.          8 8888         " << std::endl;
	std::cout << "\t" << "  `8.`888b             ,8'    8 8888          8 8888         ,8 8888       `8.  ,8 8888       `8b         .`8888.   .`8888.         8 8888         " << std::endl;
	std::cout << "\t" << "   `8.`888b     .b    ,8'     8 8888          8 8888         88 8888            88 8888        `8b       ,8.`8888. ,8.`8888.        8 8888         " << std::endl;
	std::cout << "\t" << "    `8.`888b    88b  ,8'      8 888888888888  8 8888         88 8888            88 8888         88      ,8'8.`8888,8^8.`8888.       8 888888888888 " << std::endl;
	std::cout << "\t" << "     `8.`888b .`888b,8'       8 8888          8 8888         88 8888            88 8888         88     ,8' `8.`8888' `8.`8888.      8 8888         " << std::endl;
	std::cout << "\t" << "      `8.`888b8.`8888'        8 8888          8 8888         88 8888            88 8888        ,8P    ,8'   `8.`88'   `8.`8888.     8 8888         " << std::endl;
	std::cout << "\t" << "       `8.`888`8.`88'         8 8888          8 8888         `8 8888       .8'  `8 8888       ,8P    ,8'     `8.`'     `8.`8888.    8 8888         " << std::endl;
	std::cout << "\t" << "        `8.`8' `8,`'          8 8888          8 8888            8888     ,88'    ` 8888     ,88'    ,8'       `8        `8.`8888.   8 8888         " << std::endl;
	std::cout << "\t" << "         `8.`   `8'           8 888888888888  8 888888888888     `8888888P'         `8888888P'     ,8'         `         `8.`8888.  8 888888888888 " << std::endl;

	Sleep(3000);
	system("cls");
}

void Menu()
{
	std::cout << std::endl << std::endl;
	std::cout << "\t\t\t\t\t" << "         ,8.       ,8.          8 8888888888    b.             8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "        ,888.     ,888.         8 8888          888o.          8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "       .`8888.   .`8888.        8 8888          Y88888o.       8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "      ,8.`8888. ,8.`8888.       8 8888          .`Y888888o.    8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "     ,8'8.`8888,8^8.`8888.      8 888888888888  8o. `Y888888o. 8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "    ,8' `8.`8888' `8.`8888.     8 8888          8`Y8o. `Y88888o8  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "   ,8'   `8.`88'   `8.`8888.    8 8888          8   `Y8o. `Y8888  8 8888      88 " << std::endl;
	std::cout << "\t\t\t\t\t" << "  ,8'     `8.`'     `8.`8888.   8 8888          8      `Y8o. `Y8  ` 8888     ,8P " << std::endl;
	std::cout << "\t\t\t\t\t" << " ,8'       `8        `8.`8888.  8 8888          8         `Y8o.`    8888   ,d8P  " << std::endl;
	std::cout << "\t\t\t\t\t" << ",8'         `         `8.`8888. 8 888888888888  8            `Yo     `Y88888P'   " << std::endl;

}

void active(bool first, bool second, bool third)
{
	Menu(); printf("\n\n\n\n\n");
	if (first)
	{
		std::cout << "-> " << "Option 1" << std::endl;
	}
	else
	{
		std::cout << "   Option 1" << std::endl;
	}

	if (second)
	{
		std::cout << "-> " << "Option 2" << std::endl;
	}
	else
	{
		std::cout << "   Option 2" << std::endl;
	}

	if (third)
	{
		std::cout << "-> " << "Option 3" << std::endl;
	}
	else
	{
		std::cout << "   Option 3" << std::endl;
	}
	const char ch = _getch();

	if (ch == 's' || ch == 'S')
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

	if (ch == 'w' || ch == 'W')
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
	}
}

void start()
{
	tittleScreen();
	active(true, false, false);
}
