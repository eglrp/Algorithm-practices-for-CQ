#include <iostream>

using namespace std;

int prime[10000];
int primesize;
bool mark[10001];
void init( )
{
    for (int i = 0; i < 10001; ++i)
    {
        mark[i] = false;
    }
    primesize = 0;
    for (int i = 2; i <=10000 ; ++i)
    {
        if( mark[i] == true )
            continue;
        prime[primesize++] = i;
        for (int j = i*i ; j <=10000  ; j+=i)
        {
            mark[j] = true;;
        }
    }
}

int main()
{

    init();
    int n;
    while ( cin>>n )
    {
        bool isoutput = false;
        for (int i = 0; i < primesize; ++i)
        {
            if( prime[i] <n && prime[i]%10==1 )
            {
                if( isoutput == false )
                {
                    isoutput = true;
                    cout<<prime[i];
                }
                else
                    cout<<" "<<prime[i];
            }
        }

        if ( isoutput = false )
            cout<<"-1"<<endl;
        else
            cout<<'\n';
    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}