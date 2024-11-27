// Homework 3

// Create a game where the computer generates a random number between 1-100
// and the user has to guess it. Give hints like "too high" or "too low"
// Limit the number of attempts to 7
// Hint: Use rand() function for random number generation

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Pick a random seed based on time
    srand(time(0));

    int number_to_guess = rand() % 100 + 1;
    int MAX_ATTEMPTS = 7;
    int attempts = 1;
    int guess;

    // Greet user
    cout << "Hello, and welcome to random number guesser game." << endl
    << "To win, you must guess the number I'm thinking of." << endl
    << "You have " << MAX_ATTEMPTS << " attemps." << endl
    << "To start, click enter." << endl;

    // Wait for user to press enter
    cin.get();

    while (true) {
        if (attempts > MAX_ATTEMPTS) {
            cout << "You ran out of tries, do you want to try again? (y/n)" << endl;
            string y_n;
            cin >> y_n;

            if (y_n == "y" || y_n == "Y") {
                attempts = 1;
                continue;
            } else {
                break;
            }
        }

        cout << "Round " << attempts << endl
        << "Guess a number: ";

        cin >> guess;

        if (guess > number_to_guess) {
            cout << "Too high!" << endl << endl;
        } else if (guess < number_to_guess) {
            cout << "Too low!" << endl << endl;
        }

        if (guess == number_to_guess) {
            cout << "You won! The number was: " << number_to_guess << endl;
            break;
        }

        attempts++;
    }

    return 0;
}
