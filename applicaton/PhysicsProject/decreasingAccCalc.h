#include <iostream>
#include <conio.h>
#include <cmath>

void acceleration1()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Final speed(v) = ";
	std::cin >> v;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << std::endl << "Acceleration(a) = " << float((v0 - v) / t) << "m/s" << char(253);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}

void displacement1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Displacement(s) = " << v0 * t - ((a * pow(t, 2)) / 2);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void fSpeed1()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Final Speed(v) = " << v0 - (a * t);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void time1()
{
	float v = 0, a = 0, v0 = 0;
	system("cls");
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
    std::cout << "Initial sppeed(v0) = ";
    std::cin >> v0;
	std::cout << "Final Speed(v) = ";
	std::cin >> v;
	std::cout << std::endl << "Time(t) = " << (v0 - v) / a;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void stopTime()
{
    float t0, v0, a;
    system("cls");
    std::cout << "Initial speed(v0) = ";
    std::cin >> v0;
    std::cout << "Acceleration(a) = ";
    std::cin >> a;
    std::cout << "Time(t0) = " << v0 / a;
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Press any key to continue...";
    _getch();
    return;
}
void brakingDistance() {
    float v0, a, s;
    system("cls");
    std::cout << "Initial speed(v0) = ";
    std::cin >> v0;
    std::cout << "Acceleration(a) = ";
    std::cin >> a;
    std::cout << "Distance(s) = " << pow(v0, 2) / (2 * a);
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Press any key to continue...";
    _getch();
    return;
}

void initialSpeed () {
    float v, v0, a, t;
    system("cls");
    std::cout << "Final speed(v) = ";
    std::cin >> v;
    std::cout << "Acceleration(a) = ";
    std::cin >> a;
    std::cout << "Time(t) = ";
    std::cin >> t;
    std::cout << "Initial speed(v0) = " << v - (a * t);
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Press any key to continue...";
    _getch();
    return;
}

void calcTitle1() {
	system("cls");
	std::cout << std::endl << "\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
}

void menu(bool one, bool two, bool three, bool four, bool five, bool six, bool seven, bool eight) {
	calcTitle1();


	std::cout << "   Find" << std::endl;
	if (one)
	{
		std::cout << "-> " << "Acceleration" << std::endl;
	}
	else
	{
		std::cout << "   Acceleration" << std::endl;
	}

	if (two)
	{
		std::cout << "-> " << "Displacement" << std::endl;
	}
	else
	{
		std::cout << "   Displacement" << std::endl;
	}

	if (three)
	{
		std::cout << "-> " << "Final speed" << std::endl;
	}
	else
	{
		std::cout << "   Final speed" << std::endl;
	}

	if (four)
	{
		std::cout << "-> " << "Time" << std::endl;
	}
	else
	{
		std::cout << "   Time" << std::endl;
	}

	if (five)
	{
		std::cout << "-> " << "Stop Time" << std::endl;
	}
	else
	{
		std::cout << "   Stop time" << std::endl;
	}
    if(six)
    {
        std::cout << "-> " << "Braking Distance" << std::endl;
    }
    else
    {
        std::cout << "   Braking Distance" << std::endl;
    }
    if(seven)
    {
        std::cout << "-> " << "Initial Speed" << std::endl;
    }
    else
    {
        std::cout << "   Initial Speed" << std::endl;
    }
    if(eight)
    {
        std::cout << "-> " << "Back" << std::endl;
    }
    else
    {
        std::cout << "   Back" << std::endl;
    }


	const char option = _getch();
	if (option == 's' || option == 'S')
	{
		if (one)
		{
			menu(false, true, false, false, false, false, false, false);
		}
		if (two)
		{
			menu(false, false, true, false, false, false, false ,false);
		}
		if (three)
		{
			menu(false, false, false, true, false, false, false, false);
		}

		if (four)
		{
			menu(false, false, false, false, true, false, false, false);
		}
		if (five)
		{
			menu(false, false, false, false, false, true, false, false);
		}
        if(six)
        {
            menu(false, false, false, false, false, false, true, false);
        }
        if(seven)
        {
            menu(false, false, false, false, false, false, false, true);
        }
        if(eight)
        {
            menu(true, false, false, false, false, false, false, false);
        }
	}

	if (option == 'w' || option == 'W')
	{
		if (one)
		{
			menu(false, false, false, false, false, false, false, true);
		}
		if (two)
		{
			menu(true, false, false, false, false, false, false, false);
		}
		if (three)
		{
			menu(false, true, false, false, false, false, false, false);
		}
		if (four)
		{
			menu(false, false, true, false, false, false, false, false);
		}
		if (five)
		{
			menu(false, false, false, true, false, false, false, false);
		}
        if(six)
        {
            menu(false, false, false, false, true, false, false, false);
        }
        if(seven)
        {
            menu(false, false, false, false, false, true, false, false);
        }
        if(eight)
        {
            menu(false, false, false, false, false, false, true, false);
        }
	}

	if (option == 13)
	{
		if (one)
		{
			system("cls");
			acceleration1();
		}
		if (two)
		{
			system("cls");
			displacement1();
		}
		if (three)
		{
			system("cls");
			fSpeed1();
		}
		if (four)
		{
			system("cls");
			time1();
		}
        if (five)
        {
            system("cls");
            stopTime();
        }
        if(six)
        {
            system("cls");
            brakingDistance();
        }
        if(seven)
        {
            system("cls");
            initialSpeed();
        }
	}
}

void startCalculator2() {
	menu(true, false, false, false, false, false, false, false);
}