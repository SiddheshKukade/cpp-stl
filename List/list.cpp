#include<iostream>
#include<list>
using namespace std;
// List is created using doubly linked list 
//direct/random access is not possible
int main(){
  list<int> l ;
  l.push_back(1);
  l.push_back(231);
  l.push_back(1232);
  l.push_front(100);
  
  for(int i:l){
      cout<<i<<" ";
  }
  cout<<endl;
    cout<<"before Erase"<<endl;
    l.erase(l.begin() );
     cout<<"Afer Erase"<<endl;
       for(int i :l){
        cout<<i<<" ";
    }
    cout<<endl;
    
      cout<<"First Element"<<l.front()<<endl;
    cout<<"Last Element"<<l.back()<<endl;
    
    list <int> n(100,5);
    for(int i :n){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int > n2(l);
        for(int i :n2){
        cout<<i<<" ";
    }
    
  return 0;
}
/**
Output 
/tmp/1eoBQYALN8.o
100 1 231 1232 
before Erase
Afer Erase
1 231 1232 
First Element1
Last Element1232
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 
1 231 1232 
**/
