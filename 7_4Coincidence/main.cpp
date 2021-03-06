#include <iostream>
#include <cstring>

using namespace std;

int dp[101][101];
char s1[101], s2[101];

int main()
{

    while ( cin >>s1 >> s2 )
    {
        int l1 = strlen(s1);
        int l2 = strlen(s2);
        for( int i = 0 ; i <= l1 ; i++ )
            dp[i][0] = 0;
        for (int j = 0; j <= l2 ; ++j)
            dp[0][j] = 0;
        for( int i = 1 ; i <= l1 ; i++ )
        {
            for( int j = 1 ; j <= l2 ; j++ )
            {
                if( s1[i-1] != s2[j-1] )
                    dp[i][j] = max( dp[i][j-1] , dp[i-1][j] );
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
            }
        }
        cout<<dp[l1][l2]<<endl;
    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}