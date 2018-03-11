#include <iostream>
#include <climits>

using namespace std;

#define OFFSET 2000

int dp[101][4001];
int list[101];

#define INF INT_MAX


int main()
{

    int t;
    int cas = 0;
    cin>>t;
    while ( t-- != 0 )
    {
        int n;
        cin >> n;
        bool havezero = false;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin>>list[++cnt];
            if( list[cnt] == 0 )
            {
                cnt--;
                havezero = true;
            }

        }
        n = cnt;
        for ( int i = -2000 ; i<= 2000 ; i++ )
            dp[0][i+OFFSET] = -INF;
        dp[0][0+OFFSET] = 0;
        for( int i = 1 ; i <= n ; i++ )
        {
            for( int j = -2000 ; j <= 2000 ; j++ )
            {
                int tmp1 = -INF;
                int tmp2 = -INF;
                if( j + list[i] <= 2000 && dp[i-1][j+list[i]+OFFSET] != -INF )
                    tmp1 = dp[i-1][j+list[i]+OFFSET] + list[i];
                if( j - list[i] >= -2000 && dp[i-1][j-list[i] + OFFSET] != -INF )
                    tmp2 = dp[i-1][j - list[i] + OFFSET] + list[i];

                if( tmp1 < tmp2 )
                    tmp1 = tmp2;
                if( tmp1 < dp[i-1][j+OFFSET] )
                    tmp1 = dp[i-1][j+OFFSET];
                dp[i][j+OFFSET] = tmp1;
            }
        }
        cout<<"Case "<<++cas<<": ";
        if( dp[n][0+OFFSET] == 0 )
            cout<<(havezero ? "0" : "-1")<<endl;
        else
            cout<<dp[n][0+OFFSET]/2<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}