#include<iostream>
#include<cmath>
using namespace std;
int jump(int ar[], int n, int k){
    int i=0;
    int m=(sqrt(n));
    while(ar[m] <= k && m<n){
        i=m;
        m+=(sqrt(n));
        if(i>n){
            return -1;
        }
    }
    for(int j=i;j<=m;j++){
        if(ar[j]==k){
            return j;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    int res=0;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        res=jump(ar,n,k);
    }
    res==-1 ? cout<<"Not present" : cout<<"Present";
}