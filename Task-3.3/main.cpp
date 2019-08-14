#include <iostream>

using namespace std;

int main()
{
    char n;
    int swtch=0, amount=0;
    while (1)
    {
        cin.get(n);
        if (n=='\n') break;
        (n>='a' && n<='z')?cout<<(char) (n-32):cout<<n;
    }
}
