
#include <iostream>
#include<vector>

void printSalesData(std::vector<std::vector<int>> salesData)
{
    //NESTED loop! YAY!

    const int WIDEST_COLUMN = 10;

    for (int row = 0; row < salesData.size(); ++row)
    {
        for (int column = 0; column < salesData[0].size(); ++column)
        {
            std::cout << salesData[row][column] << " "; //wrong!
            std::cout << std::left;
            std::cout << salesData[row][column];
        } 
        std::cout << std::endl;
    }

}
    
int main()
{
    //xox
    //oxo
    //xoo
    std::vector<std::vector<int>> salesData = 
    {
        {1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
        { 10,11, 12 },
    };

    printSalesData(salesData);
    //dimensions of this array (also called MATRIX) are 4 x 3 (4 rows and 3 COLUMS)
   // std::vector<std::vector<char>> ticTacToeGrid(3, std:vector<char>(3));
}

