#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    vector<int> v;
    v.pb(1);
    v.pb(3);
    v.pb(6);
    v.pb(4);
    v.pb(9);

    // vector<int>::iterator it = v.begin();

    // cout << *it << endl;
    // cout << *(it + 2);

    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

        return 0;
}