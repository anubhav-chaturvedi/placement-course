#include<iostream>

using namespace std;

int main()
{
    int a=0;
    while(a<10)
    {                           //continue
        a++;
        if(a==5)
            continue;

        cout<<a<<endl;
    }

        a=0;
        while(a<10)
    {                           //break
        a++;
        if(a==5)
            continue;

        cout<<a<<endl;
    }

    return 0;
}
