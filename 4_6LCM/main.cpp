#include <iostream>

using namespace std;

int gcd( int a ,int b)
{
    return b==0 ? gcd(b, a%b) : a;
}

int main()
{

    int a, b;
    while ( cin>>a>>b )
        cout<<a*b/gcd(a,b)<<endl;

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}