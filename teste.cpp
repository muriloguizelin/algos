#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define ll long long int
#define sqr(a) ((a)*(a))
#define all(x) (x).begin(),(x).end()

ll digitSum(ll x)
{
      ll sum = 0;
      while(x>0)
      {
          sum+= x%10;
          x/=10 ;
      }
      return sum;
}
int main(){
      optimize();

      ll n; cin >> n;

      while(n--)
      {
          ll x ; cin >> x;

          ll gcd = 0;

          while(gcd<=1)
          {
               ll d = digitSum(x);

               gcd = __gcd(d,x);
               x++;
          }

          cout << x-1 << endl;
      }

      return 0; 
}