#include <iostream>
using namespace std;
int main()
{
    int pm=3000;
    for(int t=1;t<=30;t++)
    {
        if(t%2==0)
        {
            continue;
        }
        if(pm==0)
        {
            break;
        }
        cout<<"you can go out with "<<pm<<" money\n";
        pm=pm-300;
    }
    return 0;
}    