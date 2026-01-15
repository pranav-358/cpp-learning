#include<iostream>
using namespace std;

int leanearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int sz;
    cout<<"enter size of aaray";
    cin>>sz;
    int arr[100]; 
    
    cout<<"enter array element :";
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter element to search: ";
    cin>>target;

    int result = leanearSearch(arr, sz, target);

    if(result != -1 ){
        cout<<"element found at index "<<result;
    }
    else{
        cout<<"Element not found!!";
    }
    return 0;
}