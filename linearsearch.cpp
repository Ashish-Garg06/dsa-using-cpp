#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linear_search(vector<int>& arr,int num);
void print(const vector<int>& arr);
int main()
{
    vector<int> array={15,44,12,45,78,95,42,12,13,17,10};
    print(array);
    linear_search(array,95);
    // print(array);
    return 0;
}
void linear_search(vector<int>& arr,int num)
{
    for (int i = 0; i <= (arr.size()-1); i++)
    {
        if(arr[i]==num)
        {
            cout<<"item found at "<<i<<" position"<<endl;
            break;
        }
    }
    // cout<<"item not found"<<endl;
}

void print(const vector<int>& arr){
    
    int i=0;
    for(i=0;i<=arr.size()-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}