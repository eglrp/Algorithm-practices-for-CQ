#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;


struct biginteger
{
    int digit[1000];
    int size;
    void init( )
    {
        for (int i = 0; i < 1000; ++i)
        {
            digit[i] = 0;
        }
        size = 0;
    }

    void set( char str[] )
    {
        init();
        int L = strlen(str);
        for (int i = L-1, j = 0, t = 0, c = 1 ; i >= 0 ; --i)
        {
            t += (str[i]-'0') * c;
            j++;
            c *= 10;
            if( j==4 || i==0 )
            {
                digit[size++] = t;
                j = 0;
                t = 0;
                c = 1;
            }
        }
    }

    void output( )
    {
        for( int i = size -1 ; i>= 0 ; i-- )
        {
            if( i != size - 1 )
            {
                cout.fill('0');
                cout<<setw(4)<<digit[i];
            }
            else
                cout<<digit[i];
        }
        cout<<'\n';
    }

    biginteger operator + (const biginteger &A ) const
    {
        biginteger ret;
        ret.init();
        int carry = 0;
        for (int i = 0; i < A.size || i < size ; ++i)
        {
            int tmp = A.digit[i] + digit[i] + carry;
            carry = tmp / 10000;
            tmp %= 10000;
            ret.digit[ret.size++] = tmp;
        }
        if ( carry != 0 )
        {
            ret.digit[ret.size++] = carry;
        }
        return ret;
    }
}a, b, c;


char str1[1002], str2[1002];

int main()
{

    while ( cin>>str1>>str2 )
    {
        a.set(str1);
        b.set(str2);
        c = a + b;
        c.output();
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}