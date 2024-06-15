#include<bits/stdc++.h>
using namespace std;
int main()
{       //for counting frequency in pairs
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
   
  
   map<string,int> mp;
   int n;
   cin>>n;

   for(int i=1;i<=n;i++)
   {
    string s;
    cin>>s;
    mp[s]++;

   }

    for(auto x : mp)
        cout<<x.first<<" "<<x.second<<endl;
    

    return 0;
}