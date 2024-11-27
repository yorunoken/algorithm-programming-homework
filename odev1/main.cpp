#include <iostream>

using namespace std;

// This homework asks the user to input a number, and then draws a right triangle with the height of the user's number
int main()
{
    // Ask the user for the height of the triangle
    cout << "Please input a number for the height of the right triangle: ";
    int triangle_height;
    cin >> triangle_height;

    // Loop over the height, starting from lowest to highest
    for(int i = 0; i < triangle_height; i++) {
        // Loop over the height numbers themselves to print a * to the console
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Add a endline at the end so it skips one line below at the end of every loop
        cout << endl;
    }

    return 0;
}
