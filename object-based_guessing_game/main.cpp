#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNum = 0;

    cout << "Provide the largest random number value: ";
    cin >> maxNum;
    cout << "" << endl;
    game game(maxNum);
    return 0;
}
