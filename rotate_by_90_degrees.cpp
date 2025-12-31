#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix);
void transpose(vector<vector<int>> &matrix);
void row_reversal(vector<vector<int>> &matrix);
void printer(const vector<vector<int>> &arr);
void print(const vector<int> &arr);
void swapin(vector<vector<int>> &arr, int i, int j,int k,int l)
{
    int temp = arr[i][j];
    arr[i][j] = arr[k][l];
    arr[k][l] = temp;
}

int main()
{
    vector<vector<int>> tri = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};

    printer(tri);
    rotate(tri);
    printer(tri);
    return 0;
}
void transpose(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swapin(matrix,i,j,j,i);
        }
    }
}
void row_reversal(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j<matrix.size()/2; j++)
        {
            swapin(matrix,i,j,i,((matrix.size()-1)-j));
        }
    }
    
}
void rotate(vector<vector<int>> &matrix)
{
    if(matrix.size()==1||matrix.size()==0)
    {
        return;
    }
    else
    {
        transpose(matrix);
        row_reversal(matrix);
    }   
}
void print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printer(const vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        print(arr[i]);
    }
    cout << endl;
}