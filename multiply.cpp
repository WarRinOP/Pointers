#include<iostream>
using namespace std;
int multiply(int a,int b, int*c){
*c=a*b;
return *c;
}

int main(){

    int a,b,c=1;
    cin>>a>>b;
    int *p1=&c;
    multiply(a,b,p1);
    cout<<c;
}