#include <iostream>
#include <cstring>


using namespace std;
int main()
{

    int a, b;
    char str[40];
    while ( cin>>a>>str>>b )
    {
        int tmp = 0, x = 0;
        int lenth = strlen(str), c = 1;
        for (int i = lenth-1; i >=0 ; --i)
        {
            if( str[i] >= '0' && str[i] <= '9' )
                x = str[i] - '0';
            else
                if( str[i] >= 'a' && str[i] <= 'z' )
                    x = str[i] - 'a' + 10;
                else
                    x = str[i] - 'A' + 10;
            tmp += x *c ;
             c *= a;
        }
        char ans[40];
        int size = 0;
        do
        {
            x = tmp%b;
            ans[size++] = (x<10) ? x+'0' : x-10+'A';
            tmp /= b;
        }while (tmp);

        for (int j = size-1; j >= 0 ; --j)
        {
            cout<<ans[j];
        }
        cout<<endl;
    }


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}