#include <iostream>
#include <vector>
#include <climits>


using namespace std;

struct E
{
    int next;
    int c;
    int cost;
};

vector<E> edge[1001];
int dis[1001];
int cost[1001];
bool mark[1001];



int main()
{

    int n, m;
    int s, t;
    while ( cin>>n>>m )
    {
        if( n == 0 && m == 0 )
            break;
        for (int i = 1; i <=n; ++i)
        {
            edge[i].clear();
        }
        while ( m-- )
        {
            int a,b, c, cost;
            cin>>a>>b>>c>>cost;
            E tmp;
            tmp.c = c;
            tmp.cost = cost;
            tmp.next = b;
            edge[a].push_back(tmp);
            tmp.next = a;
            edge[b].push_back(tmp);
        }
        cin>>s>>t;
        for (int i = 1; i <= n ; ++i)
        {
            dis[i] = -1;
            mark[i] = false;
        }
        dis[s] = 0;
        mark[s] = true;
        int newp = s;
        for (int i = 1; i < n; ++i)
        {
            for ( int j = 0 ; j < edge[newp].size() ; j++ )
            {
                int t = edge[newp][j].next;
                int c = edge[newp][j].c;
                int co = edge[newp][j].cost;
                if( mark[t] == true )
                    continue;
                if( dis[t] == -1 || dis[t] > dis[newp] + c || dis[t] == dis[newp] + c && cost[t] > cost[newp] + co )
                {
                    dis[t] = dis[newp] + c;
                    cost[t] = cost[newp] + co;
                }

            }

            int min = INT_MAX;
            for (int j = 1; j <= n ; ++j)
            {
                if( mark[j] == true )
                    continue;
                if ( dis[j] == -1 )
                    continue;
                if( dis[j] < min )
                {
                    min = dis[j];
                    newp = j;
                }
            }
            mark[newp] = true;
        }
        cout<<dis[t]<<" "<<cost[t]<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}