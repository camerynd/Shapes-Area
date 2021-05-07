#include<iostream>
#include<cmath>
using namespace std;
//function prototypes
int display_menu();
void menu_selection(int);
//main function
int main()
{
    //assigning returned value from display_menu function to user choice
    int userChoice = display_menu();
    //function call
    menu_selection(userChoice);
    return 0;
}
//function to display menu and return user selection
int display_menu()
{
    int choice;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cout << endl;
    //return user selection in the form of an int
    return choice;
}
//function to perform necessary actions based on the user's choice
void menu_selection(int choice)
{
    const double PI = 3.14159;
    //initializing variables that will only be used within function
    double radius = 0,
           length = 0,
           width = 0,
           base = 0,
           height = 0,
           area = 0;
    //switch to perform the necessary functions depending on what user chose from menu
    switch(choice)
    {
        case 1: cout << "Enter the radius of your circle: ";
                cin >> radius;
                //input validation, no negatives
                while (radius < 0)
                {
                    cout << "Error: positive values only" << endl;
                    cout << "Enter the radius of your circle: ";
                    cin >> radius;
                }
                area = PI * pow(radius, 2);
                cout << "The area of your circle is " << area << "." << endl;
                break;
        case 2: cout << "Enter the length and width of your rectangle," << endl;
                cout << "separated by a space: ";
                cin >> length >> width;
                //input validation, no negatives
                while (length < 0 || width < 0)
                {
                    cout << "Error: positive values only" << endl;
                    cout << "Enter the length and width of your rectangle," << endl;
                    cout << "separated by a space: ";
                    cin >> length >> width;
                }
                area = length * width;
                cout << "The area of your rectangle is " << area << "." << endl;
                break;
        case 3: cout << "Enter the base and height of your triangle," << endl;
                cout << "separated by a space: ";
                cin >> base >> height;
                //input validation, no negatives
                while (base < 0 || height < 0)
                {
                    cout << "Error: positive values only" << endl;
                    cout << "Enter the base and height of your triangle," << endl;
                    cout << "separated by a space: ";
                    cin >> base >> height;
                }
                area = base * height * 0.5;
                cout << "The area of your triangle is " << area << "." << endl;
                break;
        // option 4 ends program
        case 4: cout << "Goodbye!" << endl;
                break;
        //if no valid option was entered, tell user and end program
        default: cout << "You did not enter a valid selection." << endl;
                 break;
    }
}