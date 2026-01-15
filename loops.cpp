#include<iostream>
using namespace std;
int main(){
    // int n;
    // int sum = 0;
    // cout<<"Enter the no to add :";
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     sum = sum + i;
    // }
    // cout<<sum<<endl;
    // return 0;

    //sum of odd no. from 1 to N;

    int n;
    int sum = 0;

    cout<<"Enter the no :";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            sum += i;
        }
    }
    cout<<sum;
    
    return 0;
}