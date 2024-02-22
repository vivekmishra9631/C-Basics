#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    int n1,n10,n50,n100=0;
    cout<<"please enter the amount:"<<endl;
    cin>>amount;
    switch(amount>=100){
        case 1:
            n100=amount/100;
            amount -= n100*100;
    break;
    }
    switch(amount>=50){
        case 1:
            n50=amount/50;
            amount-=n50*50;
    break;
    }
    switch (amount>=10)
    {
    case 1:
        n10=amount/10;
        amount-=n10*10;
    break;
    }
    switch (amount>=1)
    {
    case 1:
        n1=amount;
    break;
    }
    cout<<"100:"<<n100<<endl;
    cout<<"50:"<<n50<<endl;
    cout<<"10:"<<n10<<endl;
    cout<<"1:"<<n1<<endl;

    
   


return 0;
}