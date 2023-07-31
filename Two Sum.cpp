//Two Sum
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[],int target,int n){
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            return 1;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}

int main()
{
    int arr[8]={9,7,-4,-5,6,-1,0,11};
    int target=15;
    if(solve(arr,target,8)){
        cout<<"It Exists"<<endl;
    }
    else{
        cout<<"It does not exist"<<endl;
    }
    return 0;
}
