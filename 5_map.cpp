#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    map<int, string> mp; // has 2 things in it(keys, and value)
    // keys are alwasy kept sorted
    // 1.Inserting
    //--------------------------------------
    mp.insert({1, "abc"});
    mp.insert({2, "acb"});
    mp.insert({5, "cab"});
    mp.insert({4, "aab"});
    mp.insert({3, "abb"});

    // 2.Printing the values of map
    //----------------------------------------------
    cout << "Value access of map" << endl
         << endl;
    // cout << mp[1] << endl;
    // cout << mp.at(2) << endl;

    // auto it = mp.begin();
    // for (auto &pr : mp)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }

    // 3.size() and max size
    //---------------------------------------------------
    cout << mp.size() << endl;
    cout << mp.max_size() << endl;

    // 4.Clear and empty
    //------------------------------------------------
    cout << "Clearing the map" << endl;
    mp.clear();
    if (mp.empty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    return 0;
}