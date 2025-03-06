// Chapter_3_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using namespace std;

int main()
{
    int FirstRandomNumber; //initialize first random number
    int SecondRandomNumber; //initialize second random number
    int Sum; //initialize sum

    random_device engineOne; //random number generator engine

    uniform_int_distribution<int> Number(1, 500); //random number object
  
    FirstRandomNumber = Number(engineOne); // Randomly generate first number
    SecondRandomNumber = Number(engineOne); //Randomly generate second number
    
    Sum = FirstRandomNumber + SecondRandomNumber; //Store the sum of first and second number in "Sum"

   
    cout << "What is the sum of " << FirstRandomNumber << " and " << SecondRandomNumber << "?" << endl; //Prompt user to add first and second and number
    cout << "Enter any key when you are ready for the answer.  "; //Prompt user to press any key to see the answer
    cin.get(); //Pause screen until any key is entered
    cout << endl;
    cout << "The correct answer is " << Sum << "." << endl; //Print the correct answer

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
