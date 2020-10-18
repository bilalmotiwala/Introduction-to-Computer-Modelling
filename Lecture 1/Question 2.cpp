#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x1, x2;
    char x;

    int mainmenu_choice = 0;
    int menu_choice = 0;
    int precision;

    while ((mainmenu_choice == 0 && menu_choice == 0) || (mainmenu_choice == 0 && menu_choice == 1))
    {
        cout << "Solving a Quadratic Equation [ax² + bx + c = 0]" << endl;
        cout << "-----------------------------------------------" << endl;

        cout << "Please Enter the Value for A: ";
        cin >> a;
        cout << endl;

        cout << "Please Enter the Value for B: ";
        cin >> b;
        cout << endl;

        cout << "Please Enter the Value for C: ";
        cin >> c;
        cout << endl;

        cout << "Please set the precision of the required output.";
        cin >> precision;
        cout << endl;

        cout << "-----------------------------------------------" << endl;
        cout << endl;

        cout << "Equation Entered: " << a << "x² + " << b << "x + " << c << " = 0" << endl;

        if (a == 0 && b == 0)
        {
            cout << "The Entered Equation is not valid. Enter 1 to re-enter the equation or anyother number to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << "-----------------------------------------------" << endl;
            }

            else
            {
                cout << "Exiting..." << endl;
            }
        }

        else if (a == 0 && b != 0)
        {
            x1 = -(c / b);

            cout << endl;
            cout << setprecision(precision) << "The Solution to this equation is at root: " << x1 << endl;
            cout << endl;

            cout << "Enter 1 to re-enter the equation or anyother number to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << "-----------------------------------------------" << endl;
            }

            else
            {
                cout << "Exiting..." << endl;
            }
        }

        else if ((b * b - 4 * a * c) > 0)
        {
            x2 = (b * b) - (4 * a * c);
            x1 = -b + sqrt(x2);

            cout << endl;
            cout << setprecision(precision) << "The Solution to this equation is at root: " << x1 << endl;

            cout << endl;

            cout << "Enter 1 to Restart or anyother number to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << "-----------------------------------------------" << endl;
            }

            else
            {
                cout << "Exiting..." << endl;
            }
        }

        else
        {
            cout << endl;
            cout << "This quadratic equation has no real root." << endl;

            cout << endl;

            cout << "Enter 1 to Restart or anyother number to exit." << endl;
            cin >> menu_choice;

            if (menu_choice == 1)
            {
                cout << "Restarting..." << endl;
                cout << "-----------------------------------------------" << endl;
            }

            else
            {
                cout << "Exiting..." << endl;
            }
        }
    }
    return 0;
}
