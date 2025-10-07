#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char player, computer;
    string options = "RPS";

    cout << "Choose Rock (R), Paper (P), or Scissors (S): ";
    cin >> player;

    computer = options[rand() % 3];

    cout << "Computer chose: " << computer << endl;

    if (computer == player) {
        cout << "It's a tie!" << endl;
    } 
    else if ((player == 'R' && computer == 'S') ||
             (player == 'S' && computer == 'P') ||
             (player == 'P' && computer == 'R')) {
        cout << "You win!" << endl;
    } 
    else {
        cout << "You lose!" << endl;
    }

    return 0;
}
