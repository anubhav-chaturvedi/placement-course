// CALL BY VALUE
#include<iostream>

using namespace std;

int pow(int no, int po) // int pow(int no, int po = 2 )
{
    int ans=1;
    for(int i=0; i<po; i++)
    {
        ans = ans * no;
    }
    return ans;
}

int main()
{
    int n,p;

    cout<<"Enter No. : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>p;

    cout<<"Answer is : "<<pow(n,p)<<endl; // pow(n)

    return 0;
}
