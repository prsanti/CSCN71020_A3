#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkIfValidMove(char* move) {
	bool isValid = true;

	if (strcmp(move, "rock") != 0 && strcmp(move, "paper") != 0 && strcmp(move, "scissors") != 0) {
		isValid = false;
	}

	return isValid;
}

char* game(char* player1, char* player2) {
	char* gameResult = "";

	// invalid: compares if either player does not input rock, paper or scissors
	if (checkIfValidMove(player1) == 0 || checkIfValidMove(player2) == 0) {
		gameResult = "Invalid";
	} // player 1 wins
	else if (strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) {
		gameResult = "Player1";
	}
	else if (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0) {
		gameResult = "Player1";
	}
	else if (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0) {
		gameResult = "Player1";
	} // player 2 wins
	else if (strcmp(player1, "rock") == 0 && strcmp(player2, "paper") == 0) {
		gameResult = "Player2";
	}
	else if (strcmp(player1, "paper") == 0 && strcmp(player2, "scissors") == 0) {
		gameResult = "Player2";
	}
	else if (strcmp(player1, "scissors") == 0 && strcmp(player2, "rock") == 0) {
		gameResult = "Player2";
	} // draw
	else if (strcmp(player1, player2) == 0) {
		gameResult = "Draw";
	}

	return gameResult;
}

int main(void) {
	return 0;
}

