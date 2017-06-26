
#include<iostream>

using namespace std;

int fun(int c,int d){

    int sum,ca;
    while(d!=0){

        sum=c^d;
        ca=c&d;
        c=sum;

        d=ca<<1;

        cout<<d;
    }

return sum;
}

int main(){


    int a,b;
    cin>>a>>b;
    int sum=fun(a,b);
    cout<<sum;

    return 0;
}
