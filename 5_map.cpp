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
    cout << "Size of map: " << mp.size() << endl;
    cout << "Max size of map: " << mp.max_size() << endl;

    // 4.Clear and empty
    //------------------------------------------------
    // cout << "Clearing the map" << endl;
    // mp.clear();
    // if (mp.empty())
    // {
    //     cout << "Empty " << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }

    // 5.erase() , count() & find
    //--------------------------------
    // cout << "before erasing:" << endl;

    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // mp.erase(3); // We give key in this.

    // cout << endl
    //      << "After erasing: " << endl;

    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // int cnt = mp.count(2); // This function searches if that particular key is present in the map or not
    //                        // if present it will return 1 else it'll return 0

    // // int cnt = mp.count(2);
    // if (mp.count(2))
    //     cout << "Key 2 is present(Using count)" << endl;
    // else
    //     cout << "Key 2 is not present" << endl;

    // // the find() function returns an iterator
    // auto it = mp.find(5); // We have to put a key in this;
    // // auto it = mp.find(25);
    // if (it != mp.end())
    //     cout << "Found(using find)" << endl;
    // else
    //     cout << "Not Found" << endl;

    // 6.Upper_bound and Lower_bound
    //-----------------------------------------------
    // these functions returns iterators

    // auto it = mp.lower_bound(2); // we put our key here
    // if the key is present then iterator will point to that element

    // mp.erase(3);
    // // auto it = mp.lower_bound(3);
    // // if the key is not present then it will print any garbage value

    // auto it = mp.lower_bound(8); // print a garbage value
    // // if the key of the lower bound is greater than the largest kwy of the map then it will point to mp.end()
    // cout << (*it).first << " " << (*it).second << endl;

    // auto it = mp.upper_bound(1);  // it will always point to the next greater element
    // // auto it = mp.upper_bound(69); // as the key is not present it will print garbage value

    // cout << (*it).first << " " << (*it).second << endl;

    // 7. "=" operator
    //------------------------------------------

    // map<int, string> mp2;
    // cout << "map2 before assigning map1: " << endl;
    // for (auto it : mp2)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << endl
    //      << endl;

    // mp2 = mp;
    // cout << "map2 after assigning map1: " << endl;
    // for (auto it : mp2)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // 8.Swap()
    //--------------------------------------
    map<int, string> mp2;
    mp2.insert({10, "xyz"});
    mp2.insert({22, "xzy"});

    mp2.insert({47, "xxy"});
    mp2.insert({33, "xyy"});

    cout << "Before swapping:" << endl;

    cout << "map1:" << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << "map2: " << endl;
    for (auto it : mp2)
    {
        cout << it.first << " " << it.second << endl;
    }

    swap(mp, mp2);
    cout << endl;
    cout << endl;
    cout << "After Swapping: " << endl;

    cout << "map1:" << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << "map2: " << endl;
    for (auto it : mp2)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}