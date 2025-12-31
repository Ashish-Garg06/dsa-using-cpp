#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pascal_triangle(int n);
void printer(const vector<vector<int>> &arr);
void print(const vector<int> &arr);
void swapin(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{

    printer(pascal_triangle(5));

    return 0;
}

vector<vector<int>> pascal_triangle(int n)
{
    vector<vector<int>> answer;
    for (int i = 0; i <= n-1; i++)
    {
        vector<int> temp(i + 1, 1);
        answer.push_back(temp);
    }
    for (int j = 2; j <= n-1; j++)
    {
        for (int k = 1; k < j; k++)
        {
            answer[j][k] = answer[j - 1][k - 1] + answer[j - 1][k];
        }
    }
    return answer;
}
void print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void printer(const vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        print(arr[i]);
    }
}