/*Write a program to find the product of two numbers using pointers.*/
#include<iostream>
using namespace std;

int main(){
    int n=2,m=2;
    int *p = &n;
    int *p2 = &m;
    cout << *p * *p2 << endl;
}
