#include "pch.h"
#include <iostream>
#define LENGTH_OF_SQUARE 3

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n;

void Draw() {
	std::cout << "Tic Tac Toe v1.0\n";
	for (int i = 0; i < LENGTH_OF_SQUARE; i++)
	{
		for (int j = 0; j < LENGTH_OF_SQUARE; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void Input() {
	int a;
	std::cout << "It's player " << player << " Press the number of the field: ";
	std::cin >> a;

	switch (a)
	{
	case 1:
		if (matrix[0][0] == '1')
		{
			matrix[0][0] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}

	case 2:
		if (matrix[0][1] == '2')
		{
			matrix[0][1] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";

			Input();
			break;
		}

	case 3:
		if (matrix[0][2] == '3')
		{
			matrix[0][2] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 4:
		if (matrix[1][0] == '4')
		{
			matrix[1][0] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 5:
		if (matrix[1][1] == '5')
		{
			matrix[1][1] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 6:
		if (matrix[1][2] == '6')
		{
			matrix[1][2] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 7:
		if (matrix[2][0] == '7')
		{
			matrix[2][0] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 8:
		if (matrix[2][1] == '8')
		{
			matrix[2][1] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	case 9:
		if (matrix[2][2] == '9')
		{
			matrix[2][2] = player;
			break;
		}
		else {
			std::cout << "Your number is in use, try again!\n";
			Input();
			break;
		}
	default:
		std::cout << "Sorry you pressed wrong nubmer\n";
		break;
	}

}

void TogglePlayer() {
	if (player == 'X') {
		player = 'O';
	}
	else {
		player = 'X';
	}
}

char Win() {
	if (matrix[0][0] == 'X'	&&	matrix[0][1] == 'X'	&&	matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X'&&matrix[1][1] == 'X'&&matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X'&&matrix[2][1] == 'X'&&matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X'&&matrix[1][0] == 'X'&&matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X'&&matrix[1][1] == 'X'&&matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X'&&matrix[1][2] == 'X'&&matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X'&&matrix[1][1] == 'X'&&matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X'&&matrix[1][1] == 'X'&&matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'O'&&matrix[0][1] == 'O'&&matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O'&&matrix[1][1] == 'O'&&matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O'&&matrix[2][1] == 'O'&&matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	return '/';

}

int main()
{
	n = 0;
	Draw();

	while (true) {
		n++;
		Input();
		Draw();

		//DRAW
		if (Win() == '/'&&n == 9) {
			std::cout << "It's draw!\n";
			break;
		}

		//X WON
		if (Win() == 'X') {
			std::cout << "X player WON! COngratulations\n";
			break;
		}

		//O WON
		if (Win() == 'O') {
			std::cout << "O player WON! COngratulations\n";
			break;
		}

		TogglePlayer();
	}


}
