#include <iostream>
#include <string>

using namespace std;

// This homeworks asks for user's information and returns stuff based on the inputs
int main() {
    cout << "----- Your Information -----" << endl;

    // Asking user input

    cout << "Name: ";
    string name;
    cin >> name;

    cout << "Age: ";
    int age;
    cin >> age;

    // Checking to see if the age entered is correct
    if (age < 0 || age > 100) {
        cout << "The age you have entered, " << age << " is impossible, please try again." << endl;
        return 0;
    }

    cout << "Favorite Color: ";
    string fav_color;
    cin >> fav_color;

    cout << "Favorite Number: ";
    int fav_num;
    cin >> fav_num;

    // Calculations

    int current_year = 2024;
    int born_year = 2024 - age;

    int age_and_number = age * fav_num;

    cout << "You were born in: " << born_year << endl;
    cout << "Your age times your favorite number is: " << age_and_number << endl;

    return 0;
}
