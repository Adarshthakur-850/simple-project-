#include <iostream>
using namespace std;

void drawBoard(char board[3][3]);
int checkWin(char board[3][3], char player);
int checkDraw(char board[3][3]);

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int player = 1;
    int choice;
    int gameStatus = -1;

    do {
        drawBoard(board);

        cout << "Player " << player << ", enter a number (1-9) where you want to place your marker: ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == ' ') {
            if (player == 1)
                board[row][col] = 'X';
            else
                board[row][col] = 'O';

            gameStatus = checkWin(board, player);
            if (gameStatus == -1) {
                player = (player % 2) + 1;
            }
        } else {
            cout << "Invalid move. Please choose an empty cell.\n";
        }
    } while (gameStatus == -1 && checkDraw(board) == 0);

    drawBoard(board);

    if (gameStatus == 1)
        cout << "Player 1 wins!\n";
    else if (gameStatus == 2)
        cout << "Player 2 wins!\n";
    else
        cout << "It's a draw!\n";

    return 0;
}

void drawBoard(char board[3][3]) {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
    cout << "\n";
}

int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return player;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return player;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return player;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return player;

    return -1;
}

int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}
