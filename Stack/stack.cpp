#include<iostream>
#include<stack>
using namespace std;
// Stack is based on Last In First Out Concept
int main(){
  stack <string> s ;
 
  s.push("Siddya");
  s.push("Bohot");
  s.push("Rush");
  
    cout<<"Top Element"<<s.top()<<endl;
         cout<<"Size"<<s.size()<<endl;
    s.pop();
    cout<<"Top Element After Pop"<<s.top()<<endl;
        cout<<"SizeAfter Pop"<<s.size()<<endl;
    ;
    cout<<s.empty();
  return 0;
}

/**
Output :
/tmp/NmNryJCbH3.o
Top ElementRush
Size3
Top Element After PopBohot
SizeAfter Pop2
0
**/
