#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> &arr);
void print(const vector<int> &arr);
int main()
{
    vector<int> array = {15, 1, 1, 1, 0, 95, 1, 1, 1, 1, 1};
    print(array);
    cout << "the max no of 1 is :" << max_consecutive_ones(array) << endl;
    // print(array);
    return 0;
}

int max_consecutive_ones(vector<int> &arr)
{
    int max_ones=0;
    int count=0;
    for (int i = 0; i <= (arr.size() - 1); i += 1)
    {
        if (arr[i] ==1 && arr[i+1]==1)
        {
            count++;
        }
        else if (arr[i]==1 && arr[i+1]!=1)
        {
            count++;
            if(count>max_ones)
            {
                max_ones=count;
                count=0;
            }
            else{
                count=0;
            }
        }
        
    }
    return max_ones;
}
void print(const vector<int> &arr)
    {

        int i = 0;
        for (i = 0; i <= arr.size() - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }