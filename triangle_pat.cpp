#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no :";
    cin>>n;

    // for(int i = 0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //floyed triangle pattern:
    // int num = 1;
    // for(int i =0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    
    // for(int i =0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<(i+1)<<" ";
            
    //     }
    //     cout<<endl;
    // }


    // for(int i =0; i<n; i++){
    //     for(int j=1; j<=i+1; j++){
    //         cout<<j<<" ";         
    //     }
    //     cout<<endl;
    // }


    //reverese triangle :
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //reverse pyramid pattern:
    // for(int i=0; i<n; i++){
    //     //spaces
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
    // }

    //pyramid pattern
    // for(int i=0; i<n; i++){
    //     //spaces
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i+1; j++){
    //         cout<<j;
    //     }

    //     for(int j=i; j>0; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //hollow triangle pattern:
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
        cout<<"*";
        }
        cout<<endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}