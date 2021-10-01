//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&          &&          &&          &&              &&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&     SUM  RAN     &&  /&&&&&&&&&  &&&&&&      &&&&&&      &&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&  &&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&  &&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&  &&&  &&&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&    &&&&&&&&          &&          &&&&&&&&  &&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define F(i,a,b) for(long long int i = (a); i < (b) ; ++i)
#define f1(n) for(long long int i = 0 ; i < (n) ; ++i)
#define f2(n) for(long long int j = 0 ; j < (n) ; ++j)
#define vat(array) vector<ll> array

int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;
  
    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}

int main()
{
      ios_base::sync_with_stdio(false), cin.tie(NULL);
      ll t;
      cin>>t;
      while(t--)
      {
           ll a;
           cin>>a;
           ll k = floorSqrt(a);
           ll kk = k*k;
           if(a-kk==0)
           {
                cout<<k<<" "<<1<<'\n';
           }
           else if((a-kk)<k+1)
           {
                cout<<(a-kk)<<" "<<k+1<<'\n';
           }
           else if((a-kk)>k+1)
           {
                cout<<k+1<<" "<<2*(k+1)-(a-kk)<<'\n';
           }
           else
           {
                cout<<k+1<<" "<<k+1<<'\n';
           }
      }
    return 0;
}
