/* Baris Aydinay – 2452977
I read and accept the submission rules and the notes specified in each question. This is my own work that is done by myself only */
#include <iostream>
#include "BigBoard.h"

using namespace std;

class OldBoards { // Storage for oldBoards
private:
	BigBoard big_boards[2];
	int bigScore[9];
public:
	OldBoards() { // Initializing
		for (int i = 0; i < 9; i++) {
			bigScore[i] = -1;
		}
	}

	void InsertFirstBigBoard(BigBoard bb) { // First big board is stored
		big_boards[0] = bb;

	}
	void InsertSecondBigBoard(BigBoard bb) { // Second big board is stored
		big_boards[1] = bb;
	}

	BigBoard getBB1() { // Getter for BB1
		return big_boards[0];
	}

	BigBoard getBB2() { // Getter for BB2
		return big_boards[1];
	}

	// After this part, 2 functions below are similiar to BigBoard's.

	int bigScoreCheck() { // All conditions for win
		if (bigScore[0] == bigScore[1] && bigScore[1] == bigScore[2] && bigScore[0] == 1) {
			return 1;
		}
		else if (bigScore[3] == bigScore[4] && bigScore[4] == bigScore[5] && bigScore[3] == 1) {
			return 1;
		}
		else if (bigScore[6] == bigScore[7] && bigScore[7] == bigScore[8] && bigScore[6] == 1) {
			return 1;
		}
		else if (bigScore[0] == bigScore[3] && bigScore[3] == bigScore[6] && bigScore[0] == 1) {
			return 1;
		}
		else if (bigScore[1] == bigScore[4] && bigScore[4] == bigScore[7] && bigScore[1] == 1) {
			return 1;
		}
		else if (bigScore[2] == bigScore[5] && bigScore[5] == bigScore[8] && bigScore[2] == 1) {
			return 1;
		}
		else if (bigScore[0] == bigScore[4] && bigScore[4] == bigScore[8] && bigScore[0] == 1) {
			return 1;
		}
		else if (bigScore[2] == bigScore[4] && bigScore[4] == bigScore[6] && bigScore[2] == 1) {
			return 1;
		}
		else if (bigScore[0] == bigScore[1] && bigScore[1] == bigScore[2] && bigScore[0] == 0) {
			return 0;
		}
		else if (bigScore[3] == bigScore[4] && bigScore[4] == bigScore[5] && bigScore[3] == 0) {
			return 0;
		}
		else if (bigScore[6] == bigScore[7] && bigScore[7] == bigScore[8] && bigScore[6] == 0) {
			return 0;
		}
		else if (bigScore[0] == bigScore[3] && bigScore[3] == bigScore[6] && bigScore[0] == 0) {
			return 0;
		}
		else if (bigScore[1] == bigScore[4] && bigScore[4] == bigScore[7] && bigScore[1] == 0) {
			return 0;
		}
		else if (bigScore[2] == bigScore[5] && bigScore[5] == bigScore[8] && bigScore[2] == 0) {
			return 0;
		}
		else if (bigScore[0] == bigScore[4] && bigScore[4] == bigScore[8] && bigScore[0] == 0) {
			return 0;
		}
		else if (bigScore[2] == bigScore[4] && bigScore[4] == bigScore[6] && bigScore[2] == 0) {
			return 0;
		}
		return -1;
	}

	void InsertbigScore(int adres, int operand) { // Same logic as BigBoards function
		if (operand == 1) bigScore[adres] = 1;
		else bigScore[adres] = 0;
	}


};