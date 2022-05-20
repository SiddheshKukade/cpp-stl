#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d ;
    d.push_back(10);
    d.push_front(99);
    
    for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
      for(int i :d){
        cout<<i<<" ";
    }
     d.push_front(99);
      d.push_front(92);
       d.push_front(93);
     cout<<endl;
    cout<<d.at(3);
    cout<<"First Element"<<d.front()<<endl;
    cout<<"Last Element"<<d.back()<<endl;
    
     for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"before Erase"<<endl;
    d.erase(d.begin() , d.begin()+2);
     cout<<"Afer Erase"<<endl;
       for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;
    
     cout<<"before Erase 2"<<endl;
       cout<<"Afer Erase"<<endl;
       for(int i :d){
        cout<<i<<" ";
    }
    d.erase(d.begin() , d.end());
     cout<<"Afer Erase 2"<<endl;
       for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;
  return 0;
}
/**
Output 
/tmp/1eoBQYALN8.o
99 10 
10 
10First Element93
Last Element10
93 92 99 10 
before Erase
Afer Erase
99 10 
before Erase 2
Afer Erase
99 10 Afer Erase 2


**/
