#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp= *a ;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter first digit: ";
    cin>>a;
    cout<<"Enter second digit: ";
    cin>>b;
    int* p1 = &a, *p2= &b;
    swap(p1,p2);
    cout<<a<<" "<<b;

}