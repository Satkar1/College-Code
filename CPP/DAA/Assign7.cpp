/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 7
*/

#include <iostream>
#include <vector>
using namespace std;
#define N 8

void printBoard(vector<vector<int>>& board) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (board[i][j] == 1)
                cout << " Q ";
            else
                cout << " . ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<int>>& board, int row, int col) 
{
    for (int i = 0; i < row; i++) 
        if (board[i][col] == 1)
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j] == 1)
            return false;
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) 
        if (board[i][j] == 1)
            return false;
    return true;
}

bool solveNQueensUtil(vector<vector<int>>& board, int row) 
{
    if (row >= N) 
    {
        return true;
    }

    for (int col = 0; col < N; col++) 
    {
        if (isSafe(board, row, col)) 
        {
            board[row][col] = 1;
            if (solveNQueensUtil(board, row + 1))
                return true;
            board[row][col] = 0;
        }
    }
    return false;
}

bool solveNQueens() 
{
    vector<vector<int>> board(N, vector<int>(N, 0));
    if (solveNQueensUtil(board, 0)) 
    {
        printBoard(board);
        return true;
    } 
    else 
    {
        cout << "Solution does not exist" << endl;
        return false;
    }
}

int main() 
{
    solveNQueens();
    return 0;
}

/*
 Q  .  .  .  .  .  .  . 
 .  .  .  .  Q  .  .  . 
 .  .  .  .  .  .  .  Q 
 .  .  .  .  .  Q  .  . 
 .  .  Q  .  .  .  .  . 
 .  .  .  .  .  .  Q  . 
 .  Q  .  .  .  .  .  . 
 .  .  .  Q  .  .  .  . 
*/


