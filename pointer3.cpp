#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int arr[10]={1,2,34,45};
    cout<<3[arr];
    char temp[6]="abcde";
    cout<<temp[0]*/
    int first=8;
    int *p=&first;
    int *q=p;
    (*q)++;
    
    cout<<first<<endl;


return 0;
}