#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int left_rotate_array_by_one(vector<int> &arr);
void print(const vector<int> &arr);
void rotate(vector<int>& nums, int k);

int main()
{
    vector<int> array = {15, 1, 45, 61, 210, 41, 51, 70, 11, 121, 17};
    print(array);
    rotate(array,2);
    // left_rotate_array_by_one(array);
    print(array);
    return 0;
}

void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        for(int j = ((nums.size())-k); j<=(nums.size()-1) ; j++)
        {
            temp.push_back(nums[j]);
        }
        for (int i = (nums.size()-1); i>=k ; i--)
        {
            nums[i]=nums[i-k];
        }
        for (int z = 0; z<k ; z++)
        {
            nums[z]=temp[z];
        }

}
// int left_rotate_array_by_one(vector<int>& nums) {
//     int first=nums.front();
//     for (int i = 0; i < (nums.size()-1); i++)
//     {
//         nums[i]=nums[i+1];
//     }
//     nums.pop_back();
//     nums.back()=first;
// }

void print(const vector<int> &arr)
{

        int i = 0;
        for (i = 0; i <= arr.size() - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
}