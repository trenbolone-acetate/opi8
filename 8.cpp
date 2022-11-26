#include <iostream>
#include <iomanip> 
#include "windows.h"
#include "math.h"
using namespace std;

int main()
{
	//GitHub
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double b, h, y, x;
	cout << "Введіть початкове значення x: ";
	cin >> x;
	cout << "Введіть кінцеве значення x: ";
	cin >> b;
	cout << "Вкажіть значення одного кроку: ";
	cin >> h;
	 do{
		y = (cos(x) / sin(x)) + (2 * sin(x)) - 2;
		cout << "x = " << x << "	y = " << setw(4) << y << endl;
		x += h;
	 } while (x > b);
}