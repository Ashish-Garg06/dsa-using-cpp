#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int second_largest_element_search(vector<int> &arr);
void print(const vector<int> &arr);
int main()
{
    vector<int> array = {15, 44, 12, 45, 78, 95, 42, 12, 13, 17, 10};
    print(array);
    cout << "the second largest element is :" << second_largest_element_search(array) << endl;
    // print(array);
    return 0;
}

int second_largest_element_search(vector<int> &arr)
{
    int largest = -100;
    int second_largest = -1000;
    for (int i = 0; i <= (arr.size() - 1); i += 1)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i + 1] > largest)
        {
            second_largest = largest;
            largest = arr[i + 1];
        }
        
    }
    return second_largest;
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