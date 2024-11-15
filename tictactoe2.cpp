#include <bits/stdc++.h>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, column;
char token = 'x';
bool tie = false;
string n1 = "";
string n2 = "";

void functionOne() {
    cout << "    |    |    \n";
    cout << "  " << space[0][0] << " |  " << space[0][1] << "  |  " << space[0][2] << "   \n";
    cout << "____|____|____\n";
    cout << "    |    |    \n";
    cout << "  " << space[1][0] << " |  " << space[1][1] << "  |  " << space[1][2] << "   \n";
    cout << "____|____|____\n";
    cout << "    |    |    \n";
    cout << "  " << space[2][0] << " |  " << space[2][1] << "  |  " << space[2][2] << "   \n";
    cout << "    |    |    \n";
}

void functionTwo() {
    int digit;
    cout << (token == 'x' ? n1 : n2) << ", please enter your move (1-9): ";
    cin >> digit;

    if (digit < 1 || digit > 9) {
        cout << "Invalid input! Please enter a number between 1 and 9.\n";
        functionTwo();
        return;
    }

    // Determine the row and column based on digit
    row = (digit - 1) / 3;
    column = (digit - 1) % 3;

    if (space[row][column] != 'x' && space[row][column] != '0') {
        space[row][column] = token;
        token = (token == 'x') ? '0' : 'x';
    } else {
        cout << "Cell is already occupied! Try again.\n";
        functionTwo();
    }
}

bool functionThree() {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] ||
            space[0][i] == space[1][i] && space[0][i] == space[2][i])
            return true;
    }
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] ||
        space[0][2] == space[1][1] && space[1][1] == space[2][0])
        return true;

    // Check for tie
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'x' && space[i][j] != '0')
                return false;
        }
    }
    tie = true;
    return false;
}

int main() {
    cout << "Enter the name of the first player: ";
    getline(cin, n1);
    cout << "Enter the name of the second player: ";
    getline(cin, n2);
    cout << n1 << " is Player 1 and will play first.\n";
    cout << n2 << " is Player 2 and will play second.\n";

    while (!functionThree()) {
        functionOne();
        functionTwo();
    }

    functionOne();
    if (!tie) {
        cout << (token == 'x' ? n2 : n1) << " wins!!\n";
    } else {
        cout << "It's a draw!\n";
    }

    return 0;
}

