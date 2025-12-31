#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int move_zeores(vector<int> &arr);
void print(const vector<int> &arr);
void swapin(vector<int>& arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    vector<int> array = {0, 1, 0, 61, 0, 41, 51, 0, 11, 121, 0};
    print(array);
    array.clear();
    array.push_back(5);
    array.push_back(6);
    // move_zeores(array);
    print(array);
    return 0;
}


int move_zeores(vector<int> & nums) {
     
    for(int i=0;i<=nums.size()-1;i++)
    {
        if(nums[i]==0)
        {

            int j=i;
            while(!(nums[j]!=0) && (j<=nums.size()-2))
            {
                j++;
            }
            swapin(nums,i,j);
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