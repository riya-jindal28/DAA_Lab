#include<iostream>
using namespace std;

void insert(int ar[], int n){
    int key=0;
    for(int j=1;j<n;j++){
        key=ar[j];
        int i=j-1;
        while(i>=0 && ar[i]>key){
            ar[i+1]=ar[i];
            i=i-1;
        }
        ar[i+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
       insert(ar,n);
    }
}
