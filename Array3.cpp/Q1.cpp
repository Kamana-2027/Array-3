//Count the number of triplets whose sum is equal to the given value x.

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
    int idex=-1;
    int num;
    cout<<"Enter num:";
    cin>>num;
    int count=0;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==num)
                count++;
            }
        }
    }
    cout<<count;
}
