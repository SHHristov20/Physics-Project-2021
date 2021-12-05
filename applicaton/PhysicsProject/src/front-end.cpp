#include <iostream>
#include "front-end.h"
#include <Windows.h>
#include <conio.h>
#include "calculatorsMenu.h"
#include "Game2.h"
#include "Game1.h"

/// <summary>
/// go to given coords
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

/// <summary>
/// Changing the text color
/// </summary>
/// <param name="color"></param>
void textcolor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/// <summary>
/// Set the screen to full screen
/// </summary>
void maxSizedScreen() {
	COORD ScreenBufferSize{ 1000, 50 };
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND ConsoleWindow = GetConsoleWindow();

	SetConsoleScreenBufferSize(ConsoleHandle, ScreenBufferSize);
	ShowWindow(ConsoleWindow, SW_MAXIMIZE);
}

/// <summary>
/// Title
/// </summary>
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
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t    LOADING..." << std::endl << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t ";
	for (int i = 0; i < 23; i++)
	{
		textcolor(3);
		std::cout << "± ";
		Sleep(100);
	}

	std::cout << "  100%";
	textcolor(14);
	Sleep(3000);
	system("cls");
}

/// <summary>
/// Menu title
/// </summary>
void Menu()
{
	std::cout << std::endl << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "       __  __                        " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      |  \\/  |   ___   _ __    _   _ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      | |\\/| |  / _ \\ | '_ \\  | | | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      | |  | | |  __/ | | | | | |_| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "      |_|  |_|  \\___| |_| |_|  \\__,_|" << std::endl;

}

/// <summary>
/// Menu
/// </summary>
/// <param name="first"></param>
/// <param name="second"></param>
/// <param name="third"></param>
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
	start:
	const char option = _getch();

	if (option == 'd' || option == 'D')
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

	if (option == 'a' || option == 'A')
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
	if (option == 13)
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
	if (option == 27)
	{
		system("exit");
	}
	else
	{
		goto start;
	}
}

/// <summary>
/// Start the application
/// </summary>
void start()
{
	tittleScreen();
	homeMenu(true, false, false);
}