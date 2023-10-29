//Check if an array is a subset of another .

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int a[n];
    cout<<"enter array Element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int arr[m];
    cout<<"Enter subset element:)";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int i,j;
    bool flag=false;//not substring
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==arr[j]){
                flag=true;
        }
    }
}
    if(flag==true) cout<<"Its a subset";
    else cout<<"Not a subset:";

}
