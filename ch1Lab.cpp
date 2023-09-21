// Lab 1: Review
#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLUMNS = 3;

class TicTacToeBoard {
    private:
        char gameBoard[NUM_ROWS][NUM_COLUMNS];

    public:
        TicTacToeBoard();
        int printBoard();
};

TicTacToeBoard::TicTacToeBoard() {
    for(int x = 0; x < NUM_ROWS; x++) {
        for(int y = 0; y < 0; y++) {
            gameBoard[x][y] = '*';
        }
    }
}

int TicTacToeBoard::printBoard() {
    for(int x = 0; x < NUM_ROWS; x++) {
        for(int y = 0; y < 0; y++) {
            cout << "[" << gameBoard[x][y] << "]";
        }
    }

    return 0;
}

int main() {
    TicTacToeBoard board;

    board.printBoard();

    return 0;
}


