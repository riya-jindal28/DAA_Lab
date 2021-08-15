#include<bits/stdc++.h>
using namespace std;

int check(int ar[], int n, int k){
    int c=0;
    sort(ar, ar+n);
    int c=0;
    int l=0,r=0;
    while(r<n && l<n){
        if(ar[l]-ar[r]==k || ar[r]-ar[l]==k){
            c++;
            l++;
            r++;
        }
        else if(ar[l]-ar[r]<k || ar[r]-ar[l]>k){

        }
    }
    
}   
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
    check(ar,n,k);
}
}