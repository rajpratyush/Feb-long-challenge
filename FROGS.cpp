#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int w[n];
        int l[n];
        for(int i=0;i<n;i++)
            cin>>w[i];
        for(int i=0;i<n;i++)
            cin>>l[i];
        if(n==2){
            if(w[0]==1 && w[1]==2) 
                cout<<"0\n";
            else 
            {
                if(l[0]==1)
                cout<<"2\n";
                else
                cout<<"1\n";
            }
        } else if(n==3){
            int a,b,c,a1,b1,c1,ans=0;
            for (int i = 0; i < n; i++)
            {
                if(w[i]==1){
                    a=i;
                    a1=i;
                }
                else if(w[i]==2){
                    b=i;
                    b1=i;
                }
                else if(w[i]==3){
                    c=i;
                    c1=i;
                }
            }
            while(c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1];
                    ans++;
                }
                while(c<=b || c<=a) {
                    c+=l[c1];
                    ans++;
                }
            }
            cout<<ans<<"\n";
        } else if(n==4) {
            int a,b,c,d,a1,b1,c1,d1,ans=0;
            for (int i = 0; i < n; i++)
            {
                if(w[i]==1){
                    a=i;
                    a1=i;
                }
                else if(w[i]==2){
                    b=i;
                    b1=i;
                }
                else if(w[i]==3){
                    c=i;
                    c1=i;
                }
                else if(w[i]==4){
                    d=i;
                    d1=i;
                }
            }
            while(d<=a|| d<=b || d<=c||c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1];
                    ans++;
                }
                while(c<=b || c<=a) {
                    c+=l[c1];
                    ans++;
                }
                while(d<=a|| d<=b || d<=c){
                    d+=l[d1];
                    ans++; 
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
