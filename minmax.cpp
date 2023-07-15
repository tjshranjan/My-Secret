#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min,max;
};

struct Pair getminmax(int arr[], int low , int high){
    struct Pair minmax,mml,mmr;
    if(low==high){
        minmax.max=arr[low];
        minmax.min=arr[low];
        return minmax;
    }
    else if(high-low==1){
        if(arr[high]>arr[low]){
            minmax.max=arr[high];
            minmax.min=arr[low];
        }
        else{
            minmax.max=arr[low];
            minmax.min=arr[high];
        }
        return minmax;
    }
    int mid=(low+high)/2;
    mml=getminmax(arr,low,mid);
    mmr=getminmax(arr,mid+1,high);
    if(mml.max>mmr.max){
        minmax.max=mml.max;
    }
    else minmax.max=mmr.max;
    if(mml.min<mmr.min) minmax.min=mml.min;
    else minmax.min=mmr.min;
    return minmax;
}
int main(){
    int arr[]={9,8,7,6,1,2,3,4,5};
    struct Pair p=getminmax(arr,0,(sizeof(arr)/sizeof(arr[0]))-1);
    cout<<p.min<<endl;
    cout<<p.max<<endl;
    return 0;
}