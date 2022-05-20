#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};
    // STL Static Array - not used in competitive coding
    array<int ,3> basic2 = {1,2,3};

    int size = basic2.size();

    for(int i =0 ; i<size; i++){
        cout<<basic2[i]<<endl;
    } 
    
    cout<<"Element at the 2nd index"<<basic2[2]<<endl;
    
    array <int ,3 > a = basic2;
    cout<<"Empty or not -->"<<a.empty()<<endl;
    
    cout<<"First Element"<<a.front()<<endl;
    cout<<"Last Element"<<a.back()<<endl;
     
    return 0;
}

/**
Output : 
1
2
3
Element at the 2nd index3
Empty or not -->0
First Element1
Last Element3

**/
