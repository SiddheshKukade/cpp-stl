 // vector is just an dynamic array.
 // vector doubles it's size when it is being overflowed 
 //random access is also possible
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v ; // new vector have size of 0
    vector <int > a(5,1); //if size is already known and will create an vector containing 5 elements intialized witg 0 [0,0,0,0,0] 
    cout<<"A is "<<endl;
    for(int i:a){ // for each loop
        cout<<i<<" ";
    }
    cout<<endl;
    //copying a in abc vector
    vector <int> abc(a);
     cout<<"ABC is "<<endl;
    for(int i:abc){ // for each loop
        cout<<i<<" ";
    }
    cout<<"Size (current Elements in vector) ==>"<<v.size()<<endl<<"Capacity (total no of elements it can handle currentlt) ==>"<<v.capacity()<<endl ;// prints 0
    v.push_back(10);
    v.push_back(20);  
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size (current Elements in vector) ==>"<<v.size()<<endl;
    v.push_back(30);
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size (current Elements in vector) ==>"<<v.size()<<endl;
    
     cout<<"At 4 index"<<v.at(2)<<endl;
    cout<<"At 2 index"<<v.at(2)<<endl;
     cout<<"At 1 index"<<v.at(1)<<endl;
// cout<<"At 200 index"<<v.at(200)<<endl; //gives error


    cout<<"First Element"<<v.front()<<endl;
    cout<<"Last Element"<<v.back()<<endl;
    
    v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size (current Elements in vector) ==>"<<v.size()<<endl;
     v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
    
     v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
    
     v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
       v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
        v.pop_back();
    cout<<"Last Element"<<v.back()<<endl;
     cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size (current Elements in vector) ==>"<<v.size()<<endl;
    return 0;
}

/**
Output : 
/tmp/1eoBQYALN8.o
A is 
1 1 1 1 1 
ABC is 
1 1 1 1 1 Size (current Elements in vector) ==>0
Capacity (total no of elements it can handle currentlt) ==>0
Capacity2
Size (current Elements in vector) ==>2
Capacity4
Size (current Elements in vector) ==>3
At 4 index30
At 2 index30
At 1 index20
First Element10
Last Element30
Last Element20
Capacity4
Size (current Elements in vector) ==>2
Last Element10
Last Element0
Last Element33
Last Element0
Last Element1
Capacity4
Size (current Elements in vector) ==>18446744073709551613

**/
