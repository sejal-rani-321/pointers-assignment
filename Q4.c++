/*Find the output of the following code snippet.
ptr2 now points to a
a gets value of b
b gets value of a
*/

#include<iostream>
using namespace std;

int main(){

int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr2 = *ptr;
}

OUTPUT: ptr now points to b