#include <iostream>
#include <ctime>

using namespace std;

int main() {

    const int arraySize = 100;
    int numbers[arraySize];


    for (int i = 0; i < arraySize; i++) {
        numbers[i] = i + 1;
    }


    srand(time(0));
    int targetNumber = numbers[rand() % arraySize];

    cout << "I have chosen a random number between 1 and 100" << endl;

    int guess;
    bool win = false;


    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "Attempt " << attempt << ": Enter your guess: ";
        cin >> guess;

        if (guess == targetNumber) {
            cout << "Congratulations!" << endl;
            win = true;
            break;
        }
        else if (guess < targetNumber) {
            cout << "The number is higher" << endl;
        }
        else {
            cout << "The number is lower" << endl;
        }
    }

    if (!win) {
        cout << "You lost! The correct number " << targetNumber << endl;
    }

    return 0;
}
