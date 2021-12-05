#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
#include "calculatorsMenu.h"

/// <summary>
/// Calculator
/// </summary>
void formulas() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ______________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _________________________________   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                                 |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_________________________________|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______ ______  _______   _______   |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   .   |   0   |   =   | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   /   |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       | |       |  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______| |_______|  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|______________________________________|" << std::endl;
}

/// <summary>
/// Title
/// </summary>
void formulasTitle()
{
	system("cls");
	std::cout << std::endl << "\t\t\t\t\t\t\t\t\t\t     _____                                      _               " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t    |  ___|   ___    _ __   _ __ ___    _   _  | |   __ _   ___ " << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t    | |_     / _ \\  | '__| | '_ ` _ \\  | | | | | |  / _` | / __|" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t    |  _|   | (_) | | |    | | | | | | | |_| | | | | (_| | \\__ \\" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t    |_|      \\___/  |_|    |_| |_| |_|  \\__,_| |_|  \\__,_| |___/" << std::endl << std::endl << std::endl << std::endl;;
}

/// <summary>
/// Calculator design
/// </summary>
void formulasDesign() {
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t   _______________________________________________" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  ___________________________________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  Welcome to our Formulas menu!            | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  Choose yours and press ENTER!            | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |                                           | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |  (Navigate using W, A, S, D)              | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |___________________________________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________    |    _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Increasing   |   |   |   Hydrostatic   | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |   Acceleration  |   |   |     Pressure    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |     Formulas    |   |   |     Formulas    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|   |   |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________    |    _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Decreasing   |   |   |     Pressure    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |   Acceleration  |   |   |     Formulas    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |     Formulas    |   |   |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|   |   |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________    |    _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |	   Free       |   |   |     Arhimed's   | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Fall       |   |   |       law       | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Formulas     |   |   |     Formulas    | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|   |   |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |  _________________    |    _________________  |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Work       |   |   |       Back      | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |      Power      |   |   |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |    Formulas     |   |   |                 | |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  | |_________________|   |   |_________________| |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\t\t\t  |_______________________|_______________________|" << std::endl;
}

/// <summary>
/// Increasing Accceleration formulas
/// </summary>
void incAccelerationFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "a = V/t";
	Sleep(500);
	gotoXY(100, 12);
	std::cout << "V = V0 + at";
	Sleep(500);
	gotoXY(100, 13);
	std::cout << "S = V0t + (at2)/2";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Decreasing Acceleration formulas
/// </summary>
void decAccelerationFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "a = V/t";
	Sleep(500);
	gotoXY(100, 12);
	std::cout << "V = V0 - at";
	Sleep(500);
	gotoXY(100, 13);
	std::cout << "S = V0t - (at2)/2";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}
/// <summary>
/// Free fall formulas
/// </summary>
void freeFallFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "g = 9.8";
	Sleep(500);
	gotoXY(100, 12);
	std::cout << "V = gt";
	Sleep(500);
	gotoXY(100, 13);
	std::cout << "S = (gt2)/2";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}
/// <summary>
/// Mechanical work and power formulas
/// </summary>
void workPowerFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "A = Fs";
	Sleep(500);
	gotoXY(100, 12);
	std::cout << "A = -Fs";
	Sleep(500);
	gotoXY(100, 13);
	std::cout << "P = A/t";
	Sleep(500);

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Hydrostatic pressure formulas
/// </summary>
void hydroPressureFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "px = pgh";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Pressure fomulas
/// </summary>
void pressureFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "p = F/S";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}

/// <summary>
/// Arhimed's law formulas
/// </summary>
void arhimedLawFormulas()
{
	formulasTitle();
	formulas();

	Sleep(1000);
	gotoXY(100, 11);
	std::cout << "F = mg = pVg";

	Sleep(3000);
	gotoXY(100, 14);
	std::cout << "Press any key to continue...";
	_getch();

	formulasTitle();
	formulas();
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
	Sleep(2000);
	system("cls");
	printCalculatorsMenu();
}


