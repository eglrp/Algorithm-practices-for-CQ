#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;


bool judge( int x )
{
    if( x < 1 )
        return false;
    int bound = (int) sqrt(x) + 1;
    for (int i = 2; i < bound; ++i)
    {
        if( x%i == 0 )
            return false;
    }
    return true;
}
int main()
{

    int x;
    while ( cin>>x )
    {
        puts( judge(x) ? "yes" : "no");
    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}