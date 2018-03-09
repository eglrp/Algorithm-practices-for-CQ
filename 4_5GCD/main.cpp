#include <iostream>


using namespace std;

int gcd1( int a, int b)
{
    if( b==0 )
        return a;
    else
        return gcd1(b, a%b);
}

int gcd2( int a , int b)
{
    while( b!= 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{

    int a, b;
    while ( cin>>a>>b )
        cout<<gcd1(a,b)<<" : "<<gcd2(a, b)<<endl;

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}