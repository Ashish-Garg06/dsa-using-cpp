#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largest_element_search(vector<int>& arr);
void print(const vector<int>& arr);
int main()
{
    vector<int> array={15,44,12,45,78,95,42,12,13,17,10};
    print(array);
    cout<<"the largest element is :"<<largest_element_search(array)<<endl;
    // print(array);
    return 0;
}
int largest_element_search(vector<int>& arr)
{
    int largest=-100;
    int largest=-100;
    for (int i = 0; i <= (arr.size()-1); i+=2)
    {
        if(arr[i]>=arr[i+1] && arr[i]>largest)
        {
            largest=arr[i];
        }
        else if(arr[i+1]>largest)
        {
            largest=arr[i+1];
        }
        
    }
    return largest;
}

void print(const vector<int>& arr){
    
    int i=0;
    for(i=0;i<=arr.size()-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}