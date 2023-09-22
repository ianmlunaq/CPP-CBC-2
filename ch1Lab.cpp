// Lab 1: Review
#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLUMNS = 3;
const int MAX_TURNS = 9;

class TicTacToeBoard {
    private:
        char gameBoard[NUM_ROWS][NUM_COLUMNS];

    public:
        TicTacToeBoard();
        int printBoard();
        int xPlay();
        int oPlay();
        int determineWinner();
};

TicTacToeBoard::TicTacToeBoard() {
    for(int x = 0; x < NUM_ROWS; x++) {
        for(int y = 0; y < NUM_COLUMNS; y++) {
            gameBoard[x][y] = '*';
        }
    }
}

int TicTacToeBoard::printBoard() {
    cout << "   1  2  3\n";
    for(int x = 0; x < NUM_ROWS; x++) {
        cout << x + 1 << " ";
        for(int y = 0; y < NUM_COLUMNS; y++) {
            cout << "[" << gameBoard[x][y] << "]";
        }
        cout << endl;
    }

    return 0;
}

int TicTacToeBoard::xPlay() {
    int x, y;

    cout << "It is X player\'s turn.\nType in row...";
    cin >> x;
    cout << "\nType in column";
    cin >> y;

    gameBoard[x][y] = 'X';
    return 0;
}

int TicTacToeBoard::oPlay() {
    int x, y;

    cout << "It is O player\'s turn.\nType in row...";
    cin >> x;
    cout << "\nType in column";
    cin >> y;

    gameBoard[x][y] = 'O';
    return 0;
}

int TicTacToeBoard::determineWinner() {
    return 0;
}

int main() {
    TicTacToeBoard board;

    board.printBoard();

    return 0;
}


