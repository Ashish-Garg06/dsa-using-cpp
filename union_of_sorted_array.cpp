#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int union_of_sorted_array(vector<int> &arr1,vector<int> &arr2,vector<int> &ans_array);
void print(const vector<int> &arr);
void swapin(vector<int>& arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    vector<int> array1 = {1,2,3,4,5,6};
    vector<int> array2 = {1,2,3,4,5,6,7,8};
    vector<int> answer;
    print(array1);
    print(array2);
    union_of_sorted_array(array1,array2,answer);
    print(answer);
    return 0;
}


int union_of_sorted_array(vector<int>& arr1,vector<int>& arr2,vector<int>& ans_array) {
    int i=0,j=0;
    while((i<=arr1.size()-1)||(j<=arr2.size()-1))
    {
        // if(arr1[i]==arr2[j]&&((i==0||j==0)&&())
        if(arr1[i]==arr2[j])
        {
            ans_array.push_back(arr1[i]);
            if((i<=arr1.size()-1)&&(j<=arr2.size()-1)){    
                i++;
                j++;
            }
            else if(i<=arr1.size()-1)
            {
                i++;
            }
            else if (j<=arr2.size()-1)
            {
                j++;
            }
        }
        else if (arr1[i]<arr2[j])
        {
            ans_array.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            ans_array.push_back(arr2[j]);
            j++;
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