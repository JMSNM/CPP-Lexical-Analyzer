#include <iostream>
using namespace std;

int fib(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));

}


int main()
{
    int num;
    cout<<"How many numbers of the fibonacci series you want to output?: ";
    cin>>num;
    
    
    for (int i = 0; i<num; i++)
    cout<<fib(i)<<endl;
    return 0;
}