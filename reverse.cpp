#include<iostream>
using namespace std;
int reverse(int*p1){
int rem,rev=0;
while(*p1>0){
    rem=*p1%10;
    rev=rev*10+rem;
    *p1/=10;
}
return rev;
}
int main(){

    int num;
    int* p1=&num;
    cout<<"Enter your digit:";
    cin>>num;
   cout<< reverse(p1);
    
}
    