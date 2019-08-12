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
        if ((n>='a' && n<='z') || (n>='A' && n<='Z'))
        {
            if (swtch==0)
            {
                swtch=1;
                amount+=1;
            }
        }
        else if (swtch==1) swtch=0;
    }
    cout << amount;
}
