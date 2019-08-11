#include <iostream>

using namespace std;

int main()
{
    string a;
    int swtch=0, amount=0;
    getline(cin,a, '\n');
    for(int i=0;i<a.length();i++)
    switch (a[i])
    {
        case 'a' ... 'z':
            if (swtch==0)
            {
                swtch=1;
                amount+=1;
            }
            break;

        case 'A' ... 'Z':
            if (swtch==0)
            {
                swtch=1;
                amount+=1;
            }
            break;

        default:
            if (swtch==1)
            swtch=0;

    }
    cout << amount << endl;
    return 0;
}
