#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
#include <unordered_set>
#include <set>
#include <string> 
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef pair<ll, int> PLI;
typedef pair < ll , ll > PLL;
typedef pair<int, int> PII;
typedef vector < ll > vl;
typedef vector < int > vi;
typedef vector < bool > vb;
typedef vector < pair < int , int > > vpi;
typedef vector < pair < ll , ll > > vpl;
typedef vector < pair < ll , bool > > vpb;
typedef vector < vector < int > > vvi;
typedef vector < vector < ll > > vvl;
 
 
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define pi pair < ll , ll >
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x , val) memset(x , val , sizeof(x))
#define deb(x) cout<<#x<<" :: "<<x<<"\n"
#define deb2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define deb3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define all(x) x.begin() , x.end()
#define alls(x , y) x.begin() , x.end() , y
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl "\n"
 
const ll mxsize = 1e6 + 10;
const ll linf = 1e9;
const ld inf = 10000000000.0;
const ll mod = 1e9 + 7;
 
/******************************************** CODE STARTS FROM HERE *************************************************/ 

int main()
{
    /**************************************************************/
    fastIO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif
    /**************************************************************/    

    ll t;
    cin >> t;
    string dummy;
    getline(cin , dummy);
    while(t--)
    {
        string P;
        getline(cin , P);
        string check;
        if(P[6] == 'A')
        {
            //deb(L[6]);
            if(P[0] == '1' && P[1] == '2')
                check = "00" + P.substr(2 , 3);
            else
            {
                check = P.substr(0 , 5);
            }
        }
        else
        {
            if(P[0] == '1' && P[1] == '2')
            {
                check = P.substr(0 , 5);
            }
            else
            {
                int val = stoi(P.substr(0 , 2));
                val += 12;
                //cout << val << endl;
                check = to_string(val) + P.substr(2 , 3);
            }
            
        }
        ll n;
        cin >> n;
        string ans;
        getline(cin , dummy);
        while(n--)
        {
            string L;
            getline(cin , L);
            string start , finish;
            //deb2(L[6] , L[15]);
            if(L[6] == 'A')
            {
                //deb(L[6]);
                if(L[0] == '1' && L[1] == '2')
                    start = "00" + L.substr(2 , 3);
                else
                {
                    start = L.substr(0 , 5);
                }
            }
            else
            {
                if(L[0] == '1' && L[1] == '2')
                {
                    start = L.substr(0 , 5);
                }
                else
                {
                    int val = stoi(L.substr(0 , 2));
                    val += 12;
                    //cout << val << endl;
                    start = to_string(val) + L.substr(2 , 3);
                }
                
            }
            if(L[15] == 'A')
            {
                //deb(L[15]);
                if(L[9] == '1' && L[10] == '2')
                    finish = "00" + L.substr(11 , 3);
                else
                {
                    finish = L.substr(9 , 5);
                }
            }
            else
            {
                //deb(L[15]);
                if(L[9] == '1' && L[10] == '2')
                {
                    finish = L.substr(9 , 5);
                }
                else
                {
                    int val = stoi(L.substr(9 , 2));
                    val += 12;
                    //cout << val << endl;
                    finish = to_string(val) + L.substr(11 , 3);
                }
            }
            //deb3(check , start , finish);
            if(check >= start && check <= finish)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout << ans << endl;
    }
    
 } 
