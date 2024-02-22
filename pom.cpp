#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int *p=&a;
    cout<<p<<endl;
    cout<<*p++<<endl;
    cout<<*++p<<endl;
    cout<<++*p<<endl;
    cout<<(*p)++<<endl;

return 0;
}