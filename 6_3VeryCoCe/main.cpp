#include <iostream>
#include <queue>

using namespace std;

struct N
{
    int a, b, c;
    int t;
    N( int ta ,int tb, int tc, int tt )
    {
        a = ta;
        b = tb,
        c = tc;
        t = tt;
    }
};

queue<N> Q;
bool mark[101][101][101];

void AtoB ( int &a , int sa, int &b , int sb )
{
    if( sb - b >= a )
    {
        b += a;
        a = 0;
    }
    else
    {
        a -= sb - b;
        b = sb;
    }
}

int BFS( int s, int n, int m )
{
    while ( Q.empty() == false )
    {
        N now = Q.front();
        Q.pop();
        int a, b, c;
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(a, s, b, n);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1);
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(b, n, a, s);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1 );
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(a, s, c, m);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1 );
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(c, m, a, s);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1 );
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }

        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(b, n, c, m);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1 );
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }

        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(c, m, b, n);
        if( mark[a][b][c] == false )
        {
            mark[a][b][c] = true;
            N tmp( a, b, c, now.t+1 );
            if( a == s/2 && b == s/2 )
                return tmp.t;
            if( c == s/2 && b == s/2 )
                return tmp.t;
            if( a == s/2 && c == s/2 )
                return tmp.t;
            Q.push(tmp);
        }

    }

    return -1;
}

int main()
{

    int s, n, m;
    while ( cin >> s >> n >> m )
    {
        if( s == 0 )
            break;
        if( s % 2 == 1 )
        {
            cout<<"NO"<<endl;
            continue;
        }
        for (int i = 0; i <= s; ++i)
        {
            for (int j = 0; j <= n; ++j)
            {
                for (int k = 0; k <= m; ++k)
                {
                    mark[i][j][k] = false;
                }
            }
        }

        N tmp( s, 0, 0, 0);
        while ( Q.empty() == false )
            Q.pop();
        Q.push(tmp);
        mark[s][0][0] = true;

        int rec = BFS(s, n, m );
        if( rec == - 1 )
            cout<<"NO"<<endl;
        else
            cout<<rec<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}