#include <iostream>

using namespace std;

int main()
{

    int n;
    while( cin>>n )
    {
        for ( int  x = 0 ; x<= 100 ; x++ )
        {
            for( int y = 0 ; y<= 100 - x ; y++ )
            {
                int z = 100 - x - y;
                if( x * 5 * 3 + y * 3 * 3 + z <= n * 3 )
                    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
            }
        }
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}