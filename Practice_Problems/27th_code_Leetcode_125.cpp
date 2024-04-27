#include <iostream>
#include <stdio.h>
using namespace std;
#include <string>

bool isPalindrome(string s)
{
    cout << s.length() << endl;
    char temp[s.length()];
    // string temp;
    // cout << "temp has " << temp.length() << " characters in it" << endl;
    int j = 0;
    for (int i = 0; i < (s.length()); i++)
    {

        // cout << s[i] << endl;
        if (s[i] == ' ')
        {
            continue;
        }
        if (s[i] <= 47 || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || s[i] >= 123)
        {
            continue;
        }
        if (s[i] >= 65 && s[i] <= 90) //I did '||' instead of '&&' before, which was a blunder
        {
            s[i] = s[i] + 32;
        }
        // cout << s[i] << endl;
        // cout << "This char in string is " << s[i] << endl;
        temp[j] = s[i];
        j++;
    }
    int n = j; // and not (j-1)!
    // cout << n << endl;
    // cout << "temp has " << temp.length() << " characters in it" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << temp[i];
    }
    cout << endl;

    if (n % 2 == 0)
    {
        // cout << "I am here, in even section." << endl;
        for (int k = 0; k <= ((n / 2) - 1); k++) // I forgot '=' in 'k<='
        {
            if (temp[k] != temp[n - 1 - k])
                return false;
        }
        return true;
    }
    if (n % 2 != 0)
    {
        // cout << "I am here, in odd section." << endl;
        for (int k = 0; k <= ((n / 2)); k++) // I forgot '=' in 'k<='
        {
            if (temp[k] != temp[n - 1 - k])
                return false;
        }
        return true;
    }
    return false;
}

int main()
{
    char s[] = "A man, a plan, a canal: Panama";
    if (isPalindrome(s))
    {
        cout << "The phrase is palindrome.";
    }
    else
        cout << "Phrase is not palindrome.";
    // char temp[s.length];
    // cout << "Enter the value of c.";
    // char c;
    // cin >> c;
    // if (c <= 47 || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || c >= 123)
    // {
    //     cout << "Its a non alpha numeric character.";
    // }
    // else
    //     cout << "Its an alphanumeric char.";
}