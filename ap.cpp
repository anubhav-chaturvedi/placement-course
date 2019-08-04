// Print nth term of AP and sum of n terms given that a=5 and d=2
#include<iostream>

using namespace std;

int main()
{
    int a=5,d=2,n;
    int nterm=0,sum=0;

    cout<<"Enter the value of n : ";
    cin>>n;

    nterm=(a+(n-1)*d);
    cout<<"The nth term of AP is : "<<nterm;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        sum=sum+a;
        a=a+d;
    }
    cout<<"Sum of n terms of AP : "<<sum;

    return 0;
}
