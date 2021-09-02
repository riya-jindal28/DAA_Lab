#include<iostream>
#include<algorithm>
using namespace std;

int mergesort(int ar[], int n, int l, int r){
    for(int i=0;i<n;i++){
    }
}
void merge (int ar[], int n){
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2;
    mergesort(ar,n,l,mid);
    mergesort(ar,n,mid+1,r);

}