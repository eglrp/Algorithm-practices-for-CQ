#include <iostream>

using namespace std;

#define N 1000

int Tree[N];
int findroot( int x )
{
    if( Tree[x] == -1 )
        return x;
    else
    {
        int tmp = findroot(Tree[x]);
        Tree[x] = tmp;
        return tmp;
    }
}

int main()
{

    int n, m;
    while ( cin>>n && n!=0 )
    {
        cin>>m;
        for (int i = 1; i <= n ; ++i)
        {
            Tree[i] = -1;
        }
        while ( m-- != 0 )
        {
            int a, b;
            cin>>a>>b;
            a = findroot(a);
            b = findroot(b);
            if( a != b )
                Tree[a] = b;
        }
        int ans = 0;
        for (int i = 1; i <= n ; ++i)
        {
            if( Tree[i] == -1 )
                ans++;
        }
        cout<<ans-1<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}