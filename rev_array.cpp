#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz-1;;
    while(start< end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    
    int sz;
    cin>>sz;

    int arr[sz];
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }

    cout<<"\nafter reversing : \n";
    reverseArray(arr, sz);

    for(int i =0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}