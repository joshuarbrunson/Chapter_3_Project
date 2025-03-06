// Chapter_3_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* This program calculate the amounts of each ingredient needed to produce a number of cookies
that are defined by user input*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double SugarRatio = 1.5 / 48; //Sugar required to produce one cookie
    double ButterRatio = 1.0 / 48; //Butter required to produce one cookie
    double FlourRatio = 2.75 / 48; //Flour required to produce one cookie
    int Cookies; //Initialize Cookies
    double CupsOfSugar; // initialize cups of sugar
    double CupsOfButter; // initialize cups of butter
    double CupsOfFlour; // initialize cups of flour
    
    cout << "Enter the desired number of cookies "; //Prompts for user input
    cin >> Cookies; // Get number of cookies from the user
    cout << endl;

    CupsOfSugar = Cookies * SugarRatio; // compute sugar required
    CupsOfButter = Cookies * ButterRatio; // compute butter required
    CupsOfFlour = Cookies * FlourRatio; // compute flour required

    cout << setprecision(3) << CupsOfSugar << " cups of sugar are needed for " << Cookies << " cookies." << endl; //compute sugar required
    cout << setprecision(3) << CupsOfButter << " cups of butter are needed for " << Cookies << " cookies." << endl; //compute butter required
    cout << setprecision(3) << CupsOfFlour << " cups of flour are needed for " << Cookies << " cookies." << endl; //compute flour required

    return 0;
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
