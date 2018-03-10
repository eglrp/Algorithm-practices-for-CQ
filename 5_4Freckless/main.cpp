#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define N 101

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


struct Edge
{
    int a, b;
    double cost;
    bool operator < (const Edge &A ) const
    {
        return cost < A.cost;
    }
}edge[6000];

struct Point
{
    double x, y;

    double getdistance( Point A )
    {
        double tmp = ( x - A.x ) * ( x - A.x ) + ( y - A.y ) * ( y - A.y );
        return sqrt(tmp);
    }


}list[101];



int main()
{

    int n;
    while ( cin>>n )
    {
        for (int i = 1; i <= n; ++i)
        {
            cin>>list[i].x>>list[i].y;
        }
        int size = 0;
        for (int i = 0; i <= n ; ++i)
        {
            for (int j = i+1; j <= n ; ++j)
            {
                edge[size].a = i;
                edge[size].b = j;
                edge[size].cost = list[i].getdistance(list[j]);
                size++;
            }
        }

        sort( edge, edge+size );
        for (int k = 0; k <= n ; ++k)
        {
            Tree[k] = -1;
        }

        double ans = 0;
        for( int i=0 ; i < size ; i++ )
        {
            int a = findroot(edge[i].a);
            int b = findroot(edge[i].b);
            if( a != b )
            {
                Tree[a] = b;
                ans += edge[i].cost;
            }
        }

        cout<<ans<<endl;

    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}