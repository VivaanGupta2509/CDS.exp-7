#include <iostream>
using namespace std;

int main(){
    //printing string output
    cout<<endl;
    string S;
    cout<<"Enter a word : ";
    cin>>S;
    cout<<"The entered string is "<<S<<endl;
    cout<<endl;
    cout<<endl;

    // concatenation of strings
    string a, b;
    cout<<"Enter string 1 : ";
    cin>>a;
    cout<<"Enter string 2 : ";
    cin>>b;
    cout<<"CONCATENATED STRINGS : "<<a+b;
    cout<<endl;
    cout<<endl;


    // printing string in reverse 
    string c;
    cout<<"Enter a string: ";
    cin>>c;
    int i=0;
    cout<<"Reversed string: ";
    for(i=c.length()-1;i>=0;i--) {
        cout<<c[i];
    }
    cout<<endl;
    cout<<endl;

    // checking of pallindrome 
    string D;
    cout<<"Enter a string: ";
    cin>>D;
    int n=D.length(),j, flag=0;
    for(j=0;j<D.length();j++){
        if(D[j]==D[n-1]){
            flag=1;
        }
    n--;
    }
    if(flag==1){
        cout<<D<<" is palindrome";
    }
    else{
    cout<<D<<" is not palindrome";
    }
    
}