#include <iostream>
#include "front-end.h"
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"
#include "Game2.h"
#include "Game1.h"
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void textcolor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void maxSizedScreen() {
	COORD ScreenBufferSize{ 1000, 50 };
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND ConsoleWindow = GetConsoleWindow();

	SetConsoleScreenBufferSize(ConsoleHandle, ScreenBufferSize);
	ShowWindow(ConsoleWindow, SW_MAXIMIZE);
}
void tittleScreen()
{
	system("cls");
	maxSizedScreen();
	textcolor(9);
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                                                  //////                        " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        .*////.                .///.   ///,                     " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                      .///.  ////            .///        .///                   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                    *//*  ,//*  ///.       ,   .///         *//                 " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                 .///.        ///..//   ,//*      ///,       .//                " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                //*                   ///           .///    ///                 " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                //*                   ///           .///    ///                 " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                    ///.         ///        ///.                                " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                      ,///    *//*       *//*       ,//,                        " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                            ///.       ///.       ///.                          " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        .,//*       *//*       ,//*.                            " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                       ///        ///        ///.   .//.                        " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                    ,//*       ,//*       ,//*       .///*                      " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                   ///.      ///.       ///.       *//.  ///.                   " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                  .//.//* ,//*       ,//*             ,//* ,//*                 " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                  //*   ///.       ///.   /.              ///,                  " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                  //.     .///  .///      ,//*         ,///                     " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                 .//     .***////.           ///.    ///,                       " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                 */////*,.                     ,//*///                          " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                                                 .*,                            " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                                                                                " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                                                                                " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                           .         .*((*.                .                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        ,##(      ###(   ,###*           ###                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                      ,#(##(     ##          ##        #####                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                    ,#, /##(    ,#           .#      ##  ###                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                  ,#*   /##(    .#           .#    ##    ###                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                .##/////(##(///. ##         .#(  ##//////###////                " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        /##(      *###(//####.           ###                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        /##(                             ###                    " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t" << "                        /##(                             ###                    " << std::endl;

	std::cout << "\n\n\n\n";
	textcolor(15);
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t  LOADING..." << std::endl << std::endl;;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t ";
	for (int i = 0; i < 20; i++)
	{
		textcolor(3);
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "  100%";
	Sleep(3000);
	system("cls");
}

void Menu()
{
	std::cout << std::endl << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "       __  __                        " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      |  \\/  |   ___   _ __    _   _ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      | |\\/| |  / _ \\ | '_ \\  | | | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      | |  | | |  __/ | | | | | |_| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      |_|  |_|  \\___| |_| |_|  \\__,_|" << std::endl;

}
void homeMenu(bool first, bool second, bool third)
{
	Menu(); printf("\n\n\n\n\n");
	if (first)
	{
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±    Calculators    ± ±     Doodle Jump    ± ±   Catch the leaf   ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±    ±±±±±±±±±±±    ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}

	if (second)
	{
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±    Calculators    ± ±     Doodle Jump    ± ±   Catch the leaf   ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±     ±±±±±±±±±±±    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}
	if (third)
	{
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±    Calculators    ± ±     Doodle Jump    ± ±   Catch the leaf   ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±   ±±±±±±±±±±±±±±   ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±                   ± ±                    ± ±                    ±" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t\t\t" << "   ±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±± ±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
	}
	const char ch = _getch();

	if (ch == 'd' || ch == 'D')
	{
		if (first)
		{
			system("cls");
			homeMenu(false, true, false);
		}
		if (second)
		{
			system("cls");
			homeMenu(false, false, true);
		}
		if (third)
		{
			system("cls");
			homeMenu(true, false, false);
		}
	}

	if (ch == 'a' || ch == 'A')
	{
		if (first)
		{
			system("cls");
			homeMenu(false, false, true);
		}
		if (second)
		{
			system("cls");
			homeMenu(true, false, false);
		}
		if (third)
		{
			system("cls");
			homeMenu(false, true, false);
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
		if (third)
		{
			system("cls");
			startGame1();
		}
	}
}

void start()
{
	tittleScreen();
	homeMenu(true, false, false);
}