// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	cout << "Obliczanie ilosci kawalkow pizzy na osobe" << endl;

   cout << "podaj liczbe osob: ";
   cin >> number1;
   cout << "podaj ilosc pizz: ";
   cin >> number2; 
   int number3 = number2 * 8;
   int number4 = number3 / number1;
   int number5 = number3 % number1;
   cout << "kazda osoba otrzyma " << number4 << " kawalkow pizzy" << endl;
   cout << "organizator otrzyma " << number5 << " kawalkow pizzy" << endl;
	   return 0;



}

