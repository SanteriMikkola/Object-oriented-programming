#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxNum = 0;

    cout << "Enter the maximum random number value: ";
    cin >> maxNum;

    int guesses = game(maxNum);
    cout << "Number of guesses: " << guesses << endl;

    return 0;
}

int game(int maxnum){

    bool play = true;
    int attempts = 0;
    srand(time(NULL));
    int randomNum = (rand() % maxnum) + 1;

    while(play){
        attempts++;
        cout << "Guess the number: ";
        int guess = 0;
        cin >> guess;

        if (guess > randomNum){
            cout << "The number is smaller" << endl;
            cout << "Try again..." << endl << endl;
        }
        else if (guess < randomNum){
            cout << "The number is larger" << endl;
            cout << "Try again..." << endl << endl;
        }
        else{
            cout << "Correct answer!" << endl;
            play = false;
        }
    }

    return attempts;
}
