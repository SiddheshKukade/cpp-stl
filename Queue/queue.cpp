#include<iostream>
#include<queue>
using namespace std;
// queue is based on First In First Out Concept
// Time Complexity of all operations is O(1)
int main(){
   queue<string> q ;
   q.push("Hi");
   q.push("2");
   q.push("3");
       cout<<q.size()<<endl;
     cout<<"First Element"<<q.front()<<endl;
    cout<<"Last Element"<<q.back()<<endl;
    q.pop();
    
     cout<<"First Element"<<q.front()<<endl;
    cout<<"Last Element"<<q.back()<<endl;
    
    cout<<q.size();
  return 0;
}
/**
Output :
3
First ElementHi
Last Element3
First Element2
Last Element3
2
**/
