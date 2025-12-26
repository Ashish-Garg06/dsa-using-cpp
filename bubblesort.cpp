#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr);
void swapin(vector<int>& arr,int i,int j);
void print(const vector<int>& arr);
int main()
{
    vector<int> array={15,44,12,45,78,95,42,12,13,17,10};
    print(array);
    bubblesort(array);
    print(array);
    return 0;
}
void bubblesort(vector<int>& arr)
{
    for (int i = 0; i <= (arr.size()-2); i++)
    {
        for (int j = i+1; j <= (arr.size()-1); j++)
        {
            if (arr[j]<arr[i])
            {
                swapin(arr,i,j);
            }
            
        }
        
    }
    
}
void swapin(vector<int>& arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void print(const vector<int>& arr)
{
    int i=0;
    for(i=0;i<=arr.size()-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}