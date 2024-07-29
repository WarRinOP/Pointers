#include<iostream>
using namespace std;
int sum(int*a, int*b){
    int c= *a+*b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int* p1=&a, *p2=&b;
    cout<<sum(p1,p2);
}