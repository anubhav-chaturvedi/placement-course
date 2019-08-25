#include<iostream>

using namespace std;

bool isPrime(int n)
{
    if(n<=2)
    {
        return true;
    }

    for(int i=2; i*i<=n; i++)
    {
        if((n%i)==0)
            return false;
    }

    return true;
}
int main()
{
    int no;
    cout<<"Enter Number to be checked : ";
    cin>>no;

    if(isPrime(no))
    {
        cout<<no<<" is a Prime Number "<<endl;
    }
    else
    {
        cout<<no<<" is not a Prime Number "<<endl;
    }

    return 0;
}
