#include<iostream>
using namespace std;

int binary(int ar[], int l, int r, int k){
    if(r>=l){
    int mid=l+(r-l)/2;
    
    if(k==ar[mid]){
        return mid;
    }
    else if(k<ar[mid]){
        return binary(ar,l,mid-1,k);
    }
    else{
        return binary(ar,mid+1,r,k);
    }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k,res,c=0;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        res=binary(ar,0,n-1,k);
        int i=res;
        int j=res;
        while(ar[i]==k){
            c++;
            i+=1;
        }
        while(ar[j]==k){
            c++;
            j-=1;
        }
    cout<<c-1;
    }
}
