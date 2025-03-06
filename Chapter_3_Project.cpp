// Chapter_3_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double Principal; // initialize Principle
    double InterestRate; // initialize interest rate
    int TimesCompounded; // Initialize the T
    double Parentheses; // Initialize parentheses
    double Exponent; // Initialize Exponent
    double Interest; // Initialize Interest
    double Amount; // initialize amount

    cout << "Enter the Principal: "; //Prompt user for Principal
    cin >> Principal;
    cout << "Enter the Interest Rate (%): "; //Prompt user for the Interest Rate
    cin >> InterestRate;
    InterestRate = InterestRate / 100; //convert percentage to correct number
    cout << "Enter the annual number of times that the interest is compounded: "; //Prompt user for T
    cin >> TimesCompounded;

    
    Parentheses = 1 + (InterestRate / TimesCompounded); //Compute Parentheses // (1 + (Rate/T))
    Exponent = pow(Parentheses, TimesCompounded); // Compute Exponent using a power function of parentheses raised to T
    Amount = Principal * Exponent; //Compute Amount

    Interest = Amount - Principal; //Cpmpute Interest = Amount - Principal

    InterestRate = InterestRate * 100; //Convert back to percentage

    cout << "Interest Rate:" << setw(23) << setprecision(2) << fixed << InterestRate << "%" << endl; //Print Interest Rate with proper alignment and decimal
    cout << "Times Compounded:" << setw(20) << setprecision(2) << fixed << TimesCompounded << endl; //Print Interest with proper alignment and decimal places
    cout << "Principal:" << setw(20) << "$ " << setprecision(2) << fixed << Principal << endl; // Print Principal with proper alignment and decimal places
    cout << "Interest:" << setw(21) << "$ " << setw(7) << setprecision(2) << fixed << Interest << endl; //Print Interest with proper alignment and decimal places
    cout << "Amount in Savings:" << setw(12) << "$ " << setprecision(2) << fixed << Amount << endl; //Print Amount in Savings with proper alignment and decimal places

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
