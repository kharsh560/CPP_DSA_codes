#include <iostream>
#include <stdio.h>
using namespace std;
void anotherMethodOfPrintingThis() {
    int n, i, k=1;
    cout<<"Enter the number of rows you want to have for the pattern:-"<<endl;
    cin>>n;
    for (i = 1; i <=n; i++ ) {
        
        for (int j = 1; j <= 3; j++)
        {
            cout<<"{"<<k<<"}";
            k++;
        }
        cout<<endl;
        
    }
}
int main () {
    // int i, n, k, j;
    // cout<<"Enter the number of rows you want to have for the pattern:-"<<endl;
    // cin>>n;
    // for (i = 1; i <=n; i++ )
    // {
    //     k = 3*(i-1) + 1;
    //     for ( j = 1; j <= 3; j++)
    //     {
    //         cout<<"{"<<k<<"}";
    //         ++k;
    //     }
    //     printf("\n");
    // }
    anotherMethodOfPrintingThis();

    return 0;
}

