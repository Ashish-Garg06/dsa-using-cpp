#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum_total(vector<vector<int>> &triangle);
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
    vector<vector<int>> tri = {{-1},{2,3},{1,-1,-3}};

    printer(tri);
    cout << "\nminimum_total : " << minimum_total(tri) << endl;

    return 0;
}

int minimum_total(vector<vector<int>> &triangle)
{
    int n = triangle.size();
        vector<int> dp = triangle.back();

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
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
}