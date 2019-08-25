#include<iostream>

using namespace std;

int factorial(int n)
{
    int ans=1;

    for(int i=n; i>0; i--)
        ans *= i;

    return ans;
}

int main()
{
    int no;
    cout<<"Enter n for factorial : ";
    cin>>no;

    cout<<no<<" ! = "<<factorial(no)<<endl;

    return 0;
}
