/* Baris Aydinay – 2452977
I read and accept the submission rules and the notes specified in each question. This is my own work that is done by myself only */
#include <iostream>
#include "OldBoards.h"
#include <time.h>
using namespace std;

//Rules: 
// 1) First X starts the game.
// 2) Who wins the best of 3 wins the whole game. If 1-1 condition occurs, the last game is played by computer. (Randomness Effect)
// 3) Players must first choose the board among 9 boards, and then need to enter the slot for their operand.
// 4) Randomness Effect puts the operand in boards respectively 1,2,3,4,5,6,7,8,9.
// 5) No tie condition in small boards, however tie condition is available in big boards.
// Have Fun !


int main() {
	srand(time(NULL));

	int playerTurn = 1; // 1 means X is playing, 0 means O is playing
	BigBoard bigboard, bigboard2; // I have two bigboards for two games
	OldBoards oldboards; // This is my board that created for randomness effect
	
	int X_win_count = 0, O_win_count = 0; // Counts the X's and O's wins after each game
	int boardAdres, slotAdres; // Bigboards address and smallBoards sloat address
	cout << "Game 1 Starts!" << endl << "------------------------------------------------------------" << endl;
	bigboard.display();
	cout << endl << "------------------------------------------------------------" << endl;

	cout << "X starts the game!" << endl << "------------------------------------------------------------" << endl;
	while (bigboard.bigScoreCheck() == -1) { // Continues until bigBoard is won by any user
		int k;
		int checkingDraw = 0;
		for (k = 0; k < 9; k++) { // Checking the draw condition
			if (bigboard.getSmallBoards(k).winCheck() == 1 || bigboard.getSmallBoards(k).winCheck() == 0) {
				checkingDraw++;
			}
		}
		if (checkingDraw == 9) break;

		int flag = 1;
		cout << "Enter the board number , you want to insert your operand: ";
		cin >> boardAdres;
		if (bigboard.boards[boardAdres - 1].winCheck() == 1 || bigboard.boards[boardAdres - 1].winCheck() == 0) { // Avoids users to play any board won by ay user

			do {
				cout  << "!!!! This grid is finished, please enter another grid to play:";
				cin >> boardAdres;

			} while (bigboard.boards[boardAdres - 1].winCheck() == 1 || bigboard.boards[boardAdres - 1].winCheck() == 0);
		}

		cout << "Enter the slot number, you want to insert your operand:";
		cin >> slotAdres;
		cout << "------------------------------------------------------------" << endl;
		while (flag == 1) {
			if (bigboard.boards[boardAdres - 1].isSlotFull(slotAdres) == 1) { // Users can not play any slot that is played before
				cout << "------------------------------------------------------------" << endl;
				cout << "Not valid slot, please enter again !" << endl;
				cout << "Enter the board number , you want to insert your operand: ";
				cin >> boardAdres;
				cout << "Enter the slot number, you want to insert your operand:";
				cin >> slotAdres;
				cout << "------------------------------------------------------------" << endl;

			}
			else flag = 0;
		}

		bigboard.setMove(boardAdres - 1, slotAdres, playerTurn); // Saving the operand for desired place
		bigboard.display();
		if (bigboard.getSmallBoards(boardAdres - 1).winCheck() == 1) { // Checking any win conditions for small boards
			bigboard.InsertbigScore(boardAdres - 1, playerTurn);
		}
		else if (bigboard.getSmallBoards(boardAdres - 1).winCheck() == 0) {
			bigboard.InsertbigScore(boardAdres - 1, playerTurn);
		}
		else if (bigboard.getSmallBoards(boardAdres - 1).fullOrNot() == 1) {
			if (!bigboard.boards[boardAdres - 1] == 1) bigboard.InsertbigScore(boardAdres - 1, playerTurn); // '!' operator is used for calculating points on tie
			else bigboard.InsertbigScore(boardAdres - 1, playerTurn);
		}



		if (playerTurn == 1) playerTurn = 0; // Change the turn
		else playerTurn = 1;
		if (playerTurn == 0) cout << "O's turn!" << endl << "------------------------------------------------------------" << endl;
		else cout << "X's turn!" << endl << "------------------------------------------------------------" << endl;

	}


	cout << "------------------------------------------------------------" << endl;
	if (bigboard.bigScoreCheck() == 1) {  // Checking scores
		cout << "X WINS!" << endl; X_win_count++;
	}
	else if (bigboard.bigScoreCheck() == 0) {
		cout << "O WINS!" << endl; O_win_count++;
	}
	else cout << "DRAW!" << endl;

	oldboards.InsertFirstBigBoard(bigboard); // Once the game is finished , it is saved to another class


	
    // Game 2

	// Same operations done here

	cout << "Game 2 Starts!" << endl << "------------------------------------------------------------" << endl;
	bigboard2.display();
	cout << endl << "------------------------------------------------------------" << endl;

	while (bigboard2.bigScoreCheck() == -1) {
		int k;
		int checkingDraw = 0;
		for (k = 0; k < 9; k++) {
			if (bigboard2.getSmallBoards(k).winCheck() == 1 || bigboard2.getSmallBoards(k).winCheck() == 0) {
				checkingDraw++;
			}
		}
		if (checkingDraw == 9) break;

		int flag = 1;
		cout << "Enter the board number , you want to insert your operand: ";
		cin >> boardAdres;
		if (bigboard2.boards[boardAdres - 1].winCheck() == 1 || bigboard2.boards[boardAdres - 1].winCheck() == 0) {

			do {
				cout << "!!!! This grid is finished, please enter another grid to play:";
				cin >> boardAdres;

			} while (bigboard2.boards[boardAdres - 1].winCheck() == 1 || bigboard2.boards[boardAdres - 1].winCheck() == 0);
		}

		cout << "Enter the slot number, you want to insert your operand:";
		cin >> slotAdres;
		cout << "------------------------------------------------------------" << endl;
		while (flag == 1) {
			if (bigboard2.boards[boardAdres - 1].isSlotFull(slotAdres) == 1) {
				cout << "------------------------------------------------------------" << endl;
				cout << "Not valid slot, please enter again !" << endl;
				cout << "Enter the board number , you want to insert your operand: ";
				cin >> boardAdres;
				cout << "Enter the slot number, you want to insert your operand:";
				cin >> slotAdres;
				cout << "------------------------------------------------------------" << endl;

			}
			else flag = 0;
		}

		bigboard2.setMove(boardAdres - 1, slotAdres, playerTurn);
		bigboard2.display();
		if (bigboard2.getSmallBoards(boardAdres - 1).winCheck() == 1) {
			bigboard2.InsertbigScore(boardAdres - 1, playerTurn);
		}
		else if (bigboard2.getSmallBoards(boardAdres - 1).winCheck() == 0) {
			bigboard2.InsertbigScore(boardAdres - 1, playerTurn);
		}
		else if (bigboard2.getSmallBoards(boardAdres - 1).fullOrNot() == 1) {
			if (!bigboard2.boards[boardAdres - 1] == 1) bigboard2.InsertbigScore(boardAdres - 1, playerTurn); // '!' operator is used for calculating points on tie
			else bigboard2.InsertbigScore(boardAdres - 1, playerTurn);
		}


		if (playerTurn == 1) playerTurn = 0;
		else playerTurn = 1;
		if (playerTurn == 0) cout << "O's turn!" << endl << "------------------------------------------------------------" << endl;
		else cout << "X's turn!" << endl << "------------------------------------------------------------" << endl;

	}


	cout << "------------------------------------------------------------" << endl;
	if (bigboard2.bigScoreCheck() == 1) {
		cout << "X WINS!" << endl; X_win_count++;
	}
	else if (bigboard2.bigScoreCheck() == 0) {
		cout << "O WINS!" << endl; O_win_count++;
	}
	else cout << "DRAW!" << endl;

	oldboards.InsertSecondBigBoard(bigboard2);


	int flag2 = 0;  // Checking the total X and O wins and determining if Randomness effect is needed
	int randNumber;
	randNumber = (rand() % 2); // RandomNumber is generated
	if (X_win_count > O_win_count) cout << "X WINS WHOLE GAME!" << endl;
	else if (X_win_count < O_win_count) cout << "O WINS WHOLE GAME!" << endl;
	else {


		if (randNumber == 0) { // + randomness effect

			cout << endl << "------------------------------------------------------------" << endl << "Randomness Effect Implemented (+)" << endl;

			for (int q = 0; q < 9; q++) { // Fetching the old bigboards operands and process them with '+' operator to determine the new operand.

				if ((oldboards.getBB1().boards[q] + oldboards.getBB2().boards[q]).winCheck() == 1) {
					oldboards.InsertbigScore(q, 1);
				}
				else if ((oldboards.getBB1().boards[q] + oldboards.getBB2().boards[q]).winCheck() == 0) {
					oldboards.InsertbigScore(q, 0);
				}
				else if ((oldboards.getBB1().boards[q] + oldboards.getBB2().boards[q]).fullOrNot() == 1) {
					if (!(oldboards.getBB1().boards[q] + oldboards.getBB2().boards[q]) == 1)  oldboards.InsertbigScore(q, 1);
					else oldboards.InsertbigScore(q, 0);
				}

				if (flag2 == 0 && oldboards.bigScoreCheck() == 1) {
					cout << endl << "------------------------------------------------------------" << endl << "X WINS WHOLE GAME!" << endl << "------------------------------------------------------------" << endl;
					flag2 = 1;
					break;
				}
				else if (flag2 == 0 && oldboards.bigScoreCheck() == 0) {
					cout << endl << "------------------------------------------------------------" << endl << "O WINS WHOLE GAME!" << endl << "------------------------------------------------------------" << endl;
					flag2 = 1;
					break;
				}

			}


		}



		else { // - randomness effect
		cout << endl << "------------------------------------------------------------" << endl << "Randomness Effect Implemented (-)" << endl;

			for (int q = 0; q < 9; q++) { // Fetching the old bigboards operands and process them with '-' operator to determine the new operand.
				if ((oldboards.getBB1().boards[q] - oldboards.getBB2().boards[q]).winCheck() == 1) {
					oldboards.InsertbigScore(q, 1);
				}
				else if ((oldboards.getBB1().boards[q] - oldboards.getBB2().boards[q]).winCheck() == 0) {
					oldboards.InsertbigScore(q, 0);
				}
				else if ((oldboards.getBB1().boards[q] - oldboards.getBB2().boards[q]).fullOrNot() == 1) {
					if (!(oldboards.getBB1().boards[q] - oldboards.getBB2().boards[q]) == 1)  oldboards.InsertbigScore(q, 1);
					else oldboards.InsertbigScore(q, 0);
				}

				if (flag2 == 0 && oldboards.bigScoreCheck() == 1) {
					cout << endl << "X WINS WHOLE GAME!" << endl << "------------------------------------------------------------" << endl;
					flag2 = 1;
					break;
				}
				else if (flag2 == 0 && oldboards.bigScoreCheck() == 0) {
					cout << endl << "O WINS WHOLE GAME!" << endl << "------------------------------------------------------------" << endl;
					flag2 = 1;
					break;
				}

			}


		}

		if (flag2 == 0) { // If Randomness effect can not determine the winner, 50% chance is implied to determine the winner
			int randNumber2 = (rand() % 2);

			if (randNumber2) cout << "X WINS THE WHOLE GAME WITH %50 CHANCE!";
			else cout << "O WINS WHOLE GAME WITH %50 CHANCE!";

		}

	}



}