//Find the first non-repeating element in the array .
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
    int i;
    for(i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j && a[i]==a[j]) break;
            if (j==n) cout<<a[i];
        }
    }
    }
