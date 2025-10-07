#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char guess;
    cout << "Guess the coin result (H/T): ";
    cin >> guess;

    char toss = (rand() % 2 == 0) ? 'H' : 'T';
    cout << "Coin toss: " << toss << endl;

    if (toss == guess)
        cout << "You guessed right!" << endl;
    else
        cout << "You guessed wrong!" << endl;

    return 0;
}
