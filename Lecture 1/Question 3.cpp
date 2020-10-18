#include <iostream>
using namespace std;

int euclidGCD(int a2, int b2)
{
    if (b2 == 0)
        return a2;
    return euclidGCD(b2, a2 % b2);
}

int regularGCD(int a1, int b1)
{
    if (a1 == 0 || b1 == 0)
        return 0; //as a and b are 0, the greatest divisior is also 0
    if (a1 == b1)
        return b1; //when both numbers are same
    if (a1 > b1)
        return regularGCD(a1 - b1, b1);
    else
        return regularGCD(a1, b1 - a1);
}

int main()
{

    //Using a double variable system to keep 2 algorithms completely apart. Redundancy!

    int a1, a2;
    int b1, b2;
    int result1, result2;
    int i, j;

    int menu_choice = 1;

    while (menu_choice = 1)
    {
        int choice = 0;

        //Taking Inputs from the User for numbers to analyze.

        cout << "Finding the Greatest Common Divisor Between Two Numbers" << endl;
        cout << "-------------------------------------------------------" << endl;

        cout << "Please Enter the First Number: " << endl;
        cin >> a1;
        a2 = a1;
        cout << endl;

        cout << "Please Enter the Second Number: " << endl;
        cin >> b1;
        b2 = b1;
        cout << endl;

        cout << "Please Choose Which System would you like to calculate using entering its corresponding number:" << endl;
        cout << "-----------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "1. Incremental System" << endl;
        cout << "2. Euclidean Algorithm" << endl;
        cin >> choice;

        //Defining the Choice Logic.

        if (choice == 1)
        {
            result1 = regularGCD(a1, b1);

            cout << "According to the Incremental System, the GCD is: " << result1 << endl;
            cout << endl;

            cout << "Enter 1 to try again." << endl;
            cout << "Enter Anything else to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << endl;
            }

            else
            {
                menu_choice = 999;
                cout << "Exiting..." << endl;
                cout << endl;
            }
        }

        else if (choice == 2)
        {
            result2 = euclidGCD(a2, b2);

            cout << "According to the Euclidean Algorithm, the GCD is: " << result2 << endl;
            cout << endl;

            cout << "Enter 1 to try again." << endl;
            cout << "Enter Anything else to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << endl;
            }

            else
            {
                menu_choice = 999;
                cout << "Exiting..." << endl;
                cout << endl;
            }
        }

        else
        {
            cout << "Incorrect Input. Restarting..." << endl;
            menu_choice = 1;
            cout << endl;
        }
    }

    return 0;
}