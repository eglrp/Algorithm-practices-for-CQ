#include <iostream>

using namespace std;

long long F[21];

int main()
{
    F[1] = 1;
    F[2] = 2;

    for( int  i = 3 ; i<= 20 ; i++ )
    {
        F[i] = (i-1) * F[i-1] + (i-1) * F[i-2];
    }

    int n;
    while ( cin >> n )
        cout<<F[n]<<endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}