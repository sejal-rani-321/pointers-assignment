/*Is the following program snippet correct?*/

#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    int *ptr; 
     ptr = &a;
     *ptr = 5;
    cout << a << endl;
}