#include <iostream>

using namespace std;

int main()
{
    char n;
    while (1)
    {
        cin.get(n);
        if (n=='\n') break;
        (n>='a' && n<='z')?cout<<(char) (n-32):cout<<n;
    }
}
