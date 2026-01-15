 #include<iostream>
using namespace std;
// int main(){
//     cout<<"hello world!!";
// }

//type covernsion
int main(){
    char grade = 'A';
    int val = grade;
    cout<<val<<endl;
  

    //type casting
    double no = 100.55;
    int newNo = (int)no;
    cout<<newNo<<endl;
      

    //condtional statement example: lower upper case prog.
    char ch;
    cout<<"enter a character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lower case\n";
    }
    else{
        cout<<"upper case\n";
    }
    return 0;
}


