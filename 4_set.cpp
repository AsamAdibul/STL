
// All about set
// All the values in set will be sorted. Either ascending or descending.
// We will need iterator for set
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    set<int> s; // for ascending order
    // set<int, greater<int>> s;
    // 1. Inserting values
    s.insert(1);
    s.insert(4);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(4); // inserted 2nd time
    s.insert(7);
    cout << "Printing the set:";

    // set<int>::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;
    // 2.Size & max_size
    //------------------------------------------
    cout << "Size of set: " << s.size() << endl;
    cout << "Max size of the set: " << s.max_size() << endl;

    // 3.Empty & clear
    //---------------------------------
    if (s.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    // s.clear();

    // if (s.empty())
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    // 4.Erasing
    //-------------------------------------
    s.erase(2);
    cout << "After erasing : ";
    for (auto _ : s)
    {
        cout << _ << " ";
    }
    cout << endl;
    // Erasing by pointing

    // set<int>::iterator it;
    // it = s.begin();

    // s.erase(it);
    // cout << "After erasing 1st value using iterator/ pointing : ";
    // for (auto it : s)
    //     cout << it << " ";
    // cout << endl;

    // advance(it, 2); // now it points to the 2nd index

    // s.erase(it);
    // cout << "After erasing value of index 2 using iterator/ pointing : ";
    // for (auto it : s)
    //     cout << it << " ";
    // cout << endl;

    // 4.Finding
    //------------------------------------
    // auto it = s.find(6);
    // if (it != s.end())
    //     cout << "6 is Found" << endl;
    // else
    //     cout << "6 is Not Found" << endl;

    // auto it1 = s.find(69);
    // if (it1 != s.end())
    //     cout << "69 is Found" << endl;
    // else
    //     cout << "69 is Not Found" << endl;

    // 5.Count
    //--------------------------------------

    int c = s.count(2); // return 0 or 1
    cout << "Output for count function: " << c << endl;
    return 0;
}