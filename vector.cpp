#include<bits/stdc++.h>
using namespace std;

#define el "\n";
#define pb push_back 
void prnt(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<el;
}
int main(){

//--------------------------------------------------    
// Normal initialization
// vector<int>v; 

// //with size
// vector<int>v(5);

// // with size and filled with 10
// vector<int>v(5,10);

// //vector from another vector
// vector<int>v2={1,2,3,4,5};
// vector<int>v(v2);


//Size, capacity, clearing
//--------------------------------------------------

// vector<int>v;
// cout<<"The max size of vector "<<v.max_size()<<el;
// cout<<"iniitial size = "<<v.size()<<el;
// cout<<"initial capacity "<<v.capacity()<<el;
// v.pb(5);
// v.pb(6);
// cout<<"Size after pushing 2 elements "<<v.size()<<el;
// cout<<"Capacity after pushing 2 elements "<<v.capacity()<<el;

// v.pb(7);
// cout<<"Size after pushing 1 more elements "<<v.size()<<el;
// cout<<"Capacity after pushing 1 more elements "<<v.capacity()<<el;
// v.pb(8);
// //Size is the number of elements in the vector
// //capacity is the allocated memory to the vector
// //When the capcacity is full for the next element to be added
// // the capacity of the vector or the allocated memory for the vector will be doubled
// if(v.empty()==1){
//     //returns 1 if not empty
// cout<<"Vector is empty"<<el;
// }
// else{
// cout<<"Vector not empty"<<el;
// }
// cout<<"size before clearing "<<v.size()<<el;

// v.clear();

// if(v.empty()==1){
// cout<<"Vector is empty"<<el;
// }
// else{
// cout<<"Vector not empty"<<el;
// }
// cout<<"size after clearing "<<v.size()<<el;

//Resizing
//---------------------------------------------------
// vector<int>v;
// v.pb(5);
// v.pb(6);
// v.pb(7);
// v.pb(8);
// v.pb(9);
// v.pb(10);
// cout<<"Before resizing "<<el;
// prnt(v);
// v.resize(3);
// cout<<"After resizing "<<el;
// prnt(v);


//Inserting and Erasing
//--------------------------------------------------------

// vector<int>v={1,2,3,4,5,6,7,8};

// v.erase(v.begin()+7);//for single erase
// prnt(v);
// v.erase(v.begin()+2,v.begin()+5);//For multiple erase
// prnt(v);

// v.insert(v.begin()+1,99);//For inserting single Integer
// prnt(v);

// vector<int>v2={11,22,33,44,55};
// v.insert(v.begin()+2,v2.begin(),v2.end());//For inserting v2 vector
// //in the 2nd index of v
// prnt(v);


//Vector replace and Finding
//------------------------------------------------------
// vector<int>v={1,2,33,4,5,33,5,33,7,8};
// replace(v.begin(),v.end(),33,101);//replacing 33 with 101
// prnt(v);


// //Finding uses Iterator
// // cout<<find(v.begin(),v.end(),3);//gives error coz find returns iterators
// // vector<int>::iterator it;
// // it=find(v.begin(),v.end(),3);
// auto it = find(v.begin(),v.end(),3);
// // cout<<*it;//cant print iterator Thats why we'll have to print referance
// if(it == v.end()){ cout<<"Not found"<<el;}
// else{ cout<<"Found"<<el;}




return 0;
}