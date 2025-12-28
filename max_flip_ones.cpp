#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones_with_one_flip(vector<int> &arr);
void print(const vector<int> &arr);
int main()
{
    vector<int> array = {15, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1};
    print(array);
    cout << "the max no of 1 is :" << max_consecutive_ones_with_one_flip(array) << endl;
    // print(array);
    return 0;
}

int max_consecutive_ones_with_one_flip(vector<int>& nums) {
    int max_ones=0;
    int count=0;
    int flip=0;
    for (int i = 0; i <= (nums.size() - 1); i += 1)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else if(nums[i]==0)
        {
            if (flip==0)
            {
                count++;
                flip++;
            }
            else
            {
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