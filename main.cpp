#include <iostream>
#include <cstdlib>
#include <ctime>

// Function Prototypes:
void introduction();
void printBoard(char[]);
int playerCount();
void player1Choice(char[]);
void player2Choice(char[]);
bool player1WinCondition(char[]);
bool player2WinCondition(char[]);
bool drawCondition(char[]);
// Add AI for 1 player mode.
// Add flow control

int main()
{
	introduction();

	const int SPOTS = 9;
	char board[SPOTS] = {'-', '-', '-', '-', '-', '-', '-', '-', '-',};

	bool player1Win = false;
	bool player2Win = false;
	bool draw = false;
	
	while (!player1Win && !player2Win && !draw)
	{
		player1Choice(board);
		player1Win = player1WinCondition(board);
		printBoard(board);
		draw = drawCondition(board);

		player2Choice(board);
		printBoard(board);
		player2Win = player2WinCondition(board);
		draw = drawCondition(board);
	}

	system("pause");
	return 0;
}

void introduction()
{
	std::cout << "Welcome to Tic-Tac-Toe! In this game, Player 1 is X and player 2 is O. If you get three in a row, column, or diagonal, you win! ";
	std::cout << "If neither player can do this, it is considered a draw! Have fun!\n\n";

	std::cout << "Here is the board and the number of each space:\n";
	std::cout << "1 | 2 | 3 " << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << "4 | 5 | 6 " << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << "7 | 8 | 9 " << std::endl << std::endl;
}

void printBoard(char board[])
{
	std::cout << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << board[6] << " | " << board[7]<< " | " << board[8] << std::endl;
}

int playerCount()
{
	int players;
	std::cout << "How many players? (1-2): ";
	std::cin >> players;
	while (players != 1 && players != 2)
	{
		std::cout << "Invalid input. How many players? (1-2): ";
		std::cin >> players;
		std::cout << std::endl;
	}

	std::cout << "Player 1 will be X and Player 2 will be O";
	return players;
}

void player1Choice(char board[])
{
	int player1Space;
	std::cout << "Player 1, which space would you like to pick? ";
	std::cin >> player1Space;
	std::cout << std::endl;
	board[player1Space - 1] = 'X';
}

void player2Choice(char board[])
{
	int player2Space;
	std::cout << "Player 2, which space would you like to pick? ";
	std::cin >> player2Space;
	std::cout << std::endl;
	board[player2Space - 1] = 'O';
}

bool player1WinCondition(char board[])
{
	bool winner = false;

	if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') // Top horizontal.
	{
		winner = true;
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') // Middle horizontal.
	{
		winner = true;
	}
	else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') // Bottom horizontal.
	{
		winner = true;
	}
	else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') // Left vertical.
	{
		winner = true;
	}
	else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') // Middle vertical.
	{
		winner = true;
	}
	else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') // Right vertical.
	{
		winner = true;
	}
	else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') // Diagonal down right.
	{
		winner = true;
	}
	else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') // Diagonal down left.
	{
		winner = true;
	}

	// Prints out if player 1 wins.
	if (winner)
	{
		std::cout << "Player 1 wins!\n";
	}
	return winner;
}

bool player2WinCondition(char board[])
{
	bool winner = false;

	if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') // Top horizontal.
	{
		winner = true;
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') // Middle horizontal.
	{
		winner = true;
	}
	else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') // Bottom horizontal.
	{
		winner = true;
	}
	else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') // Left vertical.
	{
		winner = true;
	}
	else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') // Middle vertical.
	{
		winner = true;
	}
	else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') // Right vertical.
	{
		winner = true;
	}
	else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') // Diagonal down right.
	{
		winner = true;
	}
	else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') // Diagonal down left.
	{
		winner = true;
	}

	// Prints out if player 1 wins.
	if (winner)
	{
		std::cout << "Player 2 wins!\n";
	}
	return winner;
}

bool drawCondition(char board[])
{
	bool draw = false;
	for (int i = 0; i < 9; i++)
	{
		if (board[i] == '-')
		{
			return draw;
		}
	}
	draw = true;
	std::cout << "Draw!";
	return draw;
}