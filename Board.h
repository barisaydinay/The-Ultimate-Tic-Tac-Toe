/* Baris Aydinay – 2452977
I read and accept the submission rules and the notes specified in each question. This is my own work that is done by myself only */
#include <iostream>

using namespace std;
class Board { // small 3x3 boards
private:
    int board[3][3];
public:
    Board() { // initalizing all empty slots as -1 numerically
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                board[i][j] = -1;
            }
        }
    }

    Board operator-(Board b) { // - operand, I just make statements for the rules that manuel provided
        Board finalBoard;
        if (this->board[0][0] == 0 || b.board[0][0] == 0)
            finalBoard.board[0][0] = 0;
        else if (this->board[0][0] == -1 && b.board[0][0] == -1)
            finalBoard.board[0][0] = -1;
        else finalBoard.board[0][0] = 1;

        if (this->board[0][1] == 0 || b.board[0][1] == 0)
            finalBoard.board[0][1] = 0;
        else if (this->board[0][1] == -1 && b.board[0][1] == -1)
            finalBoard.board[0][1] = -1;
        else finalBoard.board[0][1] = 1;

        if (this->board[0][2] == 0 || b.board[0][2] == 0)
            finalBoard.board[0][2] = 0;
        else if (this->board[0][2] == -1 && b.board[0][2] == -1)
            finalBoard.board[0][2] = -1;
        else finalBoard.board[0][2] = 1;

        if (this->board[1][0] == 0 || b.board[1][0] == 0)
            finalBoard.board[1][0] = 0;
        else if (this->board[1][0] == -1 && b.board[1][0] == -1)
            finalBoard.board[1][0] = -1;
        else finalBoard.board[1][0] = 1;

        if (this->board[1][1] == 0 || b.board[1][1] == 0)
            finalBoard.board[1][1] = 0;
        else if (this->board[1][1] == -1 && b.board[1][1] == -1)
            finalBoard.board[1][1] = -1;
        else finalBoard.board[1][1] = 1;

        if (this->board[1][2] == 0 || b.board[1][2] == 0)
            finalBoard.board[1][2] = 0;
        else if (this->board[1][2] == -1 && b.board[1][2] == -1)
            finalBoard.board[1][2] = -1;
        else finalBoard.board[1][2] = 1;


        if (this->board[2][0] == 0 || b.board[2][0] == 0)
            finalBoard.board[2][0] = 0;
        else if (this->board[2][0] == -1 && b.board[2][0] == -1)
            finalBoard.board[2][0] = -1;
        else finalBoard.board[2][0] = 1;

        if (this->board[2][1] == 0 || b.board[2][1] == 0)
            finalBoard.board[2][1] = 0;
        else if (this->board[2][1] == -1 && b.board[2][1] == -1)
            finalBoard.board[2][1] = -1;
        else finalBoard.board[2][1] = 1;

        if (this->board[2][2] == 0 || b.board[2][2] == 0)
            finalBoard.board[2][2] = 0;
        else if (this->board[2][2] == -1 && b.board[2][2] == -1)
            finalBoard.board[2][2] = -1;
        else finalBoard.board[2][2] = 1;

        return finalBoard;

    }


    Board operator+(Board b) { // + operand, I just make statements for the rules that manuel provided
        Board finalBoard;
        if (this->board[0][0] == 1 || b.board[0][0] == 1)
            finalBoard.board[0][0] = 1;
        else if (this->board[0][0] == -1 && b.board[0][0] == -1)
            finalBoard.board[0][0] = -1;
        else if (this->board[0][0] != 1 && b.board[0][0] == 0 || this->board[0][0] == 0 && b.board[0][0] != 1)
            finalBoard.board[0][0] = 0;

        if (this->board[0][1] == 1 || b.board[0][1] == 1)
            finalBoard.board[0][1] = 1;
        else if (this->board[0][1] == -1 && b.board[0][1] == -1)
            finalBoard.board[0][1] = -1;
        else if (this->board[0][1] != 1 && b.board[0][1] == 0 || this->board[0][1] == 0 && b.board[0][1] != 1)
            finalBoard.board[0][1] = 0;

        if (this->board[0][2] == 1 || b.board[0][2] == 1)
            finalBoard.board[0][2] = 1;
        else if (this->board[0][2] == -1 && b.board[0][2] == -1)
            finalBoard.board[0][2] = -1;
        else if (this->board[0][2] != 1 && b.board[0][2] == 0 || this->board[0][2] == 0 && b.board[0][2] != 1)
            finalBoard.board[0][2] = 0;

        if (this->board[1][0] == 1 || b.board[1][0] == 1)
            finalBoard.board[1][0] = 1;
        else if (this->board[1][0] == -1 && b.board[1][0] == -1)
            finalBoard.board[1][0] = -1;
        else if (this->board[1][0] != 1 && b.board[1][0] == 0 || this->board[1][0] == 0 && b.board[1][0] != 1)
            finalBoard.board[1][0] = 0;

        if (this->board[1][1] == 1 || b.board[1][1] == 1)
            finalBoard.board[1][1] = 1;
        else if (this->board[1][1] == -1 && b.board[1][1] == -1)
            finalBoard.board[1][1] = -1;
        else if (this->board[1][1] != 1 && b.board[1][1] == 0 || this->board[1][1] == 0 && b.board[1][1] != 1)
            finalBoard.board[1][1] = 0;

        if (this->board[1][2] == 1 || b.board[1][2] == 1)
            finalBoard.board[1][2] = 1;
        else if (this->board[1][2] == -1 && b.board[1][2] == -1)
            finalBoard.board[1][2] = -1;
        else if (this->board[1][2] != 1 && b.board[1][2] == 0 || this->board[1][2] == 0 && b.board[1][2] != 1)
            finalBoard.board[1][2] = 0;

        if (this->board[2][0] == 1 || b.board[2][0] == 1)
            finalBoard.board[2][0] = 1;
        else if (this->board[2][0] == -1 && b.board[2][0] == -1)
            finalBoard.board[2][0] = -1;
        else if (this->board[2][0] != 1 && b.board[2][0] == 0 || this->board[2][0] == 0 && b.board[2][0] != 1)
            finalBoard.board[2][0] = 0;

        if (this->board[2][1] == 1 || b.board[2][1] == 1)
            finalBoard.board[2][1] = 1;
        else if (this->board[2][1] == -1 && b.board[2][1] == -1)
            finalBoard.board[2][1] = -1;
        else if (this->board[2][1] != 1 && b.board[2][1] == 0 || this->board[2][1] == 0 && b.board[2][1] != 1)
            finalBoard.board[2][1] = 0;

        if (this->board[2][2] == 1 || b.board[2][2] == 1)
            finalBoard.board[2][2] = 1;
        else if (this->board[2][2] == -1 && b.board[2][2] == -1)
            finalBoard.board[2][2] = -1;
        else if (this->board[2][2] != 1 && b.board[2][2] == 0 || this->board[2][2] == 0 && b.board[2][2] != 1)
            finalBoard.board[2][2] = 0;

        return finalBoard;

    }

    int operator!() { // ! operand to determine the winner in small boards when tie occurs, it just calculates the points of X and O
        int totalX = 0, totalO = 0, i,j;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (board[i][j] == 1) {
                    if (i == 0 && j == 0) totalX = totalX + 1;
                    else if (i == 0 && j == 1) totalX = totalX + 2;
                    else if (i == 0 && j == 2) totalX = totalX + 3;
                    else if (i == 1 && j == 0) totalX = totalX + 4;
                    else if (i == 1 && j == 1) totalX = totalX + 5;
                    else if (i == 1 && j == 2) totalX = totalX + 6;
                    else if (i == 2 && j == 0) totalX = totalX + 7; 
                    else if (i == 2 && j == 1) totalX = totalX + 8; 
                    else if (i == 2 && j == 2) totalX = totalX + 9; 
                }
                else {
                    if (i == 0 && j == 0) totalO = totalO + 1;
                    else if (i == 0 && j == 1) totalO = totalO + 2;
                    else if (i == 0 && j == 2) totalO = totalO + 3;
                    else if (i == 1 && j == 0) totalO = totalO + 4;
                    else if (i == 1 && j == 1) totalO = totalO + 5;
                    else if (i == 1 && j == 2) totalO = totalO + 6;
                    else if (i == 2 && j == 0) totalO = totalO + 7;
                    else if (i == 2 && j == 1) totalO = totalO + 8;
                    else if (i == 2 && j == 2) totalO = totalO + 9;
                }

            }
        }
        if (totalX > totalO) return 1;
        else return 0;
    }

    int isSlotFull(int slot) { // Checking if slot is full
        if (slot == 1 && board[0][0] != -1) {
            return 1;
        }
        else if (slot == 2 && board[0][1] != -1) {
            return 1;
        }
        else if (slot == 3 && board[0][2] != -1) {
            return 1;
        }
        else if (slot == 4 && board[1][0] != -1) {
            return 1;
        }
        else if (slot == 5 && board[1][1] != -1) {
            return 1;
        }
        else if (slot == 6 && board[1][2] != -1) {
            return 1;
        }
        else if (slot == 7 && board[2][0] != -1) {
            return 1;
        }
        else if (slot == 8 && board[2][1] != -1) {
            return 1;
        }
        else if (slot == 9 && board[2][2] != -1) {
            return 1;
        }
        else return 0;

    }

    int fullOrNot() { // Checking if BOARD is FULL, I mainly used that function to detect the tie condition in samll boards, and then apply ! operand
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (board[i][j] == -1) {
                    return 0;
                }
            }
        }
        return 1;
    }
    void setMove(int slot, int playerTurn) { // Setting move for small boards
        if (slot == 1) {
            board[0][0] = playerTurn;
        }
        else if (slot == 2) {
            board[0][1] = playerTurn;
        }
        else if (slot == 3) {
            board[0][2] = playerTurn;
        }
        else if (slot == 4) {
            board[1][0] = playerTurn;
        }
        else if (slot == 5) {
            board[1][1] = playerTurn;
        }
        else if (slot == 6) {
            board[1][2] = playerTurn;
        }
        else if (slot == 7) {
            board[2][0] = playerTurn;
        }
        else if (slot == 8) {
            board[2][1] = playerTurn;
        }
        else {
            board[2][2] = playerTurn;
        }


    }
    int winCheck() { // All 8 conditions for winning
        if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] == 1) {
            return 1;
        }
        else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] == 1) {
            return 1;
        }
        else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] == 1) {
            return 1;
        }
        else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0] == 1) {
            return 1;
        }
        else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] == 1) {
            return 1;
        }
        else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] == 1) {
            return 1;
        }
        else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 1) {
            return 1;
        }
        else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 1) {
            return 1;
        }
        else if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] == 0) {
            return 0;
        }
        else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] == 0) {
            return 0;
        }
        else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] == 0) {
            return 0;
        }
        else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0] == 0) {
            return 0;
        }
        else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] == 0) {
            return 0;
        }
        else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] == 0) {
            return 0;
        }
        else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 0) {
            return 0;
        }
        else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 0) {
            return 0;
        }
        return -1;
    }
    void display(int i, int j) {


        if (board[i][j] == 0) {
            cout << "O ";
        }
        else if (board[i][j] == 1) {
            cout << "X ";
        }
        else {
            cout << "* ";
        }


    }

    int getOperand1() {
        return board[0][0];
    }
    int getOperand2() {
        return board[0][1];
    }
    int getOperand3() {
        return board[0][2];
    }
    int getOperand4() {
        return board[1][0];
    }
    int getOperand5() {
        return board[1][1];
    }
    int getOperand6() {
        return board[1][2];
    }
    int getOperand7() {
        return board[2][0];
    }
    int getOperand8() {
        return board[2][1];
    }
    int getOperand9() {
        return board[2][2];
    }

};
