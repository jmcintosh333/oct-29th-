#include"TicTacToe.h"

#include<iostream> 
#include<string>



void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{

	for() 
	std::cout << "Player X, enter your move: " << std::endl;
	std::cout << "Allowed moves are:" << std::endl;
	std::cout << "abc" << std::endl; //doing this prevents user from having to say 0, 0 or 1, 2, etc.
	std::cout << "def" << std::endl;
	std::cout << "hgi" << std::endl;


	std::string playerXMove;

	std::getline(std::cin, playerXMove);

	//ticTacToeGrid[0][0] = "X";
	updateGrid(ticTacToeGrid, playerXMove, "X");

	//after X makes a move, we should show O what the updated grid looks like: 
	printTheGrid(ticTacToeGrid);




	/*now player O moves :*************************************************************/
	std::cout << std::endl << std::endl; //makes 2 blank lines for spacing
	std::cout << "Now player O" << std::endl;
	std::string playerOMove;

	std::getline(std::cin, playerOMove);

	//ticTacToeGrid[0][0] = "X";
	updateGrid(ticTacToeGrid, playerXMove, "X");
	updateToGrid(ticTacToeGrid, playerOMOve, "O")
	std::cout << "After the player X made a move, the grid looks like:" << std::endl
	printTheGrid(ticTacToeGrid);

	std::cout << std::endl << std::endl
	std::cout<< 
} //end of the playGame function
if (movecount >= 5)
{
	isgraph = checkForWin(TicTacToeGrid);
}

}


void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{
	//switch requires chars (or ints) -> strings will NOT work 

	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}

	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}

	//etc. all the way to i
}

void TicTacToe::printTheGrid(twoDGrid& ticTacGrid)
{
	//n****** loop
	for (int row = 0; row < ticTacGrid.size(); ++row)
	{
		for (int col = 0; col < ticTacGrid[0].size(); ++col)
		{
			std::cout << "|" << ticTacGrid[row][col] <<;
		}
		std::cout << "___" << std::endl;
	}
}
bool TicTacToe::checkForWin(const twoGrid& ticTacGrid)
{
	ticTacToeGrid[0][0] = "X";
	return true; 
	return false;

}
//void TicTacToe::updateGrid(twoDGrid ticTacGrid, std::string theMove)
//{
//}

//void TicTacToe::updateGrid(twoDGrid ticTacGrid, std::string playerMove)
//{
//
//}