#include <iostream>
#include <string>


using namespace std;

long long F( int num )
{
    if( num == 1 )
        return 2;
    else
        return 3 * F( num - 1 ) + 2;
}

int main()
{
    int n;
    while ( cin>>n )
    {
        cout<<F(n)<<endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}