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

   int max=0;
   char c;
   for(char i: s)
   {
    if(m[i]>max)
    {
        max=m[i];
        c=i;
    }
   }
   cout<<c;
    return 0;
}