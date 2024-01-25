#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " " << endl;
    // }
    // cout << endl;
    //---------------------------------------------------------------------------------------------
    // cout << "Printing in short: " << endl;
    // for (int val : v) // Here val is the copies of the vector
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << "Adding 1 to all the values in vector and printing them" << endl;
    // for (int &val : v)
    // {
    //     val++;
    //     cout << val << " ";
    // }
    // cout << endl;

    //------------------------------------------
    //--Using auto keyword ----
    cout << "Printing using auto" << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}