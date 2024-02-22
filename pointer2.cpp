#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=3;
    int *t=&i;
    cout<<(*t)++;
    *t=*t+1;
    cout<<*t;
    cout<<i;
return 0;
}