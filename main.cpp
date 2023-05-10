#include <iostream>
#include <cstdlib>
#include <ctime>

// Function Prototypes:
void introduction();
void printBoard(char[]);
int playerCount();
void player1Choice(char[]);
void player2Choice(char[]);
// Add player 1 win condition function
// Add player 2 win condition function
// Add AI for 1 player mode.
// Add input validation
// Add flow control

int main()
{
	const int SPOTS = 9;
	char board[SPOTS] = {'-', '-', '-', '-', '-', '-', '-', '-', '-',};

	printBoard(board);
	player1Choice(board);
	printBoard(board);
	player2Choice(board);
	printBoard(board);

	system("pause");
	return 0;
}

void introduction()
{
	// std::cout << introduction
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
	std::cout << "Player 1 will be X and Player 2 will be O";
	return players;
}

void player1Choice(char board[])
{
	int player1Space;
	std::cout << "Player 1, which space would you like to pick? ";
	std::cin >> player1Space;
	std::cout << std::endl;
	player1Space -= 1;
	board[player1Space] = 'X';
}

void player2Choice(char board[])
{
	int player2Space;
	std::cout << "Player 2, which space would you like to pick? ";
	std::cin >> player2Space;
	std::cout << std::endl;
	player2Space -= 1;
	board[player2Space] = 'O';
}