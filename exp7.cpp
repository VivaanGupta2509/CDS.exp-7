#include <iostream>
using namespace std;
int main(){
    int array1[5]={19,10,8,17,9};
    int array2[]={20,0,8,18,2};
    int array3[5]={19,10,8};

    cout<<"Traditional Method: "<<endl;
    for(int i=0;i<5;i++){
        cout<<array1[i]<<" "<<endl;
    }
    cout<<endl;

    cout<<"Array 2 = "<<endl;
    for(int j=0;j<5;j++){
        cout<<array2[j]<<" "<<endl;
    }
    cout<<endl;
}
