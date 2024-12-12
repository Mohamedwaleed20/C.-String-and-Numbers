#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long long n ;
    cin >> n ;
    string str ;
    cin >> str ;
    for(int  i  = 0 ; i < n ; i++ )
    {
        int temp ;
        cin >> temp ;
        if(isupper(str[i]))
        {
            int x ;
            x = (int)str[i] - 64 ;
            x = x * x ;
            if(x!=temp)
            {
                cout << "NO" ;
                return 0 ;
            }
        }
        if(islower(str[i]))
        {
            int x ;
            x = (int)str[i] - 96 ;
            x = x * 2 ;
            if(x!=temp)
            {
                cout << "NO" ;
                return 0 ;
            }
        }
    }
    cout << "YES" ;
    return 0;
}
