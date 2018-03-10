#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> edge[501];

queue<int> Q;


int main()
{

    int indegree[501];
    int n, m;
    while ( cin>>n>>m )
    {
        if( n == 0 && m == 0 )
            break;
        for (int i = 0; i < n; ++i)
        {
            indegree[i] = 0;
            edge[i].clear();
        }
        while ( m-- )
        {
            int a, b;
            cin>>a>>b;
            indegree[b]++;
            edge[a].push_back(b);
        }
        while ( Q.empty() == false )
            Q.pop();
        for (int i = 0; i < n; ++i)
        {
            if( indegree[i] == 0 )
                Q.push(i);

        }
        int cnt = 0;

        while ( Q.empty() == false )
        {
            int nowp = Q.front();
            Q.pop();
            cnt++;
            for (int i = 0; i < edge[nowp].size(); ++i)
            {
                indegree[edge[nowp][i]]--;
                if( indegree[edge[nowp][i]] == 0 )
                    Q.push(edge[nowp][i]);
            }
        }
        if ( cnt == n )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}