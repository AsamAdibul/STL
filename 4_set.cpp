
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
    // set<int> s; // for ascending order
    // // set<int, greater<int>> s;
    // // 1. Inserting values
    // s.insert(1);
    // s.insert(4);
    // s.insert(6);
    // s.insert(3);
    // s.insert(2);
    // s.insert(4); // inserted 2nd time
    // s.insert(7);
    // cout << "Printing the set:";

    // // set<int>::iterator it;
    // // for (it = s.begin(); it != s.end(); it++)
    // // {
    // //     cout << *it << " ";
    // // }
    // // cout << endl;

    // for (auto it : s)
    // {
    //     cout << it << " ";
    // }

    // cout << endl;
    // // 2.Size & max_size
    // //------------------------------------------
    // cout << "Size of set: " << s.size() << endl;
    // cout << "Max size of the set: " << s.max_size() << endl;

    // // 3.Empty & clear
    // //---------------------------------
    // if (s.empty())
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    // // s.clear();

    // // if (s.empty())
    // //     cout << "Empty" << endl;
    // // else
    // //     cout << "Not Empty" << endl;

    // // 4.Erasing
    // //-------------------------------------
    // s.erase(2);
    // cout << "After erasing : ";
    // for (auto _ : s)
    // {
    //     cout << _ << " ";
    // }
    // cout << endl;
    // // Erasing by pointing

    // // set<int>::iterator it;
    // // it = s.begin();

    // // s.erase(it);
    // // cout << "After erasing 1st value using iterator/ pointing : ";
    // // for (auto it : s)
    // //     cout << it << " ";
    // // cout << endl;

    // // advance(it, 2); // now it points to the 2nd index

    // // s.erase(it);
    // // cout << "After erasing value of index 2 using iterator/ pointing : ";
    // // for (auto it : s)
    // //     cout << it << " ";
    // // cout << endl;

    // // 4.Finding
    // //------------------------------------
    // // auto it = s.find(6);
    // // if (it != s.end())
    // //     cout << "6 is Found" << endl;
    // // else
    // //     cout << "6 is Not Found" << endl;

    // // auto it1 = s.find(69);
    // // if (it1 != s.end())
    // //     cout << "69 is Found" << endl;
    // // else
    // //     cout << "69 is Not Found" << endl;

    // // 5.Count
    // //--------------------------------------

    // int c = s.count(2); // return 0 or 1
    // cout << "Output for count function: " << c << endl;

    //-------------Separate Potion---------------//---

    // 6.Lower Bound (Important)
    //-------------------------------------------------

    // set<int> s = {1, 2, 4, 5, 6};
    // for (auto it : s)
    //     cout << it << " ";
    // cout << endl;

    // set<int>::iterator it;
    // it = s.lower_bound(2);

    // // if 2 is present in the set it will point to 2
    // // if 2 is not present, it will point to the closest item larger  than 2
    // //  if that is also not presnt it'll point to end

    // if (it == s.end())
    //     cout << "The item is larger than the largest element present in the set" << endl;
    // else
    //     cout << "The Lower bound is of the set: " << *it << endl;
    //

    // it = s.lower_bound(3);

    // if (it == s.end())
    //     cout << "The item is larger than the largest element present in the set" << endl;
    // else
    //     cout << "The Lower bound is of the set: " << *it << endl;//lower bound will be 4 as it is closer to 3

    // it = s.lower_bound(100);

    // if (it == s.end())
    //     cout << "The item is larger than the largest element present in the set" << endl;
    // else
    //     cout << "The Lower bound is of the set: " << *it << endl; // lower bound will be 4 as it is closer to 3

    // 7.Upper Bound(Important)
    //-----------------------------------------

    // set<int> s = {1, 2, 4, 5, 6};
    // for (auto it : s)
    //     cout << it << " ";
    // cout << endl;

    // set<int>::iterator it;

    // // it = s.upper_bound(2);
    // // if (it == s.end())
    // //     cout << "Upper bound is equal or  greater that the element" << endl; // Here Upper bound is 4
    // // else
    // //     cout << "The upper bound is " << *it << endl;

    // // if the item is present in the set it will point to the next largest item peresnt it the set
    // // if the element is present in the set but does not have a next lager number that it self, then the uiterator will point to s.end()
    // // if the element is not present in the set it will point to s.end()

    // // it = s.upper_bound(6);
    // // if (it == s.end())
    // //     cout << "Upper bound is equal or  greater that the element" << endl;
    // // else
    // //     cout << "The upper bound is " << *it << endl; // 6 is present but no element is greater than 6

    // it = s.upper_bound(100);
    // if (it == s.end())
    //     cout << "Upper bound is equal or  greater that the element" << endl;
    // else
    //     cout << "The upper bound is " << *it << endl; // 100 is not present in the set

    // // 8. Swaping sets
    // //--------------------------------------------

    // // set<int> s1 = {1, 2, 3, 4, 5};
    // // set<int> s2 = {11, 22, 33, 44, 55};
    // // cout << "Before Swap" << endl;
    // // ;
    // // cout << "s1: ";
    // // for (auto it : s1)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;

    // // cout << "s2: ";
    // // for (auto it : s2)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;

    // // s1.swap(s2);

    // // cout << endl;

    // // cout << "After Swap:" << endl;
    // // cout << "s1: ";
    // // for (auto it : s1)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;

    // // cout << "s2: ";
    // // for (auto it : s2)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;

    // // 9.Assigning set into another set
    // //========================================================
    // // set<int> s1 = {1, 2, 3, 4, 5};
    // // set<int> s2;

    // // cout << "Before assigning s2: ";
    // // for (auto it : s2)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;
    // // s2 = s1;

    // // cout << "After assigning s2: ";
    // // for (auto it : s2)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;

    return 0;
}