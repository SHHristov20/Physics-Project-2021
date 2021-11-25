#pragma once

#include <iostream>
#include <conio.h>
#include <cmath>
#include "calculatorsMenu.h"

void acceleration()
{
	float v0 = 0, v = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Final speed(v) = ";
	std::cin >> v;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << std::endl << "Acceleration(a) = " << float((v - v0) / t) << "m/s" << char(253);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}

void displacement()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Displacement(s) = " << v0 * t + ((a * pow(t, 2)) / 2);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void fSpeed()
{
	float v0 = 0, a = 0, t = 0;
	system("cls");
	std::cout << "Initial speed(v0) = ";
	std::cin >> v0;
	std::cout << "Time(t) = ";
	std::cin >> t;
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << std::endl << "Final Speed(v) = " << v0 + (a * t);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void time()
{
	float v = 0, a = 0;
	system("cls");
	std::cout << "Acceleration(a) = ";
	std::cin >> a;
	std::cout << "Final Speed(v) = ";
	std::cin >> v;
	std::cout << std::endl << "Time(t) = " << v / a;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void accelerationCalculator()
{
start:
	system("cls");
	std::cout << std::endl << "\t     _                _                _   _                 ____      _            _       _             " << std::endl;
	std::cout << "\t    / \\   ___ ___ ___| | ___ _ __ __ _| |_(_) ___  _ __     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << "\t   / _ \\ / __/ __/ _ \\ |/ _ \\ '__/ _` | __| |/ _ \\| '_ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "\t  / ___ \\ (_| (_|  __/ |  __/ | | (_| | |_| | (_) | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "\t /_/   \\_\\___\\___\\___|_|\\___|_|  \\__,_|\\__|_|\\___/|_| |_|   \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl << std::endl << std::endl << std::endl;
	std::cout << "Find:" << std::endl;
	std::cout << "1.Acceleration" << std::endl;
	std::cout << "2.Displacement" << std::endl;
	std::cout << "3.Final speed" << std::endl;
	std::cout << "4.Time" << std::endl;
	std::cout << "5.Back" << std::endl;
	int key = _getch();
	switch (key)
	{
	case '1':
		acceleration();
		goto start;
		break;
	case '2':
		displacement();
		goto start;
		break;
	case '3':
		fSpeed();
		goto start;
		break;
	case '4':
		time();
		goto start;
		break;
	case '5':
		printCalculatorsMenu();
		break;

	}
}




