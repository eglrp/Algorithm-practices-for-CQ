#include <iostream>

using namespace std;

#define N 10000001

int Tree[N];
int findroot( int x )
{
    if( Tree[x] == -1 )
        return x;
    else
    {
        int tmp = findroot( Tree[x] );
        Tree[x] = tmp;
        return tmp;
    }
}


int sun[N];


int main()
{

    int n;
    while ( cin>>n )
    {
        for (int i = 0; i < N; ++i)
        {
            Tree[i] = -1;
            sun[i] = 1;
        }
        while ( n-- != 0 )
        {
            int a, b;
            cin>>a>>b;
            a = findroot(a);
            b = findroot(b);
            if( a != b )
            {
                Tree[a] = b;
                sun[b] += sun[a];
            }
        }
        int ans = 1;
        for (int i = 1; i <=N ; ++i)
        {
            if( Tree[i] == -1 && sun[i] > ans )
                ans = sun[i];
        }
        cout<<ans<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}