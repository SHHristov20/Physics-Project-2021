#include <iostream>
#include <conio.h>
#include <cmath>

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
	std::cout << std::endl << "Acceleration(a) = " << float((v0 - v) / t) << "m/s" << char(253);
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
	std::cout << std::endl << "Displacement(s) = " << v0 * t - ((a * pow(t, 2)) / 2);
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
	std::cout << std::endl << "Final Speed(v) = " << v0 - (a * t);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Press any key to continue...";
	_getch();
	return;
}
void time()
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