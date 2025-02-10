// Exercise inches G. De Paolis Feb 2025.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main()

{
    // prompt to get lenghth from user in inches
    cout << "Please input a length in inches: ";
    float inches;
    cin >> inches;


    // convert inches to feet or to meters
    float feet = inches / 12;
    float meter = inches * 0.0254;

    // display result of the conversion

    cout << "These inches are " << feet << "  feet and " << meter << "  meters";

}