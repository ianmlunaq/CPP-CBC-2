#include <iostream>

using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLUMNS = 3;
const int MAX_TURNS = 9;

int main() {
    char gameBoard[NUM_ROWS][NUM_COLUMNS];
    int winFactor = 0;

    for(int x = 0; x < NUM_ROWS; x++) {
        for(int y = 0; y < NUM_COLUMNS; y++) {
            gameBoard[x][y] = '*';
        }
    }

    gameBoard[2][0] = 'X';
    gameBoard[1][1] = 'X';
    gameBoard[0][2] = 'X';


    for(int n = 2, o = 0; n > -1; n--, o++) {
        if(gameBoard[n][o] == 'X') {
            winFactor++;
        } else if (gameBoard[n][o] == 'O') {
            winFactor--;
        }

        cout << " [" << n << "][" << o << "]," << winFactor;
    }
}
