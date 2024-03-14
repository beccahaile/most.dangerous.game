
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string userName;
    int space = 0;
    int goldCoin;
// welcomes user
    cout << "Welcome to the Most Dangerous Game!" << endl;

// generates interrogator space
    srand(time(0));
    rand();
    int silverCoinPos = rand()% 12 + 1;

//tells user the interrogator's space and asks for user input on gold coin
    cout << "The interrogator's silver coin is placed on space " << silverCoinPos << "." << endl;
    cout << "What space would you like to place your gold coin on?" << endl;
    cin >> goldCoin;

// causes game to continue until game is over

    while(goldCoin > 0 && goldCoin <= 12){

        int die1 = rand() % 6 + 1;
        space = space + die1;

        if(space < 12 && space > 0){
            cout << "You rolled a " << die1 << ", the token is now on space " << space << "." << endl;
            // when user wins
            if(space == goldCoin){
                cout << "Congratulations! You've won your freedom!"<< endl;
                break; // game over
            }
            // when interrogator's wins
            if(space == silverCoinPos){
                cout << "You've been captured! Game over." << endl;
                break; // game over
            }
        }
        // causes space to go back to start
        if(space > 12) {
            space = 0;
            cout << "You rolled a " << die1 << ", token is now on position start" << endl;
        }

    }
// checks if goldcoin value is in range
    while(goldCoin<0 or goldCoin>10) {
        cout << "Please enter a value between 1-12" << endl;
        cin >> goldCoin;
    }

}