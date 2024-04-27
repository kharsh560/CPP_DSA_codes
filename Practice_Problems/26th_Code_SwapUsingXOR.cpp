#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int a = 3, b = 5; 

    int temp = 0;

    temp = temp ^ a;
    a = (a^a)^b;
    b = (b^b)^temp;

    cout<<a<<" "<<b;
}