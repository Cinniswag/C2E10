// C2E10.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Cinnamon | Feb 2025 | MPG Conversion

#include <iostream>
using namespace std;

int main()
{
    //UI
    double gallons, miles, mpg;
    cout << "Please provide the maximum fuel capacity of the car in gallons"<< endl;
    cin >> gallons;
    cout << "Please provide the number of miles the car can travel before needing to refuel" << endl;
    cin >> miles;

    //Calculation
    mpg = miles / gallons;
    cout << "The number of miles per gallon is " << mpg << "MPG." << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
