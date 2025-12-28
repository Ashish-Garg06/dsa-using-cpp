#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int left_rotate_array_by_one(vector<int> &arr);
void print(const vector<int> &arr);
void swapin(vector<int>& arr,int i,int* number){
    int temp=arr[i];
    arr[i]=*number;
    *number=temp;
}
int main()
{
    vector<int> array = {15, 1, 45, 61, 210, 41, 51, 70, 11, 121, 17};
    print(array);
    left_rotate_array_by_one(array);
    print(array);
    return 0;
}

int left_rotate_array_by_one(vector<int>& nums) {
    int* ptr;
    int temp1=INT16_MAX;
    ptr=&temp1;
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(temp1==INT16_MAX)
        {
            temp1=nums[i-1];
            nums[i-1]=nums[i];
        }
        else
        {
            swapin(nums,i,ptr);
        }
    }
    swapin(nums,(nums.size()-1),ptr);

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