#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct E
{
    int next;
    int c;
};

vector<E> edge[101];
bool mark[101];
int dis[101];



int main()
{
    int n, m;
    while ( cin >>n >> m )
    {
        if( n == 0 && m == 0 )
            break;
        for (int i = 1; i <=n ; ++i)
        {
            edge[i].clear();
        }

        while ( m-- )
        {
            int a, b, c;
            cin>>a>>b>>c;
            E tmp;
            tmp.c = c;
            tmp.next = b;
            edge[a].push_back(tmp);
            tmp.next = a;
            edge[b].push_back(tmp);
        }

        for (int i = 1; i <= n ; ++i)
        {
            dis[i] = -1;
            mark[i] = false;
        }

        dis[1] = 0;
        mark[1] = true;

        int newp = 1;
        for (int i = 1; i < n ; ++i)
        {
            for (int j = 0; j < edge[newp].size() ; ++j)
            {
                int t = edge[newp][j].next;
                int c = edge[newp][j].c;
                if( mark[t] == true )
                    continue;
                if( dis[t] == -1 || dis[t] > dis[newp] + c )
                    dis[t] = dis[newp] + c;
            }

            int min = INT_MAX;
            for (int j = 1; j <= n ; ++j)
            {
                if( mark[j] == true )
                    continue;
                if( dis[j] == -1 )
                    continue;
                if( dis[j] < min )
                {
                    min = dis[j];
                    newp = j;
                }
            }

            mark[newp] = true;
        }

        cout<<dis[n]<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}