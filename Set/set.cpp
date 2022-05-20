// Set - All Elements in set are unique uses BST behind the scene
//  ELement comes out in sorted order
//Unordered Set : faster than Set , returns random elements

//Time comlexity for the insertion operation is O(log n )
#include <iostream>
#include<set>
using namespace std;
int main() {
    set <int > s ;   
    
    s.insert(32);
    s.insert(3223);
    s.insert(32222);
    s.insert(32222);
    s.insert(00);
    s.insert(00);
    s.insert(00);
    s.insert(00);
    s.insert(00);
    s.insert(99);
    s.insert(3);
    
    for(auto i :s ){
        cout<<i<<' ';
    }
    cout<<endl;
    
     
    set <int>::iterator itr = s.find(3);
    cout<<"3 is at"<<*itr<<endl;
    
    
    set<int>::iterator it = s.begin();
    it++;
    it++;
    it++;
    
    s.erase(s.begin(), it);
       for(auto i :s ){
        cout<<i<<' ';
    }
    
    cout<<"99 is present or not "<<s.count(99)<<endl;
        cout<<"11121 is present or not "<<s.count(11121)<<endl;
    
    set <int>::iterator it2 = s.find(3);
    cout<<"3 is at"<<*it2;
    return 0;
}

/** Output  :
/tmp/QAYpPE2KLQ.o
0 3 32 99 3223 32222 
3 is at3
99 3223 32222 99 is present or not 1
11121 is present or not 0
3 is at3**/
