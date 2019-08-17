#include <iostream>

using namespace std;

int main()
{
    char line[255];
    int swtch=0, amount=0,maxim=0,Pos1=0,Pos2=0;
    for (int i = 0;i<256;i++) line[i]='\0';
    cin.getline(line,256);
    for (int i = 0;i<256;i++)
    {

        if (line[i]=='\n') break;

        if ((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
        {
            if (swtch==0)
            {

                Pos1=i;
                swtch=1;
            }
            amount+=1;
            //cout << amount;
                if (maxim<amount)
                {
                    maxim=amount;
                    Pos2=Pos1;
               }
        }
        else if (swtch==1)
        {
                swtch=0;
               amount=0;
            }
    }
    for (int i = Pos2;i<(Pos2+maxim);i++) cout << line[i];

    return 0;
}
