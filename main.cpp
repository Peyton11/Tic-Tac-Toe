#include <iostream>

// Function Prototypes:
void printBoard(char[]);
int players();

int main()
{
	const int SPOTS = 9;
	char board[SPOTS] = {'-', '-', '-',
						'-', '-', '-',			
						'-', '-', '-',};

	printBoard(board);
	return 0;
}

void printBoard(char board[])
{
	std::cout << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << board[6] << " | " << board[7]<< " | " << board[8] << std::endl;
}

int players()
{
	int players;
	std::cout << "How many players?\n1 Player[1]\n2 Player[2]\n";
	std::cin >> players;
	return players;
}