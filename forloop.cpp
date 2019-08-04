#include<iostream>

using namespace std;

int main()
{
    for(int i=1; i<=10; i++)
    {
        cout<<i<<" "; // first ten natural numbers
    }
    cout<<endl;

        for(int i=1; i<=10; i++)
        {

            if(i%2==0)
            {
                cout<<i<<" "; // even natural numbers from 1 to 10
            }
        }
        cout<<endl;

        for(int i=1; i<=10; i++)
        {
            if((i%2)!=0)
            {
                cout<<i<<" "; // odd natural numbers from 1 to 10
            }
        }
        cout<<endl;

        for(int i=1; i<=10; i++)
        {
            cout<<(i*2)<<" ";
        }
        cout<<endl;

    return 0;

}
