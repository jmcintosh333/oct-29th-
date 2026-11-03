
#include <iostream>
#include<iomanip>
#include<vector>

void printSalesData(std::vector<std::vector<int>> salesData)
{
    //NESTED loop! YAY!

    const int WIDEST_COLUMN = 10;

    for (int row = 0; row < salesData.size(); ++row)
    {
        for (int column = 0; column < salesData[0].size(); ++column)
        {
            //std::cout << salesData[row][column] << " "; //wrong!
            std::cout << std::setw(WIDEST_COLUMN);
            std::cout << std::left;
            std::cout << salesData[row][column];
        } 
        std::cout << std::endl;
    }
}

//void printNumber(int number)
//{
//    std::cout << number << std::endl; 
//    //return 1; 
//}

auto calculateAverageSales(std::vector<std::vector<int>> salesData)
{

    float averageSales = 0.0;
    float sum = 0;  

    for (int row = 0; row < 5; ++row)
    {
        for (int column = 0; column < 3; ++column)
        {
            sum = sum + salesData[row][column];
        }
    }

    std::cout << "Sum of sales is: " << sum << std::endl;
    int totalSalesPoints = 3 * 5;
    averageSales = sum / totalSalesPoints;

    return averageSales; 
 }

int findMaxSalesInCertainRow(std::vector<std::vector<int>> salesData, int rowNumber)
{
    for (int column = 0; column < salesData[0].size(); ++column)
    {
        int currentSales = salesData[rowNumber][column]; 
    }

    return 123; 

}


using namespace std; 

int main()
{
    vector<int> salesData =
    {
        //jan //feb //march
        {1,     2,      3 } //Alice;
    };

    //printSalesData(salesData);
    
    
    
    //dimensions of this array (also called MATRIX) are 4 x 3 (4 rows and 3 COLUMS)
   // std::vector<std::vector<char>> ticTacToeGrid(3, std:vector<char>(3));
}

