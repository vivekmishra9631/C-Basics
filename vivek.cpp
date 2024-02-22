#include<bits/stdc++.h>
using namespace std;
int main(){
    int first_value=5;
    int second_value=15;
    char third_value='a';
    int *p1,*p2;
    char *p3;
    p1=&first_value;
    p2=&second_value;
    p3=&third_value;
    *p1=10;
    *p2=*p1;
     p1=p2;
    *p1=20;
     *p3='b';
     cout<<"firstvalue	is	"<<first_value<<endl;
     cout<<"secondvalue	is	"<<second_value<<endl;
     cout<<"thirdvalue	is	" <<third_value<<endl;
    

    
return 0;
}