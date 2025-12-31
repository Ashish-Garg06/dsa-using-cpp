#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum_total(vector<vector<int>>& triangle);
int minimum_of_array(const vector<int> &arr);
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
    vector<vector<int>> tri ={{-1},{2,3},{1,-1,-3}};

    printer(tri);
    cout<<"\nminimum_total : "<<minimum_total(tri)<<endl;

    return 0;
}
int minimum_of_array(const vector<int> &arr)
{
    int min=pow(10,6);
    if(arr.size()==1)
    {
        return arr[0];
    }
    else
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        return min;
    }
}
int minimum_total(vector<vector<int>>& triangle)
{
    int answer =0;
    for(int i=0;i<triangle.size();i++)
    {
        answer+=minimum_of_array(triangle[i]);
    }
    return answer;
}
void print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void printer(const vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        print(arr[i]);
    }
}