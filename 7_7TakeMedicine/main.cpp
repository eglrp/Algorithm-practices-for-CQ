#include <iostream>

#define INF INT_MAX

using namespace std;

struct E
{
    int w;
    int v;
}list[101];

int dp[101][1001];



int main()
{

    int s,n;
    while ( cin>>s>>n )
    {
        for( int i = 0 ; i <= n ; i++ )
            cin>>list[i].w>>list[i].v;
        for (int i = 0; i <= s; ++i)
        {
            dp[0][i] = 0;
        }
        for( int i = 1 ; i <= n ; i++ )
        {
            for (int j = s; j >= list[i].w ; --j)
            {
                dp[i][j] = max( dp[i-1][j], dp[i-1][j-list[i].w] + list[i].v );
            }
            for(int j = list[i].w - 1 ; j >= 0 ; j-- )
            {
                dp[i][j] = dp[i-1][j];
            }
        }
        cout<<dp[n][s]<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}