#include <iostream>
using namespace std;

int main()
{
    // char str[] = "goodboysgoestoheavenbadboysgoestobangkok";
    char str[] = "thequickbrownfoxjumpsoverthelazydog";
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int sizeStr = sizeof(str) / sizeof(str[0]);
    int sizeAlpha = sizeof(alpha) / sizeof(str[0]);
    int boolValueCurrIteration;

    for (int i = 0; i < sizeAlpha; i++)
    {
        boolValueCurrIteration = 0;
        for (int j = 0; j < sizeStr; j++)
        {
            if (alpha[i] == str[j])
            {
                boolValueCurrIteration = 1;
                break;
            }
            // else
            // {
            //     boolValue = 0;
            //     break;
            // }
        }
        if (boolValueCurrIteration == 0)
        {
            cout << "No" << endl;
            break;
        }
    }

    if (boolValueCurrIteration == 1)
    {
        cout << "Yes" << endl;
    }
}