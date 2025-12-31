#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rearrangearray(vector<int> &arr1);
void print(const vector<int> &arr);
void swapin(vector<int>& arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    vector<int> array = {3,1,-2,-5,2,-4};
    print(array);
    rearrangearray(array);
    print(array);
    return 0;
}


int rearrangearray(vector<int>& array) {
    vector<int> positive;
    vector<int> negative;

    for (int i:array)
    {
        if (i<0)
        {
            negative.push_back(i);
        }
        else if (i>0)
        {
            positive.push_back(i);
        }    
    }
    int i=0,j=0;
    while(i<=array.size()-1&&j<=positive.size()-1)
    {
        array[i]=positive[j];
        i++;
        array[i]=negative[j];
        i++;
        j++;
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