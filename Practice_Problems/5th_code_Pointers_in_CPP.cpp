#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a=4;
    int *b = &a;
    cout<<b<<" this is the stuff stored in ptr_var_'b'->address of a "<<endl;
    cout<<&a<<" this is the stuff stored in ptr_var_'b'->address of a "<<endl;

    cout<<endl;

    cout<<a<<" this is the stuff stored in that variable, which is present at address stored in ptr_var_'b'.\n";
    cout<<*b<<" this is the stuff stored in that variable, which is present at address stored in ptr_var_'b'.\n";

    cout<<endl;

    int**c=&b;
    cout<<c<<" this is the stuff stored in ptr_var_'c'->address of b"<<"\n";
    cout<<&b<<" this is the stuff stored in ptr_var_'c'->address of b"<<endl;

    cout<<endl;

    cout<<*c<<"this is the stuff stored in that variable, which is present at address stored in ptr_var_'c'->address of a.";

    cout<<endl;

    cout<<**c<<"this is the stuff stored in that variable, which is present at address stored in ptr_var_'b', which itself is stored in the ptr_var_'c'->address of a.\n";

    cout<<endl;
    return 0;

}