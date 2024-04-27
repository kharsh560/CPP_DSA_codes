#include <iostream>
#include <stdio.h>
using namespace std;
int testVar = 5;

void coutFxn() {
    cout<<testVar;
    printf("\n"); 
    cout<<&testVar<<" =>here is the address of global 'testVar'";
    cout<<"Again, as this 'testvar' is now printed via another function, in which there is no any 'testVar' named function, hence the global variable 'testVar' is only used here!";
    printf("\n");
    
}

int main()
{
    cout<<testVar;
    printf("\n");
    cout<<&testVar<<" =>here is the address of global 'testVar'";

    printf("\n"); printf("\n");
    cout<<"This '5' you see is value stored in global variable 'testVar' at line 4; Its because, the variable 'testVar' is NOT YET defined in this 'main' function! Hence the compiler is uptill now assuming only one 'testVar' named variable which is global!";
    printf("\n"); printf("\n");

    int testVar;
    cout<<testVar;
    printf("\n");
    cout<<&testVar<<" =>here is the address of local 'testVar'";

    printf("\n"); printf("\n");
    cout<<"But here, you see a GARBAGE VALUE being printed, as because, another variable, having same name; 'testVar' is defined!! Due to which, TWO variables with name:- 'testVar' is created! One being Global, and another being Local! Hence here the garbage value you saw printed is that, which is stored in this LOCAL variable with name 'testVar'!";
    printf("\n"); printf("\n");

    testVar = 89;
    cout<<testVar;

    printf("\n"); printf("\n");
    cout<<"here, as you now entered a value into this local variable 'testVar', hence, that is now printed!";
    printf("\n"); printf("\n");

    coutFxn();
    printf("\n");

    cout<<testVar;

    printf("\n"); printf("\n");
    cout<<"This 'testVar' is printed via the 'main' finction which had a locally defined and value assigned variable with the same name 'testVar'; into which previously '89' was stored, hence u see it!";
    return 0;
}