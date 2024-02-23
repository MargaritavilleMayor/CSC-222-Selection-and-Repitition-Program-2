// CSC-222 Selection and Repition Program 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Declaring variables
    double first_int, sec_int;
    int operat, zero_div;
    double ans;

    //Asking user for the two integers, the operator, and then storing them to variables
    cout << "Enter two integers" << endl;
    cin >> first_int >> sec_int;
    cout << "What operation would you like performed? Addition (1), subtraction (2), multiplication (3), or division (4)." << endl;
    cin >> operat;
    //checks if the number for the operator are valid inputs and if it is division by zero 
    //asks user the correct the issue if they exist
    while ((operat < 1 || operat > 5) || (sec_int == 0 && operat == 4))
    {
        if (operat < 1 || operat > 5)
        {
            cout << "Please enter a valid operator" << endl << "Addition (1), subtraction (2), multiplication (3), or division (4)" << endl;
            cin >> operat;
        };
        if (sec_int == 0 && operat == 4)
        {
            cout << "Divison by 0 is impossible. If you would like to change your integer, enter 1, if you would like to\nchange your operation enter 2" << endl;
            cin >> zero_div;
            if (zero_div == 1)
            {
                cout << "What would you like your new second integer to be?" << endl;
                cin >> sec_int;
            };
            if (zero_div == 2)
            {
                cout << "What would you like your new operator to be?" << endl << "Addition (1), subtraction (2), multiplication (3), or division (4)" << endl;
                cin >> operat;
            };
        };
    };
    //performs the user's chosen operation and prints it out using an if structure
    if (operat == 1)
    {
        ans = first_int + sec_int;
        cout << first_int << " + " << sec_int << " = " << ans;
    }
    else if (operat == 2)
    {
        ans = first_int - sec_int;
        cout << first_int << " - " << sec_int << " = " << ans;
    }
    else if (operat == 3)
    {
        ans = first_int * sec_int;
        cout << first_int << " * " << sec_int << " = " << ans;
    }
    else if (operat == 4)
    {
        ans = first_int * sec_int;
        cout << first_int << " * " << sec_int << " = " << ans;
    };
}
