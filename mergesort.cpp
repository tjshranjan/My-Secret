#include<bits/stdc++.h>
using namespace std;
bool comparethem(const vector<int> &a1,const vector<int> &a2){
        return a1[0]<a2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> v;
        int n=arr.size();
        sort(arr.begin(),arr.end(),comparethem);
        int start=arr[0][0],finish=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(arr[i][0]<=finish){
                finish=arr[i][1];
                continue;
            }
            else{
                v.push_back({start,finish});
                start=arr[i][0];
                finish=arr[i][1];
            }
        }
        v.push_back({start,finish});
        return v;
    }

int main(){
    // int arr[]={2, 6, 3, 4, 7, 2, 10, 3, 2, 1}; [[1,3],[2,6],[8,10],[15,18]]
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int k=5;
    // cout<<getMinDiff(arr,n,k);
    vector<vector<int>> v;
    v.push_back({1,3});
    v.push_back({2,6});
    v.push_back({8,10});
    v.push_back({15,18});
    vector<vector<int>> x=merge(v);
    for(int i=0;i<x.size();i++){
        for(int j=0;j<x[i].size();j++){
            cout<<x[i][j]<<"\t";
        }cout<<endl;
    }
    return 0;
}  