/// <summary>
/// Menu
/// </summary>
/// <param name="one"></param>
/// <param name="two"></param>
/// <param name="three"></param>
/// <param name="four"></param>
/// <param name="five"></param>
/// <param name="six"></param>
/// <param name="seven"></param>
/// <param name="eight"></param>
void formulasMenu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight)
{
	formulasTitle();
	if (one)
	{
		formulasDesign();
		gotoXY(99, 20);
		std::cout << "±±±±±";
	}
	if (two)
	{
		formulasDesign();
		gotoXY(99, 25);
		std::cout << "±±±±±";
	}
	if (three)
	{
		formulasDesign();
		gotoXY(99, 30);
		std::cout << "±±±±±";
	}
	if (four)
	{
		formulasDesign();
		gotoXY(99, 35);
		std::cout << "±±±±±";
	}
	if (five)
	{
		formulasDesign();
		gotoXY(125, 20);
		std::cout << "±±±±±";
	}
	if (six)
	{
		formulasDesign();
		gotoXY(125, 24);
		std::cout << "±±±±±";
	}
	if (seven)
	{
		formulasDesign();
		gotoXY(125, 30);
		std::cout << "±±±±±";
	}
	if (eight)
	{
		formulasDesign();
		gotoXY(125, 34);
		std::cout << "±±±±±";
	}
	start:
	const char option = _getch();

	if (option == 'w' or option == 'W')
	{
		if (one)
		{
			system("cls");
			formulasMenu(false, false, false, true, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			formulasMenu(true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			formulasMenu(false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			formulasMenu(false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, false, true);
		}
		if (six)
		{
			system("cls");
			formulasMenu(false, false, false, false, true, false, false, false);
		}
		if (seven)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, true, false, false);
		}
		if (eight)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, true, false);
		}
	}

	if (option == 's' or option == 'S')
	{
		if (one)
		{
			system("cls");
			formulasMenu(false, true, false, false, false, false, false, false);
		}
		if (two)
		{
			system("cls");
			formulasMenu(false, false, true, false, false, false, false, false);
		}
		if (three)
		{
			system("cls");
			formulasMenu(false, false, false, true, false, false, false, false);
		}
		if (four)
		{
			system("cls");
			formulasMenu(true, false, false, false, false, false, false, false);
		}
		if (five)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, true, false, false);
		}
		if (six)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, true, false);
		}
		if (seven)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, false, true);
		}
		if (eight)
		{
			system("cls");
			formulasMenu(false, false, false, false, true, false, false, false);
		}
	}

	if (option == 'a' or option == 'A' or option == 'd' or option == 'D')
	{
		if (one)
		{
			system("cls");
			formulasMenu(false, false, false, false, true, false, false, false);
		}
		if (two)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, true, false, false);
		}
		if (three)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, true, false);
		}
		if (four)
		{
			system("cls");
			formulasMenu(false, false, false, false, false, false, false, true);
		}
		if (five)
		{
			system("cls");
			formulasMenu(true, false, false, false, false, false, false, false);
		}
		if (six)
		{
			system("cls");
			formulasMenu(false, true, false, false, false, false, false, false);
		}
		if (seven)
		{
			system("cls");
			formulasMenu(false, false, true, false, false, false, false, false);
		}
		if (eight)
		{
			system("cls");
			formulasMenu(false, false, false, true, false, false, false, false);
		}
	}
	if (option == 13)
	{
		if (one)
		{
			system("cls");
			incAccelerationFormulas();
		}
		if (two)
		{
			system("cls");
			decAccelerationFormulas();
		}
		if (three)
		{
			system("cls");
			freeFallFormulas();
		}
		if (four)
		{
			system("cls");
			workPowerFormulas();
		}
		if (five)
		{
			system("cls");
			hydroPressureFormulas();
		}
		if (six)
		{
			system("cls");
			pressureFormulas();
		}
		if (seven)
		{
			system("cls");
			arhimedLawFormulas();
		}
		if (eight)
		{
			system("cls");
			printCalculatorsMenu();
		}

	}
	else
	{
		goto start;
	}
}

/// <summary>
/// Start formulas menu
/// </summary>
void startFormulasMenu()
{
	formulasMenu(true, false, false, false, false, false, false, false);
}