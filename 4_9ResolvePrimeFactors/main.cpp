#include <iostream>

using namespace std;

bool mark[100001];
int prime[100001];
int primsize;

void init( )
{
    primsize = 0;
    for (int i = 2; i <=100000 ; ++i)
    {
        if( mark[i] )
            continue;
        prime[primsize++] = i;
        if( i>= 1000 )
            continue;
        for (int j = i*i; j <=100000 ; j += i)
        {
            mark[j] == true;
        }
    }
}

int main()
{

    init();
    int n;
    while ( cin>>n )
    {
        int ansprime[30];
        int anssize = 0;
        int ansnum[30];
        for (int i = 0; i < primsize ; ++i)
        {
            if( n%prime[i] == 0)
            {
                ansprime[anssize] = prime[i];
                ansnum[anssize] = 0;
                while ( n%prime[i] == 0 )
                {
                    ansnum[anssize]++;
                    n /= prime[i];
                }
                anssize++;
                if( n==1 )
                    break;
            }
        }
        if( n!= 1 )
        {
            ansprime[anssize] = n;
            ansnum[anssize++] = 1;
        }
        int ans = 0;
        for (int i = 0; i < anssize ; ++i)
        {
            ans += ansnum[i];
        }
        cout<<ans<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}