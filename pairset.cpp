#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        if(n<=1) return 0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            swap(arr[n-1],arr[i]);
            if(k==arr[i]) ans+=1;
            if(k-arr[i]){
                ans+=getPairsCount(arr,n-1,k-arr[i]);
            }
            swap(arr[n-1],arr[i]);
        }
        return ans;
    }
int main(){
    int arr[]={1,5,7,1};
    cout<<getPairsCount(arr,4,6);
    return 0;
}