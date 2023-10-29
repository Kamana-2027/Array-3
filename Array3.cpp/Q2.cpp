//Find the factorial of a large number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    //factorial

    int f=1;
    for(int i=1;i<=max;i++){
        f=f*i;
    }
    cout<<f<<" ";

}