#include <iostream>

using namespace std;
int main()
{
    char a[11], b[11];
    while ( cin>>a>>b )
    {
        int ans = 0;
        for (int i = 0; a[i] != 0 ; ++i)
        {
            for (int j = 0; b[j] != 0 ; ++j)
            {
                ans += ( a[i]-'0') * ( b[j] - '0' );
            }
        }
        cout<<ans<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}