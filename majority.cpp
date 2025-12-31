#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> &arr1);
void print(const vector<int> &arr);
void swapin(vector<int>& arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    vector<int> array = {1,2,1,4,1,1,2,1,1,1,1,2,2,7,5,6,1,8};
    print(array);
    cout<<"majority element is : "<<majority(array)<<endl;
    return 0;
}


int majority(vector<int>& array) {
    int majority_mark=floor((array.size())/2);
    unordered_map<int> count(array.size());
    for(int i=0;i<=array.size()-1;i++)
    {
        count[array[i]]+=1;
    }
    for(int j=0;j<=count.size()-1;j++)
    {
        if(count[j]>=majority_mark)
        {
            return j;
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