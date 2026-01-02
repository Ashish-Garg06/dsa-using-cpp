#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortcolor(vector<int> &arr);
void print(const vector<int> &arr);
int main()
{
    vector<int> array = {0, 1, 1, 1, 0, 2, 1, 1, 1, 1, 1};
    print(array);
    sortcolor(array);
    print(array);
    return 0;
}

void sortcolor(vector<int> &nums)
{
    vector<int> arr(3);
    for(int i :nums)
    {
        arr[i]+=1;
    }
    nums.clear();
    for(int i=0;i<=2;i++)
    {
        while(arr[i]>0)
        {
            nums.push_back(i);
            arr[i]=arr[i]-1;
        }
    }
    
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