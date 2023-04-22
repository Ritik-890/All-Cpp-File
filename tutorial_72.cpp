#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    list<int> list1; // empty list of 0 length
    // list<int>list2(3); // empty list of 3 length
    // list<int> :: iterator it = list2.begin();
    // *it = 75;
    // it++;
    // *it = 9;
    // it++;
    // *it = 7;
    // it++;

    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(3);

    list1.remove(7);
    display(list1);

    // display(list1);
    list1.sort();
    display(list1);

    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);

    // display(list1);
    // display(list2);

    return 0;
}