/* Baris Aydinay – 2452977
I read and accept the submission rules and the notes specified in each question. This is my own work that is done by myself only */
#include <iostream>
#include "Board.h"
using namespace std;

class BigBoard { // Includes 9 small boards
public:
	Board boards[9];
	int bigScore[9]; // I created this bigScore array to determine the BigBoards winner, in same manner
public:
	BigBoard() { // Initializing
		int i;
		for (i = 0; i < 9; i++) {
			bigScore[i] = -1;
		}
	}

	void setMove(int a, int b, int c) { // Saving the operand to intended place
		boards[a].setMove(b, c);

	}

	Board getSmallBoards(int i) { // Getting the small boards
		return boards[i];
	}

	void InsertbigScore(int adres,int operand) { // If any board is won by any player, the the board's address and winner operand saved to bigScore array
		if (operand == 1) bigScore[adres] = 1;
		else bigScore[adres] = 0;
	}

	int bigScoreCheck() { // All conditions to win
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
		return -1; // No one wins yet
	}

	void display() { // I make relation of the indexes of 9x9 Board, and small boards indexes to print it
		int a, b, c;
		for (c = 0; c < 3; c++)
		{
		  for (a = 0; a < 3; a++)
		    {
		      for (b = 0; b < 3; b++)
		        {
		         boards[a].display(c, b);

				}cout << " ";
			}cout << endl;
		}cout << endl;
		for (c = 0; c < 3; c++)
		{
		  for (a = 3; a < 6; a++)
			{
			  for (b = 0; b < 3; b++)
				{
					boards[a].display(c, b);
				}cout << " ";
			}cout << endl;
			
		}cout << endl;
		
		for (c = 0; c < 3; c++)
		{
		  for (a = 6; a < 9; a++)
			{
		     for (b = 0; b < 3; b++)
				{
					boards[a].display(c, b);
				}cout << " ";
				
			}cout << endl;
		}
	}

};
