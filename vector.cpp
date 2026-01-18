#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    for( char val : vec){
        cout<< val<<endl;
    }

    vec.push_back('f');
    //vec.pop_back();
    cout<<"after pushh back:"<<endl;
     for( char val : vec){
        cout<< val<<endl;
    }

    cout<<"Front elemment is :"<<vec.front()<<endl;
    cout<<"back element is :"<<vec.back()<<endl;
    cout<<"it find index :"<<vec.at(2)<<endl;

    return 0;
}
