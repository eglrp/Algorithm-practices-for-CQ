#include <iostream>


using namespace std;
int main()
{

    long long a, b;
    int m;
    while ( cin>>m )
    {
        if( m == 0 )
            break;
        cin>>a>>b;
        a = a + b;
        int ans[50], size = 0;
        do
        {
            ans[size++] = a%m;
            a /= m;
        } while( a != 0 );
        for (int i = size-1; i >=0  ; --i)
        {
            cout<<ans[i];
        }
        cout<<'\n';
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}