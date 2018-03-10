#include <iostream>

using namespace std;

int main()
{

    int a, b;
    while( cin >> a >> b )
    {
        if( a == 0 && b == 0 )
            break;
        int ans = 1;
        while ( b != 0 )
        {
            if( b%2 == 1 )
            {
                ans *= a;
                ans %= 1000;
            }
            b /= 2;
            a *= a;
            a &= 1000;
        }
        cout<<ans<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;

    return 0;
}