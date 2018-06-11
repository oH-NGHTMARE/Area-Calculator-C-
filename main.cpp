#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sChoice;
    float value;

    // Calculation Variables
    float pi = 3.14159;
    float r, l, w, b, h;

    // While Q or q is not pressed as any option
    while ((sChoice != "Q") && (sChoice != "q")) {
        cout << "\n***Area Calulator***\n" << endl;
        cout << "\'C\' or \'c\': Area of a Circle calulator\n\n" << endl;
        cout << "\'R\' or \'r\': Area of a Rectangle calulator\n\n" << endl;
        cout << "\'T\' or \'t\': Area of a Triangle calulator\n\n" << endl;
        cout << "\'Q\' or \'q\': Quit\n" << endl;

        cout << "Please enter your choice from the above menu:\n" << endl;
        getline (cin, sChoice);

        // Checks if choice is for Circle
        if ((sChoice == "C") || (sChoice == "c"))
        {
            cout << "Please enter the radius of the circle in cm:" << endl;
            cin >> r;
            // Checks if number is  a negative
            if ( r > 0)
            {
                // Calculations
                value = (pi * (r * r));
                cout << "Area = " << value << endl;
            }
            else {
                cout << "\nEnter a valid number.\n" << endl;
            }
            break;
        }
        // Checks if choice is for Rectangle
        else if ((sChoice == "R") || (sChoice == "r"))
        {
            cout << "Please enter the length and width of the rectangle in cm:" << endl;
            cin >> l >> w;
            // Checks if number is negative
            if ((l > 0) && (w > 0))
            {
                // Calculations
                value = (l * w);
                cout << "Area = " << value << endl;
            }
            else {
                cout << "\nEnter a valid number.\n" << endl;
            }
            break;
        }
        // Checks if choice is for triangle
        else if ((sChoice == "T") || (sChoice == "t"))
        {
            cout << "Please enter the radius of the triangle in cm:" << endl;
            cin >> b >> h;
            // Checks if number is a negative
            if ((b > 0) && (h > 0))
            {
                // Calculations
                value = ((b * h) / 2);
                cout << "Area = " << value << endl;
            }
            else {
                cout << "\nEnter a valid number.\n" << endl;
            }
            break;
        }
        // Checks if Q or q was pressed anytime
        else if ((sChoice == "Q") || (sChoice == "q"))
        {
            break;
        }
        else
        {
            cout << "Please enter a valid entry.\n" << endl;
            cout << "valid entries are C, R, T, Q. Please see the above table\n" << endl;
        }
    }
    return 0;
}
