#include<iostream>
#include<vector>
using namespace std;
vector<int>generateSequence(int n,vector<int>&ans){
    int a=1;
    int b;
    if(n%2==0){
        b=n;
    }
    else b=n-1;

    bool flag=true;
    for(int i=0;i<n;i++){
        if(flag==true){
            ans.push_back(a);
            a+=2;
            flag=false;
        }

        else{
            ans.push_back(b);
            b-=2;
            flag=true;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    generateSequence(n,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}