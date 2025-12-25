#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(5);
    numbers.push_front(15);
    numbers.push_front(36);
    numbers.push_front(215);

    cout << "Linked List Elements: ";
    for(int x : numbers)
    {
        cout << x << " ";
    }
    cout<<endl;

    // numbers.remove(10);

    // cout << "\nAfter Deletion: ";
    // for(int x : numbers)
    // {
    //     cout << x << " ";
    // }
    numbers.sort();
    for(int x : numbers)
    {
        cout << x << " ";
    }
    numbers.reverse();
    cout<<endl;

    for(int x : numbers)
    {
        cout << x << " ";
    }
    return 0;
}
