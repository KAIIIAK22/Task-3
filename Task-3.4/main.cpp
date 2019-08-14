#include <iostream>

using namespace std;

int main()
{
    char n;
    int alphabet[26];
    int maximum=0;
    for(int i=0;i<26;i++) alphabet[i]=0;
    while (1)
    {
          cin.get(n);
        if (n=='\n') break;
        if (n>='a' && n<='z')
        {
            alphabet[(int) n -97]+=1;
            if (alphabet[(int) n -97]>maximum) maximum=alphabet[(int) n -97];
        }
        if (n>='A' && n<='Z')
        {
            alphabet[(int) n -65]+=1;
            if (alphabet[(int) n -65]>maximum) maximum=alphabet[(int) n -65];
        }
    }
    for(int i=maximum;i>0;i--)
    for(int b=0;b<26;b++)
    if(alphabet[b]==i) cout<<(char)(b+65)<<'-'<<alphabet[b]<<endl;
}
