#include<bits/stdc++.h>
using namespace std;
int main()
{       //for counting frequency in map
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
   
  
   map<char,int> m;
   string s;

   cin>>s;

   for(int i=1;i<=s.size();i++)
   {
    m[s[i]]++;

   }

    for(int i=0;i<s.size();i++)

    if(m[s[i]]==1)
    {
    cout<<s[i]<<endl;    
    break;
    }
    return 0;
}