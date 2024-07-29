#include<iostream>
using namespace std;
void task(int num, int*p1, int*p2){
    int temp=num%10;
    *p2=temp;
    while(num>9){
        num/=10;
    }
    *p1=num;
    return;
}
int main(){
    int num, fd,ld;
    int* p1=&fd, *p2=&ld;
    cout<<"Enter a digit: ";
    cin>>num;
    task(num,p1,p2);
    cout<<"First digit is "<<fd<<endl<<"Last digit is: "<<ld;
    }