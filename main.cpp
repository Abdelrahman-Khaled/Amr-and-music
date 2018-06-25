#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){ cin>>arr[i];
    arr1[i]=i+1;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                swap(arr1[i],arr1[j]);
            }
        }

    }
    vector<int>v;
    int c=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=k){sum+=arr[i]; c++; v.push_back(arr1[i]);}
        else break;
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}
