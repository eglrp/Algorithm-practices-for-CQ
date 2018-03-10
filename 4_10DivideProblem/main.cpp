#include <iostream>
#include <string>
#include <climits>

using namespace std;

bool mark[1010];
int prime[1010];
int primesize;

void init( )
{
    primesize = 0;
    for( int i=2 ; i <= 1000 ; i++ )
    {
        if( mark[i] )
            continue;
        mark[i] = true;
        prime[primesize++] = i;
        for (int j = i*i; j <=1000  ; j += i)
        {
            mark[j] = true;
        }
    }
}

int cnt1[1010];
int cnt2[1010];


int main()
{

    int n, a;
    init();
    while ( cin>>n>>a )
    {
        for (int i = 0; i < primesize; ++i)
        {
            cnt1[i] = cnt2[i] = 0;
        }
        for (int j = 0; j < primesize; ++j)
        {
            int t = n;
            while ( t )
            {
                cnt1[j] += t/prime[j];
                t /= prime[j];
            }
        }

        int ans = INT_MAX;
        for (int k = 0; k < primesize; ++k)
        {
            while ( a % prime[k] == 0 )
            {
                cnt2[k]++;
                a /= prime[k];
            }
            if( cnt2[k] == 0 )
                continue;
            if( cnt1[k] / cnt2[k] < ans )
                ans = cnt1[k] / cnt2[k];
        }

        cout<<ans<<endl;
    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}