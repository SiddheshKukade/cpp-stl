// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
// Prioirt is queue is queue in which the first element is always the greatest
// Max Heap -Out Element will be the Maximun
// Min Heap -Out Element will be the Minimum
int main() {
//max heap
    priority_queue <int> maxy ;
    
    maxy.push(13232);
    maxy.push(12);
    maxy.push(1232);
        maxy.push(32);
    int n = maxy.size();
    for(int i=0  ;i<n;i++){
        cout<<maxy.top()<<" ";
        maxy.pop();
    }
    cout<<endl;
//min Heap
    priority_queue <int , vector<int> , greater<int> >mini;
      mini.push(13232);
    mini.push(12);
    mini.push(1232);
    mini.push(32);
    n = mini.size();
    for(int i=0  ;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"rikame aahe ka "<<mini.empty();
 return 0;
}

/**
Output : 
/tmp/80mwZwBct7.o
13232 1232 32 12 
12 32 1232 13232 
rikame aahe ka 1
**/
