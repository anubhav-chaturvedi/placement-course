#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter No. to check Prime ";
    cin>>n;

    for(i=2; i*i<n; i++)
    {
        cout<<i<<endl;
        if((n%i)==0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }
    }
    if((i*i)>n)
    {
        cout<<n<<" is a Prime No. "<<endl;
    }

    return 0;
}